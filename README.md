<!-- Place this tag in your head or just before your close body tag. -->
<script async defer src="https://buttons.github.io/buttons.js"></script>
<div style="text-align:center">
    <!-- star -->
    <a class="github-button" href="https://github.com/codycodes/iot-Porg-makerfaire/" data-icon="octicon-star" data-color-scheme="no-preference: light; light: light; dark: light;" data-size="large" aria-label="Star codycodes/iot-Porg-makerfaire on GitHub">Star</a>
    <!-- download -->
    <a class="github-button" href="https://github.com/codycodes/iot-Porg-makerfaire/archive/master.zip" data-icon="octicon-cloud-download" data-size="large" aria-label="Download codycodes/iot-Porg-makerfaire on GitHub">Download</a>
    <!-- issue -->
    <a class="github-button" href="https://github.com/codycodes/iot-Porg-makerfaire/issues" data-color-scheme="no-preference: light; light: light; dark: light;" data-size="large" aria-label="Issue codycodes/iot-Porg-makerfaire on GitHub">Issue</a>
</div>

## About
The NodeMCU is an open-source firmware and development kit which allows us to use a low-cost ESP8266 WiFi MCU to provide “the best platform for IOT application development at the lowest cost” [NodeMCU homepage](https://www.nodemcu.com/index_en.html).  

ESPHome is the software and firmware flasher we’ll be using; it’s a “system to control your ESP8266/ESP32 by simple yet powerful configuration files and control them remotely through Home Automation systems” [ESPHome homepage](https://esphome.io).

**Table of Contents**
  * [About](#about)
  * [Upon Completion](#upon-completion)
  * [Materials](#materials)
    + [Required](#required)
    + [Preferred](#preferred)
  * [Setup](#setup)
    + [Hacking the Porg](#hacking-the-Porg)
    + [ESPHome (local) flashing instructions](#esphome--local--flashing-instructions)
    + [Create Resources and Connect Port to Azure IoT Hub](#create-resources-and-connect-port-to-azure-iot-hub)
  - [Contributing](#contributing)

## Upon Completion
By completing this project you will have a Porg or other hacked interactive 5v plush which can be invoked via web request over the Internet! There are a couple options that you can choose to take as well, including:

1. Soldering the Porg's battery terminals and using the NodeMCU to power it instead (Look ma, no batteries!)
2. Avoid using a relay and use the NodeMCU as the interface when the Porg's button is pressed (Allows you to use the button on the Porg as a Smart Button)

It is *your* choice on what you wish to do with this project! The options above have some tradeoffs which are dicsussed in the section below. 

We've included some fun ideas at the end for things we're doing with them. Please feel free to message us with any ideas you've come up with as well at [ibelieveinporg@cody.codes](mailto:ibelieveinporg@cody.codes)

As of 5-16-20, you can [buy a Porg from Amazon for about $25 (including tax)](https://amzn.to/2WFhYfX)!

<div class="gif-container" style="text-align:center">
    <iframe src="https://giphy.com/embed/BpCYzidFkPgUzFV9cA" width="480" height="201" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/starwars-star-wars-the-last-jedi-BpCYzidFkPgUzFV9cA">via GIPHY</a></p>
</div>

## Materials

### Required
 - [Long, small philips head screwdriver](https://amzn.to/36iYAbQ) (NOTE: I didn't buy this so I would hope it works; the one I use is a "#1" Philips head. Regardless, you'll need a long, thin philips head screwdriver with the right size to be able to get the screws out from the back)
 - [Porg](https://amzn.to/2WFhYfX)
 - [NodeMCU](https://amzn.to/3cKYa0g)
 - [USB Micro **data** Cable](https://amzn.to/2zUJjBC) (you may have some of these lying around)
 - Desktop/laptop computer to flash the NodeMCU
 - Soldering iron
 - Solder
 - Wire

### Optional
 - [5V Relay](https://amzn.to/3etcpGS) If intending to keep Porg's original battery-powered functionality intact. Otherwise if you'll be keeping this powered via USB it's not necessary.

### Preferred
 - 5V LED or Multimeter to test circuit
 - Solder flux and applicator (toothpick works)
 - Solder tip cleaner
 - Hot glue
 - Wire cutters
 - Small wire or DuPont Wires
 - Heat shrink small enough for wire
 - Electrical tape

## Guide
There are two different approaches you can take to hacking your Porg! The first requires a relay and allows you to continue to use the core functionality of the Porg, which is to have it battery powered and not require the ESP8266 to be plugged in for it to work. Unfortunately the power consumption of the Porg running on batteries means it's prone to fail unexpectedly, so instead we recommend going with option 2, which is allows the Porg to function via USB power completely, but sacrifices its ability to function normally when it's not plugged in. It also doesn't require a relay to run, and saves you in the price of batteries. Also with option 2, you can then use the button as a GPIO input to the Porg, which allows you to unleash the full Internet of Porg potential!

> NOTE: If you're going with option 2 (USB Power), you should NOT have batteries connected to the Porg ever! It may damage and break your ESP8266 and/or your Porg!

> DISCLAIMER: We are not responsible in any way shape or form if you encounter problems by following this guide. Follow this guide at your own risk!

### Instructions
These are the general instructions which you'll follow with both methods; at the appropriate time you can choose either option 1 or option 2, depending on what materials you have and which outcome you want.


1\. Unscrew the battery compartment and remove the batteries from the device. Then, cut the ziptie shown here:
  <div style="text-align:center">
  <!-- make the following images centered -->
  <img src="./assets/1.jpeg" height="600">
  </div>
2\. Scrunch up the Porg and you'll find four screws in the back; unscrew them using the extra long philips screw driver.
  <div style="text-align:center">
  <img src="./assets/2.jpeg" height="600">
  <img src="./assets/3.jpeg" height="600">
  </div>
3\. You can now pry the sides of the bottom out which will pop open the internals; who knew this is what a Porg looks like on the inside?!
  <div style="text-align:center">
  <img src="./assets/4.jpeg" height="600">
  <img src="./assets/5.jpeg" height="600">
  </div>
4\. Use wirecutters to snip the light blue wires which are attached to the button. Leave **plenty** of room from the circuitboard of the Porg to the wires. Then snip off the insulation from the wire so that the bare copper wire is showing. Be careful! It's easy to take all the insulation off so hold the bottom of the wire which is attached to the circuitboard with your hand while you pull the top part off.
  <div style="text-align:center">
  <img src="./assets/6.jpeg" height="600">
  </div>

#### Option 1: Hacking the Porg (keeping batteries 🔋)

5\. The basic idea is that we'll be soldering to the button wires, which are used to activate the Porg. In order to keep the button presses working, we will simply "extend" the button to the Node MCU. Then the NodeMCU will also have the ability to act as a button press, which will then activate the relay and complete the circuit, thus activating the Porg! The circuit diagram for this and the soldering afterwards is as follows:
  <div style="text-align:center">
  <img src="./assets/7.jpeg" height="600">
  <img src="./assets/13.png" height="600">
  </div>
  Note! Please keep in mind that these wires are colored Cyan which denotes the button. It doesn't matter which color your wires are but they should plug into the relay where the green part is.
6\. Now that it's soldered in, you should hot glue the connections to the board and the wires to ensure that the connections stay connected. You can use electrical tape if you'd like instead. These are meant to keep the wire connections isolated from each other and the boards.
  <div style="text-align:center">
  <img src="./assets/10.jpeg" height="600">
  </div>
7\. Stuff the electronics back into the Porg, minding the wires.
  <div style="text-align:center">****
  <img src="./assets/8.jpeg" height="600">
  </div>
8\. You can pry the sides apart to fit the battery compartment back in. Rescrew the four screws in the back and the battery case back on. While it won't fit perfectly, there is enough room for the cable to come out and the Porg to still look like it's sitting fine!
  <div style="text-align:center">
  <img src="./assets/11.jpeg" height="600">
  <img src="./assets/12.jpeg" height="600">
  </div>

#### Hacking the Porg (USB Power 🔌)

5\. The first step is to ensure that the batteries are removed and will not be added back to the Porg; adding the batteries back in after we have power via USB can be dangerous. It's best to put some note on the battery panel stating not to put batteries in the product anymore. In addition, in the next step you can simply remove the battery terminals connection and instead solder the connections directly to the NodeMCU:
  <div style="text-align:center">
  <img src="./assets/usb_5.jpg" height="600">
  </div>

6\. The next step is to solder the battery terminals to receive power input from the NodeMCU. Everything must be grounded to the NodeMCU for this to work. You will also ground one of the button wires to the Porg; since all ground pins are connected on a ground plane inside the NodeMCU, just ensure that you connect to any of the four ground pins on the NodeMCU ESP8266. The points to solder are indicated by the red/black wires in the picture:
  <div style="text-align:center">
  <img src="./assets/usb_6.jpg" height="600">
  <img src="./assets/usb_7.jpg" height="600">
  </div>

7\. We will be using the GPIO of the NodeMCU to trigger the Porg. In order to do this we must use the correct wires







Congratulations, your Porg can now be automated! 👏👏👏 


### ESPHome (local) flashing instructions
<!-- These will be updated -->
Follow the dev environment guide at [this link](https://cody.codes/gix-mkrfridays-iot/) but use the `Porg.yaml` file instead of `servo.yaml`. After your board is flashed follow the instructions for general usage.

### Create Resources and Connect Port to Azure IoT Hub

- Prerequisites
  - Azure account (easy to sign up at https://azure.com)
  - Dev tools/knowledge
    - `python` (should be accessible from your system PATH environment variable)
    - `npm` (should be accessible from your system PATH environment variable)
    - `git` (should be accessible from your system PATH environment variable)
    - VS Code To deploy serverless function
    - Some shell experience (e.g. understanding of changing directories with `cd`)
  - Some time to configure and test your newly connected Porg!

<!-- TODO: This should be removed and replaced with the deployment script instructions! -->
1. Navigate to [Azure](https://portal.azure.com/#home), logging in and then click "Create a resource":
  ![](./assets/azure/1.png)
2. Search and select **IoT Hub**
  ![](./assets/azure/2.png)
3. Click "Create"
  ![](./assets/azure/3.png)
4. To avoid charges, you can use the free tier. Create a new resource group as follows
  ![](./assets/azure/4.png)
5. First set of options is the following, then click "Next"
  ![](./assets/azure/5.png)
6. Make sure to choose free tier here, then click "Next"
  ![](./assets/azure/6.png)
7. Tags allow you to group resources across Azure infrastructure; we won't be using them here; click "Next"
   ![](./assets/azure/7.png)
8. Here's an overview of selected options; click "Create" and your hub will be deployed!
   ![](./assets/azure/8.png)
9.  While we're waiting we can setup the serverless function while will make the Porg respond when invoked! Please do the following for VSCode:
    - Please follow the first page of instructions [here](https://docs.microsoft.com/en-us/azure/developer/python/tutorial-vs-code-serverless-python-01) to get your dev environment setup to deploy python functions to Azure.
    - Please install [this extension](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.azure-iot-toolkit) to easily manage IoT Hub + devices and credentials from VSCode.
10. Open a shell and to a directory which you're comfortable working from. Then clone this repo using `git clone git@github.com:codycodes/gix-mkrfridays-iot.git`
    ![](./assets/azure/9.png)
11. Verify that you have serverless function dev environment setup by typing `func` in your shell
   ![](./assets/azure/11.png)
12. From the **c2d_function** folder (`my_dev_folder/gix-mkrfridays-iot/azure_iot_hub/c2d_function`) Open this cloned repo in VS Code. I like to use the `code .` command, but this may not be installed in your `PATH` environment variable. I find it useful though and so if you're interested you can learn about it [here](https://code.visualstudio.com/docs/setup/mac)
13. Initialize the folder in Azure by clicking the Azure icon (extension) in the siebar, then clicking the "Local Project (c2d_function)" to expand it and then click "Initialize"
    ![](./assets/azure/12.png)
15. Now go to the files icon and click the `__init__.py` file to open it up. You can install `pylint` if you'd like linting enabled.
  ![](./assets/azure/13.png)
16. Expand the IoT Hub dropdown in the Explorer pane and select your IoT Hub
    ![](./assets/azure/18.png)
    ![](./assets/azure/19.png)
17. Now that our hub is configured, we'll create a device inside of it. Select "Create Device"
    ![](./assets/azure/20.png)
    ![](./assets/azure/21.png)
19. Once the device is created it'll show up in the explorer. Right click it and click "Copy Device Connection String" for it:
20. Now edit the `__init__.py` code to add the following under the environment variables TODO: rescreencap with `Porg` command:
    ![](./assets/azure/23.png)
    Edit them with your chosen values!
  ![](./assets/azure/30.png)
21. You can now open the command palette in VSCode and type "deploy". Select the option to deploy to function app
    ![](./assets/azure/24.png)
22. Select the basic one
    ![](./assets/azure/25.png)
23. The name of the function app should be *globally unique* so add some random characters in there and make it long if you'd like to ensure it's private. This one isn't private just for example!
   ![](./assets/azure/26.png)
24.  We're using Python 3.7 runtime
   ![](./assets/azure/27.png)
25.  Deploy where you think is best! Now it'll do its magic!
  ![](./assets/azure/28.png)
26.  When it's ready you'll get a message:
    ![](./assets/azure/29.png)
25. Now you'll need to follow the instructions on Microsoft's offical [Azure IoT SDK for ESP8266 devices](https://github.com/Azure/azure-iot-arduino) to flash your Arduino so it's setup for IoTHub! TODO: add the other Arduino client instructions from our fork.
26. Test it out! You can now test out the code by going to the function URL you received; if your Arduino device is setup correctly you should be able to receive a response from it!

## Contributing
Just click the "fork" button, make your changes, and open a pull request! If you need any help please ask :).