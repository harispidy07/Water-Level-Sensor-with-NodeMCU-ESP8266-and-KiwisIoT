# Water Level Sensor with NodeMCU ESP8266 and KiwisIoT

## Project Overview

This project monitors water levels using a water level sensor connected to an ESP8266 NodeMCU. It collects water level readings and transmits the data to the KiwisIoT platform for real-time remote monitoring.

## Hardware Components

- ESP8266 NodeMCU
- Water Level Sensor
- Jumper Wires
- Breadboard
- USB Cable
- Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

| Water Level Sensor | ESP8266 NodeMCU |
| ------------------ | --------------- |
| VCC                | 3.3V            |
| GND                | GND             |
| Analog Output      | A0              |

Ensure the sensor's analog output voltage is within the ESP8266 ADC input limit.

## Working Principle

The water level sensor detects the amount of water through changes in its electrical output. The ESP8266 reads the sensor values and transmits the collected data to the KiwisIoT platform, allowing users to monitor water levels remotely.

## KiwisIoT Dashboard

| Channel    | Data                          |
| ---------- | ----------------------------- |
| Channel 0  | Water Level Sensor Reading    |
| Monitoring | Real-time water level updates |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor water level readings through the KiwisIoT dashboard.

## Applications

- Water tank monitoring
- Smart irrigation systems
- Aquarium water level monitoring
- Industrial water management
- Water storage monitoring
- IoT-based automation

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/water-level-sensor-with-nodemcu-esp8266-and-kiwisiot-3adbe9](https://www.hackster.io/harispidy07/water-level-sensor-with-nodemcu-esp8266-and-kiwisiot-3adbe9)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, Water Level Sensor, and KiwisIoT for real-time water level monitoring._
