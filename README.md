# 🔥 Fire Detection and Alert System using PIC Microcontroller

## 📋 Project Overview

This project presents a cost-effective Fire Detection and Alert System using a **PIC microcontroller**. It detects fire hazards in real-time through **smoke and temperature sensors**, and provides both **auditory (buzzer)** and **remote (SMS via GSM module)** alerts to ensure early fire detection and safety.

---

## 🧰 Features

- 🚨 **Smoke and Temperature Detection**  
  Detects early signs of fire using sensors like MQ-2 and LM35.

- ⏱ **Real-Time Monitoring**  
  Continuous monitoring by a PIC microcontroller.

- 🔊 **Buzzer Alert System**  
  Sounds an alarm immediately upon fire detection.

- 📱 **GSM SMS Notifications**  
  Sends SMS alerts to the property owner or emergency contacts.

- 💡 **Low-Cost and Scalable**  
  Designed with affordability in mind, ideal for homes and small businesses.

- 🔋 **Optional Power Backup**  
  Can include battery support during power outages.

---

## 🏠 Applications

- Residential fire safety systems
- Small offices and businesses
- Warehouses and storage facilities
- Educational institutions

---

## 📦 Components Used

| Component            | Quantity | Description                      |
|---------------------|----------|----------------------------------|
| PIC Microcontroller | 1        | e.g., PIC16F877A                 |
| MQ-2 Smoke Sensor   | 1        | Detects smoke particles          |
| LM35 Temperature Sensor | 1    | Measures ambient temperature     |
| GSM Module (SIM800L)| 1        | Sends SMS alerts                 |
| Buzzer              | 1        | Provides sound alert             |
| Power Supply        | 1        | 5V regulated supply              |
| Misc. Components    | -        | Resistors, capacitors, wires etc.|

---

## ⚙️ Working Principle

1. The microcontroller continuously reads values from the smoke and temperature sensors.
2. If the temperature or smoke exceeds a threshold, the buzzer is activated.
3. Simultaneously, the GSM module sends an SMS alert to a predefined mobile number.

---


## 🛠 How to Run

1. Flash the provided code onto your PIC microcontroller using MPLAB or a compatible programmer.
2. Connect the sensors and GSM module as per the circuit diagram.
3. Power on the system.
4. Test by exposing the smoke sensor to smoke or increasing temperature near the sensor.



## 📌 Conclusion

This system provides a simple, effective, and low-cost method for early fire detection using common hardware components. It is adaptable to various environments and scalable depending on need.

---