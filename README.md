# Agnidrishti Hardware

Agnidrishti is a fire and gas detection system built using ESP32-CAM, GPS, GSM (SIM800L), and Firebase. It continuously monitors temperature, humidity, gas concentration, and flame detection and sends alerts with real-time location via SMS and cloud database logging.

## 🛠 Hardware Components

- ESP32-CAM / ESP32 Dev Board
- SIM800L GSM Module
- NEO-6M GPS Module
- MQ-2 Gas Sensor
- Flame Sensor
- DHT22 Temperature & Humidity Sensor
- Buzzer + LED for local alerts
- Firebase Realtime Database

## 📂 Project Structure

```
Agnidrishti_Hardware/
├── main.ino                 # Core logic for sensor reading and alert handling
├── config.h                 # Pins, WiFi, Firebase, and other constants
└── utils/
    ├── sensor_utils.h       # Functions for sensors (DHT22, MQ-2, Flame)
    └── gps_utils.h          # Functions for GPS parsing using TinyGPS++
```

## 🔧 Setup Instructions

1. Clone or download this repository.
2. Open `main.ino` in Arduino IDE.
3. Install required libraries:
   - `Firebase ESP Client` by Mobizt
   - `TinyGPS++`
   - `DHT sensor library`
4. Update `config.h` with:
   - Your WiFi credentials
   - Firebase API key and URL
   - Alert phone number
5. Upload the code to ESP32 board.
6. Monitor serial output for live logs.

## 📡 Features

- 🔥 Flame detection
- 🧪 Gas level monitoring (MQ-2)
- 🌡 Temperature & humidity tracking (DHT22)
- 🌍 Real-time GPS location
- 📲 SMS alert on emergency
- ☁ Firebase database logging

## 👨‍💻 Author

Developed as part of a smart IoT & Computer Vision Solution for fire and hazard detection in remote areas.

## Achievements
Finalist at the Smart Bengal Hackathon 2025

Recognized for innovation in fire safety and detection technology

---

Feel free to contribute or raise issues!
