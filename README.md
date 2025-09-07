# Internet-of-Things

# Multipurpose Agriculture Bot 

##  Overview
The **Multipurpose Agriculture Bot** is an **IoT-based agricultural robot** designed to assist farmers in performing multiple farming operations efficiently.  
The bot integrates robotics, IoT, and sensors to perform essential tasks such as:
- Ploughing
- Seed sowing
- Monitoring temperature & humidity
- Storing operational data in the cloud

This project was developed as part of the **Internet of Things (22ECSC303) Course Project** at the *School of Computer Science and Engineering, Hubballi*.

---

##  Motivation
Agriculture faces challenges such as:
- Lack of labor availability  
- High labor costs  
- Wastage of seeds & water  
- Limited soil and environmental monitoring  

The bot helps overcome these challenges by automating essential farming tasks, reducing human effort, and improving efficiency.

---

##  Problem Statement
To design an **IoT multi-objective robot** that can:
- Perform ploughing and sowing operations  
- Monitor temperature & humidity  
- Save operational data in the cloud  

---

##  Features
- Remote-controlled movement using a mobile app (via Bluetooth)  
- Autonomous ploughing using DC motor and rack-pinion mechanism  
- Automatic seed sowing with servo motor mechanism  
- Real-time monitoring of **temperature and humidity** using DHT11 sensor  
- Data storage in **Firebase cloud** for tracking operations  
- Cost-effective and user-friendly design  

---

##  Hardware Requirements
- Arduino Uno Rev3  
- TT Gear motors (x4)  
- 60 RPM DC Motor  
- Servo Motor  
- DHT11 Temperature & Humidity Sensor  
- Bluetooth Module (HC-05)  
- Motor Driver (L298N)  
- 12V DC Adapter & 5V DC Adapter  
- Breadboard & Jumper Wires  

---

##  Software Requirements
- **Arduino IDE** – for microcontroller programming  
- **MIT App Inventor** – to design the mobile control application  
- **Firebase** – cloud database to store operational data  

---

##  System Architecture
- **Client Side:** Mobile app built using MIT App Inventor  
- **Server Side:** Arduino Uno receives commands via Bluetooth and controls motors/sensors  
- **Cloud Storage:** Firebase database stores operation logs (movement, sowing, ploughing, temperature, humidity)  

---

##  Cost Estimation
| Component           | Qty | Unit Cost (₹) | Total (₹) |
|---------------------|-----|---------------|-----------|
| Arduino Uno         | 1   | 1100          | 1100      |
| TT Gear Motor       | 4   | 80            | 320       |
| 60 RPM DC Motor     | 1   | 140           | 140       |
| Servo Motor         | 1   | 150           | 150       |
| DHT11 Sensor        | 1   | 120           | 120       |
| Bluetooth Module    | 1   | 250           | 250       |
| Motor Driver        | 2   | 120           | 240       |
| 12V DC Adapter      | 1   | 150           | 150       |
| 5V DC Adapter       | 1   | 150           | 150       |
| Breadboard          | 1   | 80            | 80        |
| Jumper Wires        | Few | 100           | 100       |
| **Total Cost**      |     |               | **₹2800** |

---

##  Usage
1. Power on the bot using 12V & 5V DC adapters  
2. Connect the mobile app to the bot via **Bluetooth (HC-05)**  
3. Use the app to:  
   - Move bot (Forward, Backward, Left, Right)  
   - Start/Stop **Ploughing**  
   - Start/Stop **Sowing**  
   - View **Temperature & Humidity** readings  
4. All data is automatically stored in **Firebase**  

---

##  Functional Requirements
- Easy to operate by farmers  
- Supports ploughing and sowing  
- Real-time temperature & humidity monitoring  
- Saves all operational data in the cloud  
- Reliable, consistent, and eco-friendly  

---

##  Conclusion
The **Multipurpose Agriculture Bot** demonstrates how IoT and robotics can transform agriculture.  
Key outcomes:
- Reduced labor requirements  
- Increased productivity and consistency  
- Real-time environmental monitoring  
- Economic and efficient farming practices  

This project provides a **low-cost, effective solution** for small and medium-scale farmers to embrace modern technology.

---

## Authors
- Swati Mudavi (01FE20BCS163)  
- Prajwal Shavi (01FE20BCS166)  
- Neha Patil (01FE20BCS167)  

**Under the guidance of:**  
Mrs. Meenaxi M Raikar  

---

##  References
- IEEE papers and related research (as per literature survey in project report)  
- IoT Smart Agriculture Applications  
- Arduino, MIT App Inventor, and Firebase documentation
