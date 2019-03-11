// Myoware -> sound sketch

int pin = 13;

int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // read input on A0
  float sensorValue = analogRead(A0) - analogRead(A1);
  delay(100);
  // print out value read
  //Serial.println(sensorValue);
  //delay(1); //delay in between reads for stability
  //float R = analogRead(A1);
  //float E = analogRead(A2);
  //float M = analogRead(A3);

  float x = sensorValue;


  float modvalue = 510*((exp(0.02*x-1))/(510+exp(0.02*x-1)));

  Serial.println("Sensor: " + (String)sensorValue + ", Mod: " + (String)modvalue);
  //Serial.println("R: " + (String)R + ", E: " + (String)E + ", M: " + (String)M);
  //float buz = (1/modvalue)*500;
  //Serial.println("Buz: " + (String)buz);

  tone(13, modvalue);
  //Serial.println(i);

  //i = i+1;
  

  
  

}
