# Project-Traffic-Light-Controller-in-C
TRAFFIC LIGHT CONTROL
This project implements a basic Traffic Light Controller using Embedded C. The system controls three LEDs (Red, Yellow, and Green) connected to an Arduino board to simulate real-world traffic signal operation.

The program sequentially activates each LED with predefined time delays to represent standard traffic light behavior. This project demonstrates fundamental embedded system concepts such as GPIO configuration, digital output control, and timing logic using C.

It is simulated and tested to verify correct LED sequencing and timing operation

# Traffic Light Controller in C

## Project Overview
This project implements a basic Traffic Light Controller using Embedded C.  
Three LEDs (Red, Yellow, and Green) are controlled sequentially to simulate a real-world traffic signal system.

The program is written in C and demonstrates fundamental embedded system concepts such as GPIO configuration, digital output control, and timing logic.

---

## Objective
- Simulate traffic light operation
- Control LEDs using digital output pins
- Understand basic embedded C programming
- Practice timing and sequencing logic

---

## Components Required
- Arduino Board
- 3 LEDs (Red, Yellow, Green)
- 330Ω Resistors
- Jumper Wires
- Proteus (for simulation, if used)

---

## Circuit Connections
- Connect the positive terminal of each LED to the assigned digital output pin.
- Connect the negative terminal of each LED to ground through a 330Ω resistor.
- Ensure proper power supply to the board.

---

## Working Principle
The program turns ON the LEDs in the following sequence:

1. Red LED – Stop
2. Yellow LED – Wait
3. Green LED – Go

Each LED remains ON for a specific time delay before switching to the next state.  
The sequence repeats continuously to simulate a traffic signal.

---

## Key Concepts Used
- Embedded C Programming
- GPIO (General Purpose Input/Output)
- Bitwise Operations
- Time Delay Functions
- Microcontroller-based control systems

---

# REQUIEMENTS with connection
 -> Arduino Board
 -> 3 different color LEDs
 -> 330 ohm resistors
 -> jumper wire

 # Conncetion:
 Connect the positive terminals of LEDs to the respectives digital output pins in board ,assigned in the code
 Connect the negative terminals of LEDs to the ground

 
