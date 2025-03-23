# Digital Stopwatch using Arduino

This project is a **Digital Stopwatch** built using an **Arduino Uno** and a **16x2 LCD Display**. It includes **Start**, **Stop**, and **Reset** buttons to measure elapsed time.

## 📌 Features
- Start, Stop, and Reset functionality.
- LCD display to show elapsed time.
- Uses push buttons for user control.
- Simple wiring with jumper cables.

## 🛠️ Components Required
| Component | Quantity | Price (PKR) |
|-----------|----------|------------|
| Arduino UNO | 1 | 510 |
| Breadboard | 1 | 130 |
| 16x2 LCD Display | 1 | 310 |
| 10K Ohm Potentiometer | 1 | 250 |
| Push Buttons | 2 | 20 |
| Jumper Wires | 20 | 110 |

## 🏗️ Circuit Diagram
*Refer to the `circuit_diagram.png` in this repository.*

## 🔧 Working
1. The LCD is wired to the **Arduino Uno** using male-to-male jumper wires.
2. The **Start button** (connected to pin 9) starts the stopwatch.
3. The **Stop button** (connected to pin 8) pauses the timer.
4. The **Reset button** resets the stopwatch to zero.
5. The LCD displays the elapsed time.

## 📜 Arduino Code
The Arduino code is in `stopwatch.ino`. It:
- Uses the **LiquidCrystal_I2C** library for LCD control.
- Uses **millis()** to measure elapsed time.
- Handles button inputs for Start, Stop, and Reset.

## 🚀 Future Enhancements
- Add LED indicators for button presses.
- Power the Arduino with a **power bank**.
- Add **hour and minute tracking** for longer durations.
- Implement an **elapsed time display**.

## 📚 References
- Original guide: [How2Electronics](https://www.how2electronics.com/stopwatch-using-arduino-lcd/)
- LCD Data Sheet: *Check the provided documentation.*

---

### **How to Add This to GitHub**
1. **Create a new GitHub repository**.
2. Open **Git Bash** and navigate to your project folder:
   ```sh
   cd path/to/Arduino_Stopwatch
