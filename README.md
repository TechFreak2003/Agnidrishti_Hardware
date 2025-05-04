# Agnidrishti Hardware

Agnidrishti is a smart fire and gas detection system developed using ESP32-CAM, NEO-6M GPS, SIM800L GSM module, and integrated with Firebase. The system continuously monitors temperature, humidity, gas concentration, and flame presence, triggering instant alerts via SMS and logging data to a cloud database in real time.

A Raspberry Pi-based vision module is incorporated to enable image-based fire detection, enhancing situational awareness and accuracy. The entire system is optimized for remote and fire-prone locations, ensuring timely alerts and robust environmental sensing.

## Key Purpose:

Agnidrishti was specifically developed to address a critical data gap—providing reliable, real-time fire risk and incident datasets to the Government of West Bengal, which currently lacks an organized data infrastructure for fire monitoring and risk management. This system aims to support policy-making, disaster preparedness, and resource allocation through actionable intelligence.

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
