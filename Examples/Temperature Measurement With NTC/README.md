## Temperature Measurement with NTC
As in this application, we will ensure that what we want is done by reading and interpreting the analog signal while reading the temperature. NTC (Negative Temperature Coeficient) is an element that reduces its internal resistance against the rise in temperature. üne of the elements commonly used instead of NTC is PTC. PTC reacts by increasing its internal resistance against temperature rise. in order to convert the data read from NTC into a temperature unit, it needs to be processed. At the same time, because the variable resistance value according to the temperature increase of the NTC sensor is not constant, it is necessary to pass through logarithmic functions. You do not need to examine these functions in detail at this time, it is just enough to know the processes. After learning the logic of using the NTC sensor, you can examine this partin detail. Let's start by setting up our circuit first. in this application, you will create a different function and do some operations by going to the function

After setting up the circuit, let's continue with coding.

![9](https://user-images.githubusercontent.com/111511331/190996612-c9b0154c-50ab-4f7e-94fa-27c8fb9f8c7e.png)