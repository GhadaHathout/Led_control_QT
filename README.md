# LED Control System with Arduino and Qt Interface

## **Project Overview**  
This project demonstrates how to control two LEDs connected to an Arduino board using a **Qt-based graphical user interface (IHM)** and serial communication.  

1. **Arduino Program:** Controls two LEDs:  
   - LED 1 (Digital Pin 13): Can be turned **ON** or **OFF**.  
   - LED 2 (Analog Pin 11): Allows brightness control using **PWM**.  

2. **Qt Interface (IHM):** Provides a user-friendly graphical interface to send commands to the Arduino via **serial communication**.  

## **Features**  

### Arduino Program  
- **LED 1 Control (ON/OFF):**  
   - Send `1` to turn the LED **ON**.  
   - Send `0` to turn the LED **OFF**.  

- **LED 2 Brightness Control:**  
   - Send `2` to **increase** the brightness of LED 2.  
   - Send `3` to **decrease** the brightness of LED 2.  

- Ensures intensity is within the range **0 - 255**.  

### Qt Interface (IHM)  
- Intuitive interface with buttons to:  
   - Turn LED 1 ON/OFF.  
   - Adjust LED 2 brightness incrementally.  
- Real-time updates of the LED states.  

## **Code Explanation**  

### Arduino Code  
The Arduino program listens to the serial input and acts based on the commands received:  
- **`1` or `0`:** Controls the state of the LED on Pin 13.  
- **`2` or `3`:** Adjusts the PWM signal on Pin 11 to control LED brightness.  

The program ensures:  
- **Robust control of LED intensity** (limits between 0-255).  
- **Real-time feedback** by sending responses back through the serial port.

### Qt Interface  
- The Qt GUI sends commands (`1`, `0`, `2`, `3`) to the Arduino through a serial connection when buttons are clicked.  

## **How to Run the Project**  

1. **Upload the Arduino Code:**  
   - Open the code in Arduino IDE.  
   - Select the correct port and board, then upload.  

2. **Run the Qt Interface:**  
   - Open the project in Qt Creator.  
   - Build and run the application.  

3. **Connect and Control:**  
   - Ensure the Arduino is connected via USB.  
   - Use the Qt interface to control the LEDs.  

## **Video Demonstration**  
You can see the project in action in this short demo video.

## **License**  
This project is open-source and available under the **MIT License**.  
