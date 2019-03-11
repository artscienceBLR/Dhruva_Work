Project involved setting up a plant instrument for the exhibition at Science Gallery Dublin. 

Operates by calculating capacitance of an object based on dV/dt. Touching the plant changes capacitance values and generates a signal. 

Elegantly simple, only needs a 1M resistor between digital pins 2 and 4 on the arduino, and a wire leading out of pin 4 connected to the soil of the plant.

Used the Capactive Touch library (https://playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense) for the signals, and Mozzi (https://sensorium.github.io/Mozzi/) for the sound. 
