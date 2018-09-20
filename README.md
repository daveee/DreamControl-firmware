# DreamControl
**Digital Audio Workstation (DAW) and Studio Monitor Control Surface**

![DreamControl Front Panel](https://i.imgur.com/ogYC02I.png)

This is an open-source project for my 'dream' DAW controller. There are several controllers and plugins on the market that do similar things - I wanted everything neatly integrated, so I came up with this design. The designs and code are free for personal use (not for commercial use).

The system consists of a hardware **USB control surface** built using the excellent [Midibox](http://www.ucapps.de/) platform, and a **VST plugin** that sits on your DAW master bus.

Currently, the system is designed for my DAW of choice which is **Cubase**, and the plugin can be used with it's Control Room feature, but it could easily be adapted to support Logic, Bitwig, or other DAWs.

## Features
 - Switch between your mix and 6 different other sources
 - Switch between 4 different sets of monitor speakers
 - Monitor level knob (ALPS endless encoder) with 16x RGB LED ring to show position
 - No analog electronics required - converters can be connected directly to monitors for cleanest signal path
 - Monitor Mute, Dim and Reference options (can set dim and reference levels in plugin)
 - Mono mode, Side Band Solo, and 'Loud' mode (an inverted Fletcher-Munson EQ curve that sounds a bit like Yamaha NS10M monitors)
 - Low, Low-Mid, High-Mid and High frequency band solo (crossover points adjustable in plugin)
 - Channel strip controls: 100mm motorised ALPS fader, Mute, Solo, Automation Read and Write
 - Talk Back (for Cubase Control Room)
 - Standard transport controls: Play, Stop, Click, Record, Return, Loop, Backwards, Forwards. These can be assigned using the plugin, e.g. to DAW macros
 - Three 15x RGB LED level meters, that can show True Peak or LUFS (EBU R128 / ITU 1770 standard), or a combination (e.g. True Peak + LUFS Momentary)
 - Two different True Peak dB scales, two different LUFS scales (absolute and relative)
 - 128x64 pixel OLED display, showing various meter values: LUFS Integrated in large numbers, and smaller numbers showing True Peak Max L/R, LUFS Momentary Max, LUFS Target (can be set using plugin)
- Monitor Level Knob can also be set to 'MIDI modulator mode' by pressing VOL/MOD, so instead of changing monitor level it can output MIDI CC messages
## Background
When writing, mixing or mastering, I often switch between what I'm working on and reference material, and switch between several sets of speakers. I also often want to hear the mix in mono, hear the side band solo'd, and also individual frequency bands. I also want easily readable True Peak and LUFS meters, and a physical motorised fader and related channel strip and transport controls.

And I want these controls to be tactile, physical controls. And I don't want to have to look at a touchscreen or regular display to do any of this.

So the DreamControl was born!

I had been wanting to make something using the Midibox platform for a while, and this was a good excuse. The hardware build itself is a little complex, but could be optimised considerably, and in future I may look at designing a custom PCB. For the prototype, I used 'off the shelf' PCBs from the Midibox project, which were quick to put together and worked well. It only just fitted inside the enclosure I had chosen, again in future this could be optimised.

Another inspiration for the project was finding out that the high-end, expensive EAO brand clicky switches that I love (used for example on SSL consoles), are now also Made in China for under £1!
## Hardware
The hardware consists of
 - STM32F407 Cortex-M4 microcontroller, on [low cost evaluation board
](https://www.st.com/en/evaluation-tools/stm32f4discovery.html)
 - Midibox boards:
	 - [MBHP_CORE_STM32F4](http://www.ucapps.de/mbhp_core_stm32f4.html) board
	 - [MF_NG motorfader board](http://www.ucapps.de/mbhp_mf_ng.html), based on PIC18F452
	 - [DOUT board](http://www.ucapps.de/mbhp_dout.html) for button LEDs
	 - [DIN board](http://www.ucapps.de/mbhp_din.html) for buttons
 - 35x Square Illuminated Momentary push-buttons (model [LAZ16-11](https://www.ebay.co.uk/itm/Square-micro-button-LAZ16-11-self-lock-no-lamp-button-switch-3-foot-diameter16mm-/162438920326))
 - Custom display boards:
	 - SSD1306 [OLED display](https://www.amazon.co.uk/SSD1306-128x64-Display-Module-Electronics/dp/B00KCM9JMG) (128x64 pixels, SPI interface)
	 - WS2812 RGB LED strip, cut to 15 LED sections for meters ([NeoPixel brand](https://www.adafruit.com/product/1507), 144 LED per metre strip)
	 - WS2812 RGB LED ring ([NeoPixel brand](https://www.adafruit.com/product/1463))
 - ALPS 100mm motorised fader (RSA0N11M9A0K)
 - 5V 1.5A / 12V 1.5A power supply (butchered from an old external hard drive enclosure)

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTMyMTk1NjA1NCwxMTk0NjQxNzU5LDM0Nj
I5MTQ3LC0xNzg5ODQ4MDM3LDM1NzUxNzcwNiwtMTUyMDA2Mzdd
fQ==
-->