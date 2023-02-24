<div align="center">

  <img src="https://user-images.githubusercontent.com/62047147/195847997-97553030-3b79-4643-9f2c-1f04bba6b989.png" alt="logo" width="100" height="auto" />
  <h1>315Mhz jammer</h1>
   
  <p>
    315Mhz jammer with Menu
  </p>
   

 
<!-- Badges -->

<a href="https://github.com/cifertech/315Mhz-jammer" title="Go to GitHub repo"><img src="https://img.shields.io/static/v1?label=cifertech&message=315Mhz-jammer&color=white&logo=github" alt="cifertech - 315Mhz-jammer"></a>
<a href="https://github.com/cifertech/315Mhz-jammer"><img src="https://img.shields.io/github/stars/cifertech/315Mhz-jammer?style=social" alt="stars - 315Mhz-jammer"></a>
<a href="https://github.com/cifertech/315Mhz-jammer"><img src="https://img.shields.io/github/forks/cifertech/315Mhz-jammer?style=social" alt="forks - 315Mhz-jammer"></a>
   
<h4>
    <a href="https://twitter.com/cifertech1">TWITTER</a>
  <span> · </span>
    <a href="https://www.instagram.com/cifertech/">INSTAGRAM</a>
  <span> · </span>
    <a href="https://www.youtube.com/c/cifertech">YOUTUBE</a>
  <span> · </span>
    <a href="https://cifertech.net/">WEBSITE</a>
  </h4>
</div> 
 
<br />

<!-- Table of Contents -->
# :notebook_with_decorative_cover: Table of Contents

- [About the Project](#star2-about-the-project)
  * [Pictures](#camera-Pictures)
  * [Features](#dart-features)
- [Getting Started](#toolbox-getting-started)
  * [Schematic](#electric_plug-Schematic)
  * [Installation](#gear-installation)
- [Usage](#eyes-usage)
- [Contributing](#wave-contributing)
- [License](#warning-license)
- [Contact](#handshake-contact)

  

<!-- About the Project -->
## :star2: About the Project
This project is about a jammer in the 315MHz band, the frequency of the jammer can be changed using the menu.

<!-- Pictures -->
### :camera: Pictures

<div align="center"> 
  <img src="https://user-images.githubusercontent.com/62047147/221198444-4ad98650-84f5-40de-8619-4dabf0624ca2.jpg" alt="screenshot" width="Auto" height="Auto" />
</div>


<!-- Features -->
### :dart: Features

- Disruptor in the 315 MHz band
- Frequency control using the menu

<!-- Getting Started -->
## 	:toolbox: Getting Started

We use Oled SSD1306, 315MHz Transmitter and Arduino.

- Oled SSD1306 0.96"
- Arduino Nano
- 315MHz Transmitter
- Micro Switch

<img src="https://user-images.githubusercontent.com/62047147/221202728-79887291-4051-4972-9894-666a5d6fff42.jpg" alt="screenshot" width="Auto" height="300" />

<!-- Schematic -->
### :electric_plug: Schematic
Make the connections according to the table and schematic below.

* Arduino and 315MHz Transmitter.

| Arduino| 315MHz Transmitter|
| ----   | -----|
| 8  | Data |
| 3v3 | VCC |
| GND | GND |

* Arduino and OLED display.

| Arduino| Oled 0.96|
| ----   | -----|
| A5  | SCK |
| A4  | SDA |
| 5v | VDD |
| GND | GND |


* Arduino and Micro Switch.

| Arduino| Micro Switch|
| ----   | -----|
| 5 | -  |
| 6 | -  |
| 7 | -  |

 
* Complete Schematic

<img src="https://user-images.githubusercontent.com/62047147/221203470-abaa6fce-6616-41aa-96f0-f98cc9b212ca.png" alt="screenshot" width="800" height="auto" />


<!-- Installation -->
### :gear: Installation

Before uploading the code you need to install the required library in Arduino IDE. Follow these steps:

- Follow this path Sketch> Include Library> Manage Libraries
- Search for Adafruit SSD1306
- Install the library

-Then search for the “GFX” and install it also.

<!-- Usage -->
## :eyes: Usage

In the first step, by selecting the desired frequency from the options in the menu, the device will start sending a signal to the 315 MHz band, then if necessary, the jammer will be stopped by selecting the up and down switches at the same time, and you will return to the menu.

  <img src="https://user-images.githubusercontent.com/62047147/221204630-2963637a-9e5f-4fd1-80a8-288500c820b1.jpg" alt="logo" width="500" height="auto" />


<!-- Contributing -->
## :wave: Contributing

<a href="https://github.com/cifertech/315Mhz-jammer/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=cifertech/315Mhz-jammer" />
</a>


<!-- License --> 
## :warning: License
 
Distributed under the MIT License. See LICENSE.txt for more information.


<!-- Contact -->
## :handshake: Contact 

CiferTech - [@twitter](https://twitter.com/cifertech1) - CiferTech@gmali.com

Project Link: [https://github.com/cifertech/315Mhz-jammer](https://github.com/cifertech/315Mhz-jammer)
