# T.A.T.S
Transformer Anti-Theft System. This is an IoT project that seeks to solve the problem of Transformer vandalism. 
Was designed for ZESA so as to protect their Electricity Transfomers from anywhere in the world. 
Ideally it has to be owned by both ZESA and ZRP Police for obvious reasons.  
Please read carefully the instructions below.

Requirements:
Arduino Uno Board + Arduino IDE
PIR Motion Sensor
Pizzo Buzzer
LED Light
Python
XAMPP

Arduino IDE Setup:
Install ESP8266 Boards
Install SoftwareSerial library

Python IDE Setup:
Install pymysql library
Install pyserial Library

Connect Modules to the Arduino Uno Board as follows:

For PIR
brown (OUT) - Digital Pin 3
white (GND) - GND
black (VCC) - 5 V

For LED
red - Digital Pin 13
black - GND

For BUZZER
black (OUT) - Digital Pin 6
red (GND) - GND
brown (VCC) - 3.3 V
