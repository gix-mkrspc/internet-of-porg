## About
The NodeMCU is an open-source firmware and development kit which allows us to use a low-cost ESP8266 WiFi MCU to provide “the best platform for IOT application development at the lowest cost” [NodeMCU homepage](https://www.nodemcu.com/index_en.html).  

ESPHome is the software and firmware flasher we’ll be using; it’s a “system to control your ESP8266/ESP32 by simple yet powerful configuration files and control them remotely through Home Automation systems” [ESPHome homepage](https://esphome.io).

## Upon Completion
By completing this project you will have a porg or other hacked 5v plush which can wave be invoked via web request over the Internet!

<div class="gif-container" style="text-align:center">
    <iframe src="https://giphy.com/embed/BpCYzidFkPgUzFV9cA" width="480" height="201" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/starwars-star-wars-the-last-jedi-BpCYzidFkPgUzFV9cA">via GIPHY</a></p>
</div>

# Minimum Project Scope

It's worth noting that all tasks will be directly beneficial to the GIX IoT Network project and not just the MakerFaire attendees and external makers!

## Emoji Guide
💯 = Must do to complete project  
💭 = Nice but can work without it  
⚠️ = Nice but could pose significant time suck and can work without it

## Time
* Arduino Development: 2 - 10 hrs depending on path taken
  * 💯Figuring out the issue for uploading code to NodeMCU by needing to change file (see the [repo](https://github.com/Azure/azure-ioxt-arduino))
    * 💯Documentation 
    * 💭Automation script Linux/Unix
      * ⚠️ Being able to do this on Windows in addition to Linux/Unix - developing a cross-platform Python script
* Azure Development: 2 - 10 hrs depending on path taken
    * 💯Documentation on process
    * 💭ARM template which is able to orchestrate creation of all resources 
      * Function App
      * Azure IoT Hub
      * IoT Device

* 💯Submission to MakerFaire: 2 hrs
  * 💯 writeup on make projects https://makeprojects.com/

* 💭Submisison to Instructbles Arduino contest 2 hrs:
  * https://www.instructables.com/contest/arduino2020/

* 💯 Shifts @ MakerFaire: 1 - 8 hrs

**ESTIMATED TOTAL (AVG time to complete everything): 17 hrs**

## Resources/Value Upon Completion
Arduino device code which can be configured for Wi-Fi in Arduino IDE and can be *easily* flashed by anyone (instructions or automated):
* 💯 Could be solely documentation
* ⚠️ Or it could use the Arduino IDE in conjunction with a python shell script (see the [Arduino CLI](https://github.com/arduino/arduino-cli) project).

💭Depoloyable ARM template on Azure which allows anyone to deploy the following resources:
* Function App
* Azure IoT Hub
* IoT Device

