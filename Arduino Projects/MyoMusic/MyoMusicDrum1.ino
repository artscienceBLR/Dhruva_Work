// Myoware -> sound sketch

int pin = 9;

int Threshold = 150;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

}

//Bröther may I have some lööps
void loop() {
  // read input on A0 from Myoware
  float sensorValue = (analogRead(A0));
  //float sensorValue = (analogRead(A0) - analogRead(A1));

  if(sensorValue > 300) {
    tone(pin,50,100);
  }

  //delay(100);

  //assign read value to float
  //float x = sensorValue;

  //applies sigmoid activation function to process data
  //float modvalue = 510*((exp(0.02*x-1))/(510+exp(0.02*x-1)));

  //Prints both the raw sensor value and the processed value for debugging
  Serial.println("Sensor: " + (String)sensorValue);

  //method uses processed data to play tones within defined scale at defined bpm
  //linkTones(C4scale, modvalue, 120);

}
