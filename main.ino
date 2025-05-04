#include "config.h"
#include "utils/sensor_utils.h"
#include "utils/gps_utils.h"

#include <WiFi.h>
#include <Firebase_ESP_Client.h>
#include "addons/TokenHelper.h"
#include "addons/RTDBHelper.h"

// Firebase
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;
bool signupok = false;

void setup() {
  Serial.begin(115200);
  initSensors();
  initGPS();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); Serial.print(".");
  }
  Serial.println("\nWiFi Connected");

  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;

  if (Firebase.signUp(&config, &auth, "", "")) {
    Serial.println("SignUp OK!");
    signupok = true;
  } else {
    Serial.println(config.signer.signupError.message.c_str());
  }

  config.token_status_callback = tokenStatusCallBack;
  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);
}

void loop() {
  float temp = readTemperature();
  float hum = readHumidity();
  int gas = readGasLevel();
  bool fire = isFireDetected();
  String location = getLocation();

  if (fire || gas > 400) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    // Send SMS or Firebase alert
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(5000);
}
