Makerville Knit
=======

**The <strike>prototype</strike> production-ready WiFi board !**


<table>
          <tr>
           <td>
           <p>For people in India</p>
           </td>
           <td>
           <a href="https://www.instamojo.com/makerville/knit-beta/" rel="im-checkout" data-behaviour="remote" data-style="dark" data-text="Buy" data-token="ed5a4059401167126952178eb636717a"></a>
<script src="https://d2xwmjc4uy2hr5.cloudfront.net/im-embed/im-embed.min.js"></script>
</td>
</tr>
        <tr>
          <td>
        <p>For people outside India</p></td>
        <td>
        <form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">
<input type="hidden" name="cmd" value="_s-xclick">
<input type="hidden" name="hosted_button_id" value="NE6DD2M32CYC8">
<input type="image" src="https://www.paypalobjects.com/en_GB/i/btn/btn_paynowCC_LG.gif" border="0" name="submit" alt="PayPal – The safer, easier way to pay online!">
<img alt="" border="0" src="https://www.paypalobjects.com/en_GB/i/scr/pixel.gif" width="1" height="1">
</form>
       </td>
     </tr>

</table>

Knit is an industrial grade WiFi development board to build secure applications. It is based on the <a href="http://www.marvell.com/microcontrollers/88MW300/302/" target="_blank">88MW300</a> SoC from Marvell.

Features
---

* 32-bit Cortex M4F at 200Mhz
* 512KB SRAM
* 4MB flash with XIP support
* 802.11 b/g/n with FCC, IC, CE certification
* 1 user LED & 1 user button

The multiplexed peripherals include -

|#|Protocol|
|:-:|:-:|
| 2| UARTs|
| 2| I2C channels|
| 7| PWM/GPT|
| 2| SSPs|
| 6| ADCs - 16 bit|
| 2| Wake up|
| 1| DAC - 10 bit|
| 25| GPIOs|

SDK
---

* MQTT client real time communication with brokers
* Soft AP for provisioning
* Secure connections using TLS 1.2
* FreeRTOS as the underlying real time operating system
* lwIP TCP/IP stack
* Supported on Windows, Linux, OS X operating systems
* More features coming soon !


Links to -

