# 🦖 Autonomous Dino Game Player (Arduino Nano + LDR + Servo)

This project makes the Chrome Dino game play automatically when there’s no internet!  
The system detects obstacles on the screen using an **LDR sensor** and makes a **servo press the spacebar** to jump.

## ⚙️ Components
- Arduino Nano  
- MG90S Servo Motor  
- LDR (Light Dependent Resistor)  
- 10kΩ Resistor  
- Jumper Wires  

## 🔌 Circuit Connections
| Component | Arduino Pin | Notes |
|------------|--------------|-------|
| LDR 1 | 5V | Power |
| LDR 2 | A0 | Sensor input |
| 10kΩ resistor | Between A0 and GND | Voltage divider |
| Servo Red | 5V | Power |
| Servo Brown | GND | Ground |
| Servo Orange | D9 | Signal |

## 📷 Setup
Place the LDR near the Dino path on the screen and the servo above the spacebar.

## 🧠 Working
- When a cactus appears → screen darkens → LDR value drops  
- Arduino detects the drop and activates servo → Dino jumps automatically!

## 📸 Images
Put setup photos here: `/images`

---

Made by **Sam Shoni Zacharia**
