<!-- Place this tag in your head or just before your close body tag. -->
<script async defer src="https://buttons.github.io/buttons.js"></script>
<div style="text-align:center">
    <!-- star -->
    <a class="github-button" href="https://github.com/codycodes/iot-porg-makerfaire/" data-icon="octicon-star" data-color-scheme="no-preference: light; light: light; dark: light;" data-size="large" aria-label="Star codycodes/iot-porg-makerfaire on GitHub">Star</a>
    <!-- download -->
    <a class="github-button" href="https://github.com/codycodes/iot-porg-makerfaire/archive/master.zip" data-icon="octicon-cloud-download" data-size="large" aria-label="Download codycodes/iot-porg-makerfaire on GitHub">Download</a>
    <!-- issue -->
    <a class="github-button" href="https://github.com/codycodes/iot-porg-makerfaire/issues" data-color-scheme="no-preference: light; light: light; dark: light;" data-size="large" aria-label="Issue codycodes/iot-porg-makerfaire on GitHub">Issue</a>
</div>

## About
The NodeMCU is an open-source firmware and development kit which allows us to use a low-cost ESP8266 WiFi MCU to provide “the best platform for IOT application development at the lowest cost” [NodeMCU homepage](https://www.nodemcu.com/index_en.html).  

ESPHome is the software and firmware flasher we’ll be using; it’s a “system to control your ESP8266/ESP32 by simple yet powerful configuration files and control them remotely through Home Automation systems” [ESPHome homepage](https://esphome.io).

## Upon Completion
By completing this project you will have a porg or other hacked interactive 5v plush which can be invoked via web request over the Internet! There are a couple options that you can choose to take as well, including:

1. Soldering the porg's battery terminals and using the NodeMCU to power it instead (Look ma, no batteries!)
2. Avoid using a relay and use the NodeMCU as the interface when the Porg's button is pressed (Allows you to use the button on the porg as a Smart Button)

It is *your* choice on what you wish to do with this project! The options above have some tradeoffs which are dicsussed in the section below. 

We've included some fun ideas at the end for things we're doing with them. Please feel free to message us with any ideas you've come up with as well at [ibelieveinporg@cody.codes](mailto:ibelieveinporg@cody.codes)

As of 5-16-20, you can [buy a Porg from Amazon for about $25 (including tax)](https://amzn.to/2WFhYfX)!

<div class="gif-container" style="text-align:center">
    <iframe src="https://giphy.com/embed/BpCYzidFkPgUzFV9cA" width="480" height="201" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/starwars-star-wars-the-last-jedi-BpCYzidFkPgUzFV9cA">via GIPHY</a></p>
</div>

## Discussion

### Options, tradeoffs

### Ideas

## Materials

### Required
 - [Long, small philips head screwdriver](https://amzn.to/36iYAbQ) (NOTE: I didn't buy this so I would hope it works. You need a long, thin philips head screwdriver)
 - [Porg](https://amzn.to/2WFhYfX)
 - [NodeMCU](https://amzn.to/3cKYa0g)
 - [USB Micro **data** Cable](https://amzn.to/2zUJjBC) (you probably have some of these lying around)
 - Desktop/laptop computer to flash the NodeMCU
 - Soldering iron
 - Solder
 - Wire

### Preferred
 - [3D printed NodeMCU case](https://www.thingiverse.com/thing:2786523) (can also use electrical tape)
 - Hot glue
 - Wire cutters
 - DuPont Wires (Female to Male)
 - Electrical tape

## Setup
### Hacking the porg

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
4\. Use wirecutters to snip the light blue wires which are attached to the button. Leave **plenty** of room from the circuitboard of the porg to the wires. Then snip off the insulation from the wire so that the bare copper wire is showing. Be careful! It's easy to take all the insulation off so hold the bottom of the wire which is attached to the circuitboard with your hand while you pull the top part off.
  <div style="text-align:center">
  <img src="./assets/6.jpeg" height="600">
  </div>
5\. The basic idea is that we'll be soldering to the button wires, which are used to activate the porg. In order to keep the button presses working, we will simply "extend" the button to the Node MCU. Then the NodeMCU will also have the ability to act as a button press, completing the circuit and activating the Porg! The circuit diagram for this and the soldering afterwards is as follows:
  <div style="text-align:center">
  <img src="./assets/7.jpeg" height="600">
  <img src="./assets/porg_bb.jpeg" height="600">
  </div>
6\. Now that it's soldered in, you should hot glue the connections to the board and the wires to ensure that the connections stay connected. You can use electrical tape if you'd like instead. These are meant to keep the wire connections isolated from each other and the boards.
  <div style="text-align:center">
  <img src="./assets/10.jpeg" height="600">
  </div>
7\. Stuff the electronics back into the Porg, minding the wires.
  <div style="text-align:center">
  <img src="./assets/8.jpeg" height="600">
  </div>
8\. You can pry the sides apart to fit the battery compartment back in. Rescrew the four screws in the back and the battery case back on. While it won't fit perfectly, there is enough room for the cable to come out and the porg to still look like it's sitting fine!
  <div style="text-align:center">
  <img src="./assets/11.jpeg" height="600">
  <img src="./assets/12.jpeg" height="600">
  </div>
Congratulations, your porg can now be automated! 👏👏👏 

### ESPHome (local) flashing instructions
<!-- These will be updated -->
Follow the dev environment guide at [this link](https://cody.codes/gix-mkrfridays-iot/) but use the `porg.yaml` file instead of `servo.yaml`. After your board is flashed follow the instructions for general usage.

### Create Resources and Connect Port to Azure IoT Hub

- Prerequisites
  - Azure account (easy to sign up at https://azure.com)
  - Dev tools/knowledge
    - `python` (should be accessible from your system PATH environment variable)
    - `npm` (should be accessible from your system PATH environment variable)
    - `git` (should be accessible from your system PATH environment variable)
    - VS Code To deploy serverless function
    - Some shell experience (e.g. understanding of changing directories with `cd`)
  - Some time to configure and test your newly connected porg!


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
9.  While we're waiting we can setup the serverless function while will make the porg respond when invoked! Please do the following for VSCode:
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
20. Now edit the `__init__.py` code to add the following under the environment variables TODO: rescreencap with `porg` command:
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
# Project overview - Just for those working on the project!
# Minimum Project Scope

It's worth noting that all tasks will be directly beneficial to the GIX IoT Network project and not just the MakerFaire attendees and external makers!

## Emoji Guide
💯 = Must do to complete project  
💭 = Nice but can work without it  
⚠️ = Nice but could pose significant time suck and can work without it

## Time
* Arduino Development: 2 - 10 hrs depending on path taken
  * 💯Figuring out the issue for uploading code to NodeMCU by needing to change file (see the [repo](https://github.com/Azure/azure-iot-arduino))
    * 💯Documentation 
    * 💭Automation script Linux/Unix
      * ⚠️ Being able to do this on Windows in addition to Linux/Unix - developing a cross-platform Python script
* Azure Development: 2 - 10 hrs depending on path taken
    * 💯Documentation on process
    * 💭ARM template which is able to orchestrate creation of all resources 
      * Function App
      * Azure IoT Hub
      * IoT Device
      * 💭Key Vault + add documentation to add Key

* 💯Submission to MakerFaire: 2 hrs
  * 💯 writeup on make projects https://makeprojects.com/

* 💭Submisison to Instructbles Arduino contest 2 hrs:
  * https://www.instructables.com/contest/arduino2020/

* 💯 Shifts @ MakerFaire: 1 - 8 hrs
* 💭 Add this project to GIX's GitHub?: 1 hr

**ESTIMATED TOTAL (AVG time to complete everything): 17 hrs**

## Resources/Value Upon Completion
💯Arduino device code which can be configured for Wi-Fi in Arduino IDE and can be *easily* flashed by anyone (instructions or automated):
* 💯 Could be solely documentation
* ⚠️ Or it could use the Arduino IDE in conjunction with a python shell script (see the [Arduino CLI](https://github.com/arduino/arduino-cli) project).

💭Depoloyable ARM template on Azure which allows anyone to deploy the following resources:
* Function App
* Azure IoT Hub
* IoT Device

And let's not forget, another cool GIX project!
## TODO and Delegation
Each emoji represents one or two people:

☁️= Cloud Engineers (two people)  
🔎= Researcher (one person)  
🤖= Systems Engineers (two people)  
📜= Technical Writers (two people)  
👔= Presenters (one to four people)  
🧪= Testers (three people)

- [x] ARM Template (three people) - Justin, Joey, Cody
  - [x] 🔎Get high level resource templates for Function App, Azure IoT Hub, and IoT Device.
  - [x] 🔎Learn Deployment Manager for ARM Templates  
  - [x] ☁️[Learn Basic Structure of ARM template](https://docs.microsoft.com/en-us/azure/azure-resource-manager/templates/overview)
  - [ ] ☁️Sign up for Azure
  - [x] ☁️[Create a sample ARM template](https://docs.microsoft.com/en-us/azure/azure-resource-manager/templates/template-tutorial-create-first-template?tabs=azure-powershell)
  - [x] ☁️[Azure IoT Hub ARM template sample](https://azure.microsoft.com/en-us/resources/templates/?term=iothub)

- [x] Arduino Flashing (two people) - CJ, Cody
  - [x] 🤖Figure out uploading the code to Arduino on multiple platforms (Windows/Linux/Unix) and create documentation including entering Wi-Fi SSID + password and adding code config 
  - [x] 🤖Write a python script to automate changing the files for *Linux/Unix*
  - [ ] 🤖EXTRA: Automate the process on Windows as well and use the [Arduino CLI](https://github.com/arduino/arduino-cli) project

Always time to do this:
- [ ] Submission of Projects (two people) (Yun, Chuck, Ke)
  - [ ] 📜Create GIX account on [Make Projects](https://makeprojects.com/)
    - [ ] 📜Category: Re-thinking the Future - How the pandemic and our response to it is teaching us to think differently. How, where and why we do things. Sustainability. Food. Well-being.
  - [ ] 📜Document process and add in images and other content for Make Projects
  - [ ] 📜Create GIX account on Instructables
  - [ ] 📜Document process and add in images and other content for Instructables

- [ ] Testing of project (Chuck, Nick or Paula, Ke)
  - [ ] 🧪Send out the NodeMCUs
  - [ ] 🧪Azure account
  - [ ] 🧪Deploy ARM template
  - [ ] 🧪Flash Arduino

- [ ] Presentation (one to four people) (TBD)
  - [ ] 👔Show up and talk about the project at Virtually Maker Faire

Maybe with more people and learning this project COULD take up to 40 hours, but this is still an estimate. It could take a lot less time or potentially more time. I've included multiple possibilities so this project can be successful even with as little as 20 hrs of time.

## Weekly updates

## Spring Quarter
### Week 0:
  - Arduino: CJ + codes worked on how to setup a dev environment for ESPHome
    - CJ also contributed valuable docs which are now [live](http://cody.codes/gix-mkrfridays-iot/)
  - Azure:
    - codes reached out to Nick and researched the process to get our GIX MKRSPC account going
    - Justin, Joey, and codes began learning about how to create automated deployment for Azure resources
      - Learned that the python SDK would probably be the easiest way to get the job done
  - Project stuff:
    - Chuck, Yun, and Ke kicked off the process of doing submission for MakerFaire (thanks, all!)
    - Joey wrote docs for the whole ESPHome setup process for MKRFRIDAYS and CJ + codes updated them: http://cody.codes/gix-mkrfridays-iot/
    - As of 5-16-20, you can [buy a Porg from Amazon for about $25, including tax](https://amzn.to/2WFhYfX)!

What we need next:
  - Generic MKRSPC email for MakerFaire/Instructables submission?
  - Azure account status?

### Week 1:
  - Arduino:
    - CJ learned some git and began contributing to a script to help automate setting up Arduino
      - We got far enough to change one of the Arduino.h files for the board and will now test changing the board's `platform.txt` file!
        - After this is confirmed working we can merge this code in and also potentially make a pull request on the [IoT Arduino](https://github.com/Azure/azure-iot-arduino) repo.
  - Azure:
    - codes began a script to make creating an IoT Hub and devices automated. Joey, Justin, and Cody are working on finishing the script so that it can get the output of created devices so we can keep track of them.
      - Justin learned some git and began contributing to the script to help automate provisioning Azure cloud resources
      - codes merged some code for it and we now have a solid plan including the information we need and how it can be passed into Azure Functions and saved for later use.
    - Joey finished docs for ESPHome setup process for MKRFRIDAYS and CJ + codes updated them: http://cody.codes/gix-mkrfridays-iot/
    - Chuck worked on the MakerFaire application and emailed them since it'd closed without notice!
    - Lots of documentation on how to set all of this up manually (30 + steps!)

*Next steps:*
  - Azure account status?
  - We need a person to create a file with each line containing a cohort member's first name; if the name has spaces then replace them with hyphens.
  - dev: 
    - grab information from these devices so that we can easily map students to them and their identifiers. 
      - By the end of this week we'll probably have everything done for initial deployment, meaning we can create devices automatically now and hook them up to Azure Functions.
      - This automation will be two-fold since we can then create Azure functions based on all of the devices and then create unique + innovative ways to attach them together!
        - Discussions on how to facilitate acceptable exchange between devices and the logic that entails
  - Since we all have porgs in CRW now we should come up with a method for connecting them together!

## Summer Quarter
### Week 0
  - Arduino:
    - Finished script for ESP8266
    - Scrolling screen using LED matrix on ESP32
    - Separated, moved Arduino files; now in a *quickstarts* folder
    - More documentation completed!
  - Azure:
    - Fully functional deployment script (400+ lines!)
      - Creates resources we need for MVP
    - 

*Next steps:*
  - Arduino:
    - Setup ESP32 automated config (like 8266)
    - Figure out best way to attempt to merge our script into [the repo](https://github.com/Azure/azure-iot-arduino)
    - More input/output interfaces!
      - Should be low enough frequency to have 200 messages a day currently (8,000 free messages/day / about 40 students [each with one device]) but optimally less than 24 to build in future cohorts' usage
    - Documentation for the screen interface
      - Circuit diagram
  - Azure:
    - Document the resources and flow of deployment script
    - Discussion time to figure out things
      - backend
        - creating awesome ways for users to get setup!
        - security ⛓
        - enforcing limits
      - whether to move this repo to GIX
  - Porg:
    - Survival - poke a porg Tuesdays starting 7-7-2020!

## 💡Ideas:
  - QR code activates the Porg!
    - Depending on access we may be able to use the [UW API](https://wiki.cac.washington.edu/display/idcardws/Photo+Resource) to display the student's photo next to their QR code to say "hi"
      - Could be offline (as a book each student gets) or online (as a web interface)
      - [Sample](https://note.nkmk.me/en/python-pillow-qrcode/) of what it could look like:  
  ![](./assets/sample_qr.png)
    - If we get fancy we can use a Raspberry Pi and hook it up to a [YouTube livestream](https://www.makeuseof.com/tag/live-stream-youtube-raspberry-pi/) so you can "interact" with the Porg in the MKRSPC!
  - Control Porg via other interfaces
    - [emotion-check](https://github.com/JimPaine/emotion-checker/tree/master/env) uses a serverless function to hook up your webcam to Azure Cognitive Services, allowing you to control the porg with your emotions (use the force!)
  - More automation = better outcome
    - Use [Terraform](https://www.terraform.io) to automate the deployment even further!
    - Use [Azure Pipelines](https://docs.microsoft.com/en-us/azure/devops/pipelines/?view=azure-devops) to facilitate deployment of these resources!
  - Print out some of these rad things and make fully functional multifunction IoT interfaces!
  ![](./assets/arduino_bb.png)

## Contributing
Just click the "fork" button, make your changes, and open a pull request! If you need any help please ask :).