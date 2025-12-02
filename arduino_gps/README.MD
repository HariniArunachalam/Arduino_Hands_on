📍 NEO-6M GPS Module With Arduino UNO

A simple project that interfaces the UBlox NEO-6M GPS module with an Arduino Uno and prints latitude, longitude, altitude, speed, and satellite count on the Serial Monitor using the TinyGPS++ library.


🚀 Features

(o) Reads GPS data using NEO-6M module

(o) Extracts:

    -> Latitude & Longitude

    -> Altitude

    -> Speed

    -> Number of satellites

    -> Uses SoftwareSerial for communication

    -> Outputs data cleanly on Arduino Serial Monitor

🛠️ Hardware Requirements

    > Arduino Uno

    > NEO-6M GPS Module

    > Jumper wires

    🔌 Wiring Connections

    | NEO-6M Pin | Arduino UNO Pin |
    | ---------- | --------------- |
    |   VCC      |   5V            |
    |   GND      |   GND           |
    |   TX       |   Pin 4         |
    |   RX       |   Pin 3         |
