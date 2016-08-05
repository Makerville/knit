# Production

Knit is made using a Wi-Fi microcontroller which is being used in consumer and industrial applications of all sorts. On this page are some pointers on how we took Knit from an idea to a usable development board. If you are building a product, a lot of the things on this page should be useful to you.

If you'd like more help, reach out to [anuj@makerville.io](mailto:anuj@makerville.io)

## Components


### 88MW300
When making a product with Wi-Fi at it's eart, there are 2 ways to incorporate a radio -

- using a module
- using a chip-on-board (COB)

Knit uses a module for the following reasons -

#### Certifications
The Azurewave CU300 comes with quite a few certifications done for you. Check out the [module datasheet]() for more info

#### Price
Modules usually cost quite less as compared to making your own for smaller batches. If your scale is hundreds of thousands, it makes financial sense to make your own module/COB solution.

#### Availability
Azurewave modules are easily available for prototyping. Check out [Arrow](https://www.arrow.com/en/products/aw-cu300/azurewave) and [BuyIot.net](http://www.buyiot.net/)


### Flash
The CU300 module that we chose does not include an onboard flash which is required to store your code and files. Although Azurewave has another module, called CU300A, which has an onboard 2MB flash, we decided to go with this module so that we could have 4MB of onboard flash. This also makes it possible for someone to desolder the existing one and put in a bigger flash.

<img src="../../img/flash.jpg" width="470"></img>

We are using the Winbond W25Q32 NOR flash. It is interfaced to the 88MW300 using the the QSPI interface. The pins used for interfacing this to the controller are not exposed on the pin headers, and hence are not part of the 25 GPIO pins.


### Regulator (Optional)

The module/controller as well as the flash require 3.3V to operate normally. If you are powering your board using a single cell rechargeable battery, you might not need a separate regulator.

Power issues are usually fickle, and components usually tend to behave unpredictably when they can't source enough current or are given.

### USB-to-serial (Optional)


## Schematics


<a href="https://github.com/Makerville/knit/raw/master/hardware/Knit/mw300breakout.pdf" target="_blank"><img src="../img/schem.png" width="470"></img></a>

## PCB files
Rohit, our hardware ninja, developed the PCBs using the awesome open source EDA tool called KiCad. It's available for Windows, Mac as well as Linux. More about KiCad [here](http://kicad.info/)

<img src="https://github.com/Makerville/knit/raw/master/hardware/Knit/mw300breakout.jpg" width="470"></img>

Once you have KiCad 4.0 or higher setup on your machine, you can download the KiCad project from our [GitHub repo](https://github.com/makerville/knit). The KiCad project file titled `mw300breakout.pro` can be found in `hardware/Knit`.

[Contextual Electronics](https://www.youtube.com/user/contextualelectronic/videos) has a YouTube channel which has some interesting stuff if you are getting started with KiCad.


## Questions ? Suggestions ?

Drop me a line at [anuj@makerville.io](mailto:anuj@makerville.io) !
