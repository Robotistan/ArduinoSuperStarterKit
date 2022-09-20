## Analog Reading and Serial Communication With Arduino Details

When you try to make a clock on devices like Arduino, the biggest problem you will face is that in case ofa power failure, Arduino stops counting the time. This causes deviations in time and prevents you from learning the right time. RTC modules are built to keep time synchronous. This module, which can operate even with very little power, counts with the crystal on it without deviation in time far many years thanks to its battery. This crystal produces 32000 signals per second. The RTC reads these signals and counts one second forward in every 32000 steps.

Let's set up circuit and continue with coding.

![image](https://user-images.githubusercontent.com/111511331/191012453-9f5ada5f-9f9b-45dc-aabf-702ed2a7932e.png)

### In order to use the watch, you must first adjust the time to the current time. Therefore, you need to install our setting code first !!!
