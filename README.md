# arduino_led_blink
A beginner-friendly embedded systems project demonstrating LED blinking using Arduino Uno, GPIO programming, digital output control, and timing functions with complete documentation, circuit diagram, and project demonstration.

---

# 📖 Project Overview

The LED Blink project is one of the most fundamental embedded systems projects. It demonstrates how to configure a GPIO pin as an output and control an external LED using software. The LED is programmed to remain ON for 2 seconds and OFF for 1 second continuously.

---

# 🎯 Objectives

- Understand the basics of Arduino programming.
- Learn how to configure GPIO pins as digital outputs.
- Interface an external LED with an Arduino Uno.
- Control hardware using software.
- Understand timing functions using `delay()`.

---

# 🛠️ Components Used

| Component     | Quantity |
|---------------|---------:|
| Arduino Uno   |      1   |
| LED (white)   |      1   |
| 220Ω Resistor |      1   |
| Breadboard    |      1   |
| Jumper Wires  |    2–3   |
| USB Cable     |     1    |

---

# 🔌 Circuit Diagram

The circuit diagram is available below.

![Circuit Diagram](images/circuit_diagram.png)

---

# 🔧 Hardware Connections

| Arduino Pin     | Connected To  |
|-----------------|---------------|
| D2              | 220Ω Resistor |
| 220Ω Resistor   | LED Anode (+) |
| LED Cathode (-) | GND           |

---

# 💻 Source Code

The complete Arduino sketch is available in the following directory:

```text
code/led_blink.ino
```

---

# 📷 Working Photos

### Hardware Setup

![Hardware Setup](images/Led_blink.png)

### Breadboard connection

![LED ON](images/breadboard.png)

---

# 🎥 Demo Video

The working demonstration video is available below.

[▶️ Watch Demo hardware Video](videos/0705.mp4)
[▶️ Watch Demo online simulator Video](videos/simulator_video.mp4)
---

# ⚙️ How It Works

1. The Arduino initializes Digital Pin D2 as an OUTPUT.
2. The LED connected to D2 turns ON.
3. The LED remains ON for **2 seconds**.
4. The LED turns OFF.
5. The LED remains OFF for **1 second**.
6. This sequence repeats continuously.

---

# ⚠️ Challenges Faced

- Understanding the correct polarity of the LED.
- Selecting the appropriate resistor value to protect the LED.
- Verifying proper wiring on the breadboard.
- Uploading the Arduino sketch successfully.
- Organizing project files and documentation for GitHub.

---

# 📚 Learning Outcomes

Through this project, I learned:

- Basics of Embedded Systems development.
- GPIO configuration and digital output control.
- Arduino programming structure (`setup()` and `loop()`).
- Using `pinMode()`, `digitalWrite()`, and `delay()`.
- Basic hardware interfacing.
- Importance of current-limiting resistors.
- Creating a professional GitHub project repository.

---

# 🚀 Future Improvements

- Control multiple LEDs.
- Implement non-blocking blinking using `millis()`.
- Add a push button to control the LED.
- Implement PWM-based LED brightness control.
- Expand the project into a Traffic Light Controller.


## 👨‍💻 Author

**Naveen Nekar**

Electronics & Communication Engineering Student  
Passionate about Embedded Systems, Microcontrollers, and IoT.

---

⭐ If you found this project helpful, feel free to star this repository!