* [Source code](https://github.com/marvell-iot/aws_starter_sdk)
* Documentation
  * [API](https://marvell-iot.github.io/aws_starter_sdk/)
  * [Marvell's SDK docs](http://marvell-iot.github.io)
* Support
  * [Chat](https://gitter.im/marvell-iot/ez-connect-lite)
  * [Issues](https://github.com/marvell-iot/aws_starter_sdk/issues)

Development tools
---

* On board USB to serial converter for programming and console
* Open source GCC ARM toolchain for development
* OpenOCD debugging using external dongle
* Support for Eclipse IDE



All of these can be found on the bottom side of the module, which is visible on the Knit board.


Featured In
---
- [Hackaday](http://hackaday.com/2016/04/05/makerville-knit-industrial-strength-wifi-breakout/)



Documentation
====

For documentation on how to setup your development host, compilation, uploading, etc. head over to [Marvell's SDK page](http://marvell-iot.github.io/docs)

Pin Map
---

- Knit has 2 16 pin headers, which are breadboard friendly.It also has a 4 pin header for easy SWD programming.
- The header file where all the pin functions are defined is [mw300_pinmux.h](https://github.com/marvell-iot/aws_starter_sdk/blob/master/sdk/src/incl/sdk/drivers/mw300/mw300_pinmux.h)





|No|     Fn 0|         Fn 1      | Fn 2|        Fn 3|       Fn 4|       Fn 5|
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|6	|  TDO	    |  GPIO6    |  I2C1_SDA	|DIG_POR|    RC32M      |AUPLL_DIGTP0|
|9 |  TDI	      |GPIO9	  |UART2_TXD   |SSP2_TXD   |I2C1_SDA   |AUPLL_DIGTP3|
|10 |	TRST_N       |GPIO10|	 UART2_RXD   |SSP2_RXD  | I2C1_SCL|   PHY_MON0|
|7	|  TCK         | GPIO7|	  UART2_CTSn | SSP2_CLK|   I2C0_SDA   |AUPLL_DIGTP1|
|8	|  TMS	      |GPIO8	 | UART2_RTSn  |SSP2_FRM  | I2C0_SCL|   AUPLL_DIGTP2|
|25 |    XTAL32K_IN  | GPIO25|     I2C1_SDA	|		-|-|-|
|26  |   XTAL32K_OUT|  GPIO26 |    I2C1_SCL|-|-|-|			
|23  |  WAKE_UP1|	 GPIO23     |UART0_CTSn|  -|SFLL_200N|  COMP_IN_P|
|22  |  WAKE_UP0|	 GPIO22		|-|-|-|		-|
|GND|GND|GND|GND|GND|GND|GND|					
|3	 | GPIO3|        GPT0_CH3 |  UART0_RXD   |SSP0_RXD|-|-|		
|2	|  GPIO2 |       GPT0_CH2|   UART0_TXD  | SSP0_TXD|-|-|		
|5V|5V|5V|5V|5V|5V|5V|					
|GND|GND|GND|GND|GND|GND|GND|						
|3V3|3V3|3V3|3V3|3V3|3V3|3V3|		
|3V3|3V3|3V3|3V3|3V3|3V3|3V3|			

|No|     Fn 0|         Fn 1      | Fn 2|        Fn 3|       Fn 4|       Fn 5|
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|4|     GPIO4	|GPT0_CH4|      I2C0_SDA|           AUDIO_CLK|	-|-|
|5|     GPIO5	|GPT0_CH5 |     I2C0_SCL	|		-|-|-|
|0   |  GPIO0|	GPT0_CH0|      UART0_CTSn  |       SSP0_CLK		|-|-|
|1  |   GPIO1	|GPT0_CH1|      UART0_RTSn |        SSP0_FRM	|-|-|
|49	|GPIO49  | ADC0_IN7<br/>ACOMP_IN7  |    UART2_RXD |         SSP2_RXD  |          -|PHY_MON15|
|48	|GPIO48   |ADC0_IN <br/>ACOMP_IN6|      UART2_TXD|          SSP2_TXD|            -|PHY_MON14|               
|47	|GPIO47|   ADC0_IN5<br/>ACOMP_IN5|      UART2_RTSn|         SSP2_FRM|            -|PHY_MON13|
|46	|GPIO46|   ADC0_IN4<br/>ACOMP_IN4|      UART2_CTSn|         SSP2_CLK|            -|PHY_MON12|
|GND|GND|GND|GND|GND|GND|GND|												
|43	|GPIO43 |  ADC0_IN1<br/>ACOMP_IN1|      UART1_RTSn|         SSP1_FRM|            TRACE_DATA1|        PHY_MON9|
|42	|GPIO42|   ADC0_IN0 <br/>ACOMP_IN0|     UART1_CTSn|         SSP1_CLK|            TRACE_DATA0|        PHY_MON8|
|41	|GPIO41|   GAU_TRIGGER1  |ACOMP0_EDGE_PULSE|  ACOMP1_EDGE_PULSE|   -|TRACE_CLKOUT|
|24	|OSC32K|   GPIO24        |UART0_RXD|          GPT1_CH5|            -|COMP_IN_N|
|39	|GPIO39 |  GPT3_CLKIN   | UART1_RXD|          SSP1_RXD|            -|RC32M_CLKINb|
|40	|GPIO40  | GAU_TRIGGER0|  ACOMP0_GPIO_OUT|    ACOMP1_GPIO_OUT|		-|-|
|3V3|3V3|3V3|3V3|3V3|3V3|3V3|			

- Color coded pinmaps <br/>[Header 1 >](./support/header1.png) [Header 2 >](./support/header2.png)

<img src="https://makerville.io/knit/img/bb.jpg" width="470"></img>


Power
---

### Hardware

The Knit board has both 5V and 3.3V power rails. Both, 5V and 3.3V, are made available on the dual pin headers, but **please note that the controller pins are all 3.3V logic.** Supplying any of the pins more than 3.3V will likely result in a bricked board.

The 5V is used by

- LM1117 linear regulator IC
- CP2102 USB to serial converter

The 3.3V is used by

- AW-CU300 WiFi module
- W25Q32 Winbond Flash

The above setup allows one to power the board using an external 5V when developing an application, and switch to a 3.3V source, like a lithium ion battery, when deploying the application. The voltage regulator and the USB to serial converter is not necessary for normal operation of the WiFi module and flash memory, as long as you have a stable 3.3V power source.  

If you want to save some more power, you can get rid of the power LED resistor. That'll knock off a few mA. Of course, the nice red LED won't show your powered on status once you do this. **Please note that removing a resistor has the risk of damaging nearby tracks/connections if you are not careful. Please avoid doing this if you are not sure.**

### Input sources

You can power up your Knit board using one of the following -

- 5V through USB
- 5V through pins
- 3.3V through pins (advanced)

### Consumption

Coming soon...

Hardware
---

Knit is open source hardware. There are a few definitions of OSHW, but what it means to us is that everything that one would need to make Knit is made available to everyone under a permissive license.

Knit is licensed under the MIT License. You can find text of the license [here](https://github.com/Makerville/knit/blob/master/LICENSE). All the files can be found on our [GitHub](http://github.com/makerville/knit/blob/master/hardware).


### Major components
The Knit board consists of the following major hardware components -

| Function | Company | Part No| Package|Datasheet
|:-:|:-:|:-:|:-:|:-:|
| WiFi | Azurewave | AW-CU300 | 64 pin LGA|-|
| Flash | Winbond | W25Q32 | SOIC-8| <a href="http://www.elinux.org/images/f/f5/Winbond-w25q32.pdf" target="_blank">Link</a>
| USB to UART | Silicon Labs | CP2102| 28 pin QFN | <a href="https://www.silabs.com/Support%20Documents/TechnicalDocs/CP2102-9.pdf" target="_blank">Link</a>
| Regulator | TI | LM1117| SOT 223|<a href="http://www.ti.com/lit/ds/symlink/lm1117.pdf" target="_blank">Link</a>

### Interfaces
We have the following buttons and LEDs onboard the Knit -

|Interface | Function | Connected to|Silkscreen Identifier|
|:-:|:-:|:-:|:-:|
|Button | Reset | RESET_N| RESET|
|Button | Boot/User | GPIO16/27| BOOT|
|LED | User | GPIO40|Blink!|
|LED | Power | 3V3 rail|pwr|

### Pin Headers
We have the following pin headers onboard the Knit -

| Pin count | Function |Silkscreen Identifier|
|:-:|:-:|:-:|
|16| GPIO breakout | \m/|
|16| GPIO breakout | knit|
|4 | Advanced debugging using [Serial Wire Debug](http://www.arm.com/products/system-ip/debug-trace/coresight-soc-components/serial-wire-debug.php)| SWD|

### Certifications
The Azurewave module that is being used is certified as follows -

- [FCC ID TLZ-CU300](https://fccid.io/TLZ-CU300)
- CE
- IC ID 6100A-CU300
- NCC ID CCAI15LP1350T2

<img src="https://makerville.io/knit/img/knit-module-bottom.jpg" width="470" ></img>


### Antenna

The Azurewave module, and hence the Knit board, has a PCB antenna as the internal antenna, and it also has a uFl connector if you would like to get better range with an external antenna.


Videos
===

### Create AWS IoT thing and certificates
In this screen capture, checkout how to create a new IoT thing by signing in to your AWS account.

&nbsp; <iframe width="470" height="315" src="https://www.youtube.com/embed/hOc-iZcmv9E?list=PLIYfgNqDE8r2XNkXMqbaiF0iBbli7cNYz" frameborder="1" allowfullscreen></iframe>

### Provision and push events to AWS IoT
In this video see how to connect to AWS using the keys that we generated in the previous video and then send a push button event to the AWS IoT device shadow.

&nbsp; <iframe width="470" height="315" src="https://www.youtube.com/embed/CFwY_jNb59s?list=PLIYfgNqDE8r2XNkXMqbaiF0iBbli7cNYz" frameborder="1" allowfullscreen></iframe>

Products w/ 88MW300
===

The Knit is based on the Marvell 88MW300 WiFi microcontroller. This is an industrial grade SoC which is being used to make all sorts of consumer applications, even battery operated ones.

### Teardowns

Some of the commercially available products that have been made using the 88MW300 WiFi microcontroller-
<table style="width:100%">
  <tr>
    <td>Hello Barbie</td>
    <td><a href="http://www.somersetrecon.com/blog/2015/11/20/hello-barbie-security-part-1-teardown" target="_blank">Teardown from Somerset Recon</a></td>
    <td>This one uses the same module as Knit, AW CU300</td>
    <td>See it in action <a href="https://www.youtube.com/watch?v=RJMvmVCwoNM" target="_blank">here</a></td>
  </tr>
  <tr>
    <td>Xiaomi Yeelight</td>
    <td><a href="http://www.miui.com/thread-4260673-1-1.html" target="_blank">Teardown from miui.com (in Chinese)</a></td>
    <td>This one uses a Mi module with 2MB of onboard flash</td>
    <td>See it in action <a href="https://www.youtube.com/watch?v=x0RCSBAH6gE" target="_blank">here</a></td>
  </tr>
</table>

### Software frameworks

The Knit is capable of running the following frameworks. Please note that one needs to contact Marvell/respective framework provider to get access to the source code and documentation.

- Google Weave
  - [88MW300 is the first MCU platform to support Google Weave.](http://www.marvell.com/company/news/pressDetail.do?releaseID=7659)
- Apple's HomeKit.
  - [HomeKit SDK](http://www.marvell.com/microcontrollers/wi-fi-microcontroller-platform/home-kit/)

Misc
====

Mailing List
---

  <form action="//makerville.us12.list-manage.com/subscribe/post?u=064c1b6c971f765e25f2d4c66&amp;id=8d99ecc3e3" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
    <div id="mc_embed_signup_scroll">
      <div class="mc-field-group">

<p> &nbsp; &nbsp; Email:    </p>
   &nbsp; &nbsp; <input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL"><br/>
      </div>
      <div id="mce-responses" class="clear">
  <div class="response" id="mce-error-response" style="display:none"></div>
  <div class="response" id="mce-success-response" style="display:none"></div>
      </div>   
      <div class = "one-half column" style="position: absolute; left: -5000px;" aria-hidden="true"><input type="text" name="b_064c1b6c971f765e25f2d4c66_8d99ecc3e3" tabindex="-1" value=""></div>
      <div class="clear"> <br/> &nbsp;<input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
    </div>
  </form>

FAQs
----
- Is Knit OSHW (Open Source Hardware) ?
  - Yes, we have released the schematic and PCB files under the [MIT](https://github.com/Makerville/knit/blob/master/LICENSE) license. You can find the files [here](https://github.com/Makerville/knit/tree/master/hardware).
- When will it be available ?
  - Knit is available now . [Buy Now >][order]
- What will be the price?
  - For early access developers the price will be 999₹ / $14.99
- Where can I get more support ?
  - For SDK related issues, you can join the Gitter [chat](https://gitter.im/marvell-iot/aws_starter_sdk) or raise an [issue](https://github.com/marvell-iot/aws_starter_sdk/issues)


Acknowledgements
------------

- PCB design by [Rohit Gupta](http://rohitg.in/about/)
- Logo by [Cassie McKown](https://thenounproject.com/mckowncr/) under [CC by 3.0 US](http://creativecommons.org/licenses/by/3.0/us/)

Projects we <3 & use
---

- ARM GCC toolchain
- OpenOCD
- KiCad EDA
- Eclipse C/C++ IDE
- Flatdoc site generator by [Rico Sta. Cruz](http://ricostacruz.com/)



[project]: https://github.com/makerville/knit
[order]: https://makerville.io/knit/early-access

Get in touch
---

- [anuj@makerville.io](mailto:anuj@makerville.io)
- [Twitter](http://twitter.com/get_knit)
- [YouTube](https://www.youtube.com/channel/UCN_UJzAo9A7C2BYH5_QHirQ)
- [Facebook](https://www.facebook.com/GetKnit/)
- [Instagram](http://instagram.com/get_knit)
- [Tumblr](http://get-knit.tumblr.com/)
