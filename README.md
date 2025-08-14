# 🦖 Dinosaur Game Animation on LCD (ATmega32)

## 📌 Overview
This is a fun mini-game implemented on an **ATmega32 microcontroller** with a 16x2 LCD display.  
The game features a small dinosaur character that must **jump over obstacles** (trees) to avoid collision — inspired by the Chrome Dino game.

It uses custom LCD characters to animate the dinosaur and obstacles in real-time.

---

## 🛠 Features
- Custom dinosaur and obstacle patterns drawn on LCD.
- Jump mechanic controlled by a button.
- Moving obstacle animation.
- Collision detection (you lose if the dinosaur doesn't jump in time).

---

## 🖥 Hardware Requirements
- **ATmega32 Microcontroller**
- **16x2 Character LCD** (HD44780 compatible)
- **Push Button**
- **Resistors** (for pull-up)
- **Jumper Wires**
- Breadboard or PCB

---

## 📂 Project Structure
Dinosaur_Game_Animation/
- │── App/
- │ └── main.c # Game logic -  and main loop
- │
- │── HALL/ # Hardware Abstraction Layer
- │ ├── LCD/ # LCD driver
- │ ├── LED/ # LED driver (optional)
- │ └── Button/ # Button driver
- │
- │── MCAL/ # Microcontroller Abstraction Layer
- │ └── DIO/ # Digital Input/Output driver
- │
- │── Lib/ # Libraries
- │ ├── STD_TYPES.h
- │ ├── Bit_math.h
- │ └── ...
- │
- └── README.md # This file



---

## 📜 How It Works
1. At startup, the LCD displays **"Start Game"** for 1 second.
2. The dinosaur appears at the bottom row.
3. A tree (obstacle) moves from right to left.
4. If the button is pressed, the dinosaur **jumps** to avoid the tree.
5. The loop continues indefinitely, and the player tries to survive as long as possible.

---


## 🚀 How to Run the Program in Proteus

1. **Download and extract** the project files from GitHub.  
2. **Compile the C code** (using Atmel Studio, avr-gcc, or any AVR IDE) to generate the `.hex` file.  
   - The `.hex` file will be created in your build/output folder.  
3. **Open the Proteus design file**:  
   /Proteus_Design/Dinosaur_Game.pdsprj  
4. In Proteus, **double-click the ATmega32** component in the schematic.  
5. In the “Program File” field, **browse and select your compiled `.hex` file**.  
6. Click **Run** in Proteus to start the simulation.  
7. Press the on-screen button in Proteus to make the dinosaur jump.

## Author
**Sama Amer**

- 💼 LinkedIn: [linkedin.com/in/sama-amer-644179364](https://www.linkedin.com/in/sama-amer-644179364)

- 💻 GitHub: [github.com/sama-amer412](https://github.com/sama-amer412)

---
