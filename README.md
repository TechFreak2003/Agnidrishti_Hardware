# Agnidrishti 


![image](https://github.com/user-attachments/assets/d8908bd1-798d-4cd0-b6b3-619ba14cb35e)

Agnidrishti is a smart fire and gas detection system developed using ESP32-CAM, NEO-6M GPS, SIM800L GSM module, and integrated with Firebase. The system continuously monitors temperature, humidity, gas concentration, and flame presence, triggering instant alerts via SMS and logging data to a cloud database in real time.

A Raspberry Pi-based vision module is incorporated to enable image-based fire detection, enhancing situational awareness and accuracy. The entire system is optimized for remote and fire-prone locations, ensuring timely alerts and robust environmental sensing.

## 📦 Repositories

| Repo | Link |
|------|------|
| 🔗 Frontend Repo | [https://github.com/apu52/AgniDrishti/] |
| 🔗 Backend Repo | [(https://github.com/Sebanti2003/agnidrishtibackend)] |
| 🔗 Hardware Repo | [https://github.com/TechFreak2003/Agnidrishti_Hardware_SBH2025] |

---

## 📽️ Project Demonstration

- 🎥 [Project Demo Video](https://drive.google.com/drive/folders/18cT6864HT63d2ENbc-OQHbwbxe04_LLZ?usp=sharing)  
- 📊 [Pitch Deck](https://www.canva.com/design/DAGjX-3L7l0/qZjkXeM1r-pV1MvVvru4QA/edit?utm_content=DAGjX-3L7l0&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton)  
- 🌐 [Live Demo](https://agni-drishti.vercel.app/)

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

## 🧑‍💻 Team Members

| Name              | Branch | Degree | Year | University | Role         |
|-------------------|--------|--------|------|------------|--------------|
| Himadri Dey       | IT     | B.Tech | 3rd  | Netaji Subhash Engineering College | Backend Developer |
| Sebanti Dasgupta  | CSE    | B.Tech | 3rd  | Netaji Subhash Engineering College | Backend Developer |
| Suvrodeep Das     | CSE    | B.Tech | 3rd  | Netaji Subhash Engineering College | Hardware Expert |
| Arpan Chowdhury   | CSE    | B.Tech | 3rd  | Netaji Subhash Engineering College | Frontend Developer |


---

## 🎓 Mentor

- **Name:** Sukanta Bose  
- **College:** Netaji Subhash Engineering College  
- **Department:** IT

---

## 📫 Contact

For queries or collaborations, feel free to contact us through GitHub or email!

Feel free to contribute or raise issues!
