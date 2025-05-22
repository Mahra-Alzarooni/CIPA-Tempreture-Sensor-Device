CIPA-Tempreture-Sensor-Device
A temperature-sensing device for individuals with CIPA using Arduino.

This Arduino project is designed to assist individuals with **Congenital Insensitivity to Pain with Anhidrosis (CIPA)** by detecting environmental temperature changes and providing **visual alerts using LEDs**. 

Purpose
Since individuals with CIPA cannot feel extreme temperatures, this wearable device acts as an external safety guide to help them avoid dangerous environments.

 Hardware Used
- Arduino Uno
- DHT11 Temperature Sensor
- Red, Green, Yellow, White LEDs
- 220Ω Resistors
- Breadboard & Jumper Wires

Temperature Ranges

| Temperature (°C) | Meaning      | LED Color |
|------------------|--------------|-----------|
| < 20°C           | Cold         | White     |
| 20–26°C          | Moderate     | Yellow    |
| 27–32°C          | Safe/Good    | Green     |
| > 32°C           | Hot/Danger   | Red       |

Thresholds are based on guidance from WHO, Mayo Clinic, and ASHRAE standards** for thermal comfort and heat safety.

 Features
- Real-time temperature reading
- Visual alert via 4 color-coded LEDs
- No vibration or buzzer — quiet and discreet
- Uses Celsius for scientific consistency

 Future Improvements
- Add OLED or LCD screen for displaying temperature
- Bluetooth sync for mobile alerts
- Compact wearable case design

 License
MIT License
