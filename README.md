# 🌱 Multi-Sensor Environmental Monitoring System Using LPC2129

## 📌 Overview

The **Multi-Sensor Environmental Monitoring System** is an embedded systems project developed using the **LPC2129 ARM7 microcontroller**. The system collects environmental data from multiple sensors and provides real-time monitoring of different conditions.

This project integrates a **Water Sensor, Soil Moisture Sensor, LDR (Light Dependent Resistor), and Temperature Sensor** with the LPC2129. The sensor readings are processed by the microcontroller and can be displayed on an LCD for easy monitoring.

The project demonstrates practical implementation of **sensor interfacing, ADC-based data acquisition, embedded C programming, and ARM7 microcontroller applications**.

## ✨ Features

* 🌊 Water level/presence monitoring using a water sensor
* 🌱 Soil moisture monitoring using a soil sensor
* 💡 Light intensity detection using an LDR
* 🌡️ Temperature monitoring using a temperature sensor
* 📊 Real-time sensor data acquisition
* 🖥️ LCD-based data display
* ⚙️ LPC2129 ARM7 microcontroller based system
* 🔌 ADC and GPIO interfacing

## 🛠️ Hardware Components

| Component                | Purpose                      |
| ------------------------ | ---------------------------- |
| **LPC2129**              | Main microcontroller         |
| **Water Sensor**         | Detects water presence/level |
| **Soil Moisture Sensor** | Measures soil moisture       |
| **LDR**                  | Detects light intensity      |
| **Temperature Sensor**   | Measures temperature         |
| **16x2 LCD**             | Displays sensor readings     |
| Power Supply             | Provides required power      |

## 💻 Software Requirements

* Embedded C
* Keil µVision / ARM Development Environment
* Flash Magic or compatible programmer
* LPC2129 development board

## 🔧 Working Principle

The sensors are connected to the LPC2129 microcontroller through appropriate GPIO and ADC interfaces. The LPC2129 periodically reads the sensor outputs and processes the acquired values.

The **water sensor** detects the presence of water, while the **soil sensor** provides information about soil moisture conditions. The **LDR** measures changes in light intensity, and the **temperature sensor** provides the surrounding temperature.

The processed sensor values are displayed on an LCD, allowing the user to monitor environmental conditions in real time.

## 🚀 Applications

* 🌾 Smart agriculture
* 🌱 Plant and soil monitoring
* 🏠 Indoor environmental monitoring
* 💧 Water monitoring systems
* 🌤️ Light and temperature monitoring
* 🎓 Embedded systems educational projects

## 🔮 Future Improvements

* Add GSM/Wi-Fi/Bluetooth connectivity
* Store sensor readings using data logging
* Add IoT/cloud-based monitoring
* Implement automatic irrigation based on soil moisture
* Add alert notifications for abnormal conditions
* Develop a web or mobile dashboard

## 📚 Learning Outcomes

This project provides practical experience in:

* ARM7 LPC2129 programming
* Embedded C development
* ADC interfacing
* Sensor interfacing
* LCD interfacing
* GPIO programming
* Real-time environmental monitoring

## 👨‍💻 Project

**Project:** Multi-Sensor Environmental Monitoring System
**Microcontroller:** LPC2129 ARM7
**Programming Language:** Embedded C
**Sensors:** Water Sensor, Soil Moisture Sensor, LDR, Temperature Sensor
