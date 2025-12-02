# 🚦 Arduino Uno Traffic Light Project

This is a basic traffic light simulation using an Arduino Uno. It cycles through red, yellow, and green LEDs, just like a real-world traffic signal.

## 🔧 Components Required

- Arduino Uno board
- Red LED
- Yellow LED
- Green LED
- 3 × 220Ω resistors
- Breadboard
- Jumper wires
- USB cable

## ⚙️ Circuit Connections

| LED Color | Arduino Pin |
|-----------|--------------|
| Red       | 12         |
| Yellow    | 11           |
| Green     | 10           |

Each LED is connected to the corresponding pin via a 220Ω resistor, and the cathode is connected to GND.

## 🧠 Project Functionality

The traffic light operates in the following sequence:

1. Green LED turns ON for 5 seconds
2. Yellow LED turns ON for 2 seconds
3. Red LED turns ON for 5 seconds
4. Repeats in a loop
