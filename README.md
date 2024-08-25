<img src="./Source%20Code%20and%20Circuit%20Diagram/wer.png" alt="Circuit Diagram" width="600" height="60">

## **Table of Contents**

| **Sl No** | **Title**               |
|-----------|-------------------------|
| 1         | Project Title            |
| 2         | About the Project        |
| 3         | Circuit Diagram          |
| 4         | Source Code              |
| 5         | List of Components       |
| 6         | Setup and Installation   |
| 7         | Debugging                |

## **About the Project**

This project is designed to assist individuals with speech disabilities in communicating essential messages using flex sensors. The system involves 5 flex sensors attached to each hand, which are connected to an Arduino Nano. When the sensors are bent, specific messages such as "give me water," "give me food," or "I need help" are played through a loudspeaker. The sounds are stored on an SD card and played using a DFmini module.

## **Circuit Diagram**

![Circuit Diagram](./Source%20Code%20and%20Circuit%20Diagram/Circuit%20Diagram.jpg)



## **Source Code**

The source code for the project can be found in the following file: [source.ino](./source.ino)

## **List of Components**

| **Sl No** | **Name**             | **Image** | **Quantity** | **Price** |
|-----------|----------------------|-----------|--------------|-----------|
| 1         | Flex Sensors          | <img src="./Stock%20Images/Hc-SR04.png" alt="Hc-SR04" width="200" height="150">| 5           | ₹___      |
| 2         | Arduino Nano          | ![Arduino Nano](./images/arduino_nano.png) | 1            | ₹___      |
| 3         | DFmini MP3 Player     | ![DFmini](./images/dfmini.png) | 1            | ₹___      |
| 4         | SD Card               | ![SD Card](./images/sdcard.png) | 1            | ₹___      |
| 5         | Loudspeaker           | ![Loudspeaker](./images/loudspeaker.png) | 1            | ₹___      |

*Note: The prices mentioned above are sourced from Amazon. It is advisable to purchase from a wholesale electronics dealer. We bought our components from SP Road Bangalore, Vishal Electronics.*  
**Location map**: [Vishal Electronics, SP Road Bangalore](https://maps.app.goo.gl/qmP8eU92v7zgoXFd9)

## **Setup and Installation**

1. **Assembling the Circuit**: Begin by connecting the flex sensors, Arduino Nano, DFmini, SD card, and loudspeaker as per the circuit diagram.
2. **Configuring Arduino IDE**: 
   - Open the Arduino IDE.
   - Connect your Arduino Nano to your computer via USB.
   - Go to **Tools > Board > Arduino Nano**.
   - Select the correct port under **Tools > Port**.
3. **Uploading the Code**: 
   - Open the `source.ino` file in Arduino IDE.
   - Click on **Upload** to upload the code to the Arduino Nano.
4. **Testing**: Once uploaded, you can test the system by bending the flex sensors to trigger the appropriate messages.

## **Debugging**

| **Sl No** | **Sensor Name**        |
|-----------|------------------------|
| 1         | [Flex Sensor 1](./tests/flexsensor1_test.ino) |
| 2         | [Flex Sensor 2](./tests/flexsensor2_test.ino) |
| 3         | [Flex Sensor 3](./tests/flexsensor3_test.ino) |
| 4         | [Flex Sensor 4](./tests/flexsensor4_test.ino) |
| 5         | [Flex Sensor 5](./tests/flexsensor5_test.ino) |

### Steps for Debugging

1. **Isolate the Sensor**: Disconnect all other sensors, leaving only the sensor you wish to test connected.
2. **Upload Test Code**: Open the respective sensor test code from the links above, upload it to the Arduino Nano, and observe the output.
3. **Check Responses**: Ensure the sensor is providing the expected input/output by checking in serial monitor of Arduino IDE.
