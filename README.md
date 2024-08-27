# **💫 IoT Project - SMART GLOVES**

## **✨ Table of Contents**
<br>
<div align="center">
<table border="1" cellpadding="5" cellspacing="0">
  <tr>
    <th>Sl No</th>
    <th>Title</th>
  </tr>
  <tr>
    <td>1</td>
    <td><a href="#project-title">Project Title</a></td>
  </tr>
  <tr>
    <td>2</td>
    <td><a href="#about-the-project">About the Project</a></td>
  </tr>
  <tr>
    <td>3</td>
    <td><a href="#circuit-diagram">Circuit Diagram</a></td>
  </tr>
  <tr>
    <td>4</td>
    <td><a href="#source-code">Source Code</a></td>
  </tr>
  <tr>
    <td>5</td>
    <td><a href="#list-of-components">List of Components</a></td>
  </tr>
  <tr>
    <td>6</td>
    <td><a href="#setup-and-installation">Setup and Installation</a></td>
  </tr>
  <tr>
    <td>7</td>
    <td><a href="#debugging">Debugging</a></td>
  </tr>
</table>

</div>


<br>

## **💠About the Project**

This project is designed to assist individuals with speech disabilities in communicating essential messages using flex sensors. The system involves 4 flex sensors attached to each finger of a hand except thumb, which are connected to an Arduino Nano. When the fingers are bent, specific messages such as "I need help", "I need water," "I need food" and "Emergency number" are played through a loudspeaker. The sounds are stored on an SD card and played using a DFmini module.

Working video of the project : 

<br>

## **💡Circuit Diagram**

<p align="center">

<img src="./Source%20Code%20and%20Circuit%20Diagram/Circuit%20Diagram.jpg" alt="Circuit Diagram" style="width: 500px; height: 300px;">

</p>

<br>

## **💻 Source Code**

The source code for the project can be found in folder or downloaded from the following link : [SOURCE CODE](https://drive.google.com/uc?export=download&id=1Sb3FewUtpXnANqbu5UzagMpI6pIyiYNy)

<br>

## **🛠️ List of Components**
<br>

<div align="center">

<table border="1" cellpadding="5" cellspacing="0" style="margin: 0 auto;">
  <tr>
    <th>Sl No</th>
    <th>Name</th>
    <th>Image</th>
    <th>Quantity</th>

  </tr>
  <tr>
    <td>1</td>
    <td>Flex Sensors</td>
    <td><img src="./Stock%20Images/flex%20sensor.jpg" alt="Hc-SR04" width="200" height="100"></td>
    <td>5</td>
  </tr>
  <tr>
    <td>2</td>
    <td>Arduino Nano</td>
    <td><img src="./Stock%20Images/arduino%20nano.png" alt="Arduino Nano" width="200" height="100"></td>
    <td>1</td>
  </tr>
  <tr>
    <td>3</td>
    <td>DFmini MP3 Player</td>
    <td><img src="./Stock%20Images/dfmini.jpg" alt="DFmini" width="200" height="100"></td>
    <td>1</td>
  </tr>
  <tr>
    <td>4</td>
    <td>SD Card</td>
    <td><img src="./Stock%20Images/sdcard.jpg" alt="SD Card" width="200" height="100"></td>
    <td>1</td>
  </tr>
  <tr>
    <td>5</td>
    <td>Loudspeaker</td>
    <td><img src="./Stock%20Images/loudspeaker.png" alt="Loudspeaker" width="200" height="100"></td>
    <td>1</td>
  </tr>
</table>

</div>
<br>

*Note: It is advisable to purchase from a wholesale electronics dealer for lower prices. We bought our components from SP Road Bangalore, Vishal Electronics.*  
**Location map**: [Vishal Electronics, SP Road Bangalore](https://maps.app.goo.gl/qmP8eU92v7zgoXFd9)

<br>

## **⚙️ Setup and Installation**

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

<br>

## **🔍 Debugging**

### **🍀 DFmini Player and Loudspeaker Debugging :**

<p align="center">

<img src="Debugging/Loud%20Speaker%20and%20DFMini/Loud%20Speaker%20and%20DF%20Mini.png" alt="Loud Speaker and DF Mini" width="500" height="300"/>

</p>

The code for DFmini and Loudspeaker can be found in the above folder or downloaded here: [DFmini and Loudspeaker](https://drive.google.com/uc?export=download&id=1SIv7A-lkiFImHIKamiQnW-290AbOn4db)

### Steps for Debugging:

### 1) Isolate DFmini and Loudspeaker
- Disconnect all other sensors and components, leaving only the DFmini player and the loudspeaker connected to the Arduino Nano.

### 2) Prepare the SD Card
- **Format the SD Card**: Format the SD card.
- **Add Audio Files**: Copy your audio files to the root directory of the SD card. Ensure they are in MP3 format and not stored in any folders. The filenames can be anything, such as `song1.mp3`, `alert.mp3`, etc.
- **Insert the SD Card**: Insert the SD card into the DFmini player module.

### 3) Upload Test Code
- **Adjust the Code**: Use the DFmini player test code. Ensure you set the correct RX and TX pins in the code based on your wiring diagram. The code should include a command like `mp3.playTrackNumber(1, 30);` to play the first track with a volume level of 30.
- **Upload the Code**: Upload the code to the Arduino Nano.

### 4) Check Responses
- **DFmini Player**: Ensure the DFmini is correctly reading the SD card and sending audio data to the loudspeaker. The selected audio file should play through the loudspeaker.
- **Loudspeaker**: If the loudspeaker is not producing sound, check the connections and try adjusting the volume or testing with a different audio file.

<br>

---
### **🍀 Flex Sensor and Arduino Debugging :**

<p align="center">

<img src="Debugging/Flex%20Sensor/Flexsensor.png" alt="Flex Sensor" width="500" height="300"/>

</p>

The code for Flex sensor can be found in the above folder or downloaded here: [FLEX](https://drive.google.com/uc?export=download&id=1kzrMreTcd1vTAA712WlcwYfqM531p4qX)

### Steps for Debugging:

### 1) Isolate Flex Sensor and Arduino
- Disconnect all other components, leaving only the flex sensor connected to the A0 pin of the Arduino Nano.

### 2) Prepare the Flex Sensor
- **Check the Connection**: Ensure that one end of the flex sensor is connected to the A0 pin of the Arduino Nano, and the other end is connected to ground (GND) through a resistor.
- **Verify the Wiring**: Double-check the wiring for any loose connections or incorrect placements.

### 3) Upload Test Code
- **Adjust the Code**: Modify the test code to read the analog input from the A0 pin. The code should include a command like `int flexValue = analogRead(A0);` to read the value from the flex sensor.
- **Upload the Code**: Upload the code to the Arduino Nano.

### 4) Check Responses
- **Flex Sensor Reading**: Monitor the serial output to ensure the Arduino is correctly reading the flex sensor's values. The values should change as you bend the sensor.
- **Troubleshoot**: If the sensor is not providing expected readings, check the connections, try a different sensor, or adjust the resistor value.

