// Myoware -> sound sketch

int pin = 13;

float C4scale[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};
float B4mscale[] = {493.88, 554.37, 587.33, 659.25, 739.99, 783.99, 880.00, 987.77}; 


long tempo(int duration, int bpm) {
  long t = (1000/bpm*120)/pow(2,duration);
  return t;
}

//function that discretizes data range and assigns a note within defined scale to each step
void linkTones(float scale[], float modvalue, int bpm){
 if((0 <= modvalue) && (modvalue <= 63.75)){
    tone(pin, scale[0], tempo(1,bpm));
    Serial.println("C4");
  }
  else if((63.75 < modvalue) && (modvalue <= 127.5)){
    tone(pin, scale[1], tempo(1,bpm));
    Serial.println("D4");
  }
  else if((127.5 < modvalue) && (modvalue <= 191.25)){
    tone(pin, scale[2], tempo(1,bpm));
    Serial.println("E4");
  }
  else if((191.25 < modvalue) && (modvalue <= 255)){
    tone(pin, scale[3], tempo(1,bpm));
    Serial.println("F4"); 
  }
  else if((255 < modvalue) && (modvalue <= 318.75)){
    tone(pin, scale[4], tempo(1,bpm));
    Serial.println("G4");
  }
  else if((318.75 < modvalue) && (modvalue <= 382.5)){
    tone(pin, scale[5], tempo(1,bpm));
    Serial.println("A4");
  }
  else if((382.5 < modvalue) && (modvalue <= 446.25)){
    tone (pin, scale[6], tempo(1,bpm));
    Serial.println("B4");
  }
  else if((446.25 < modvalue) && (modvalue <= 510)){
    tone (pin, scale[7], tempo(1,bpm));
    Serial.println("C5");
  }
  else {
    
  }
}


void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

}

//Bröther may I have some lööps
void loop() {
  // read input on A0 from Myoware
  float sensorValue = analogRead(A0);
  delay(100);

  //assign read value to float
  float x = sensorValue;

  //applies sigmoid activation function to process data
  float modvalue = 510*((exp(0.02*x-1))/(510+exp(0.02*x-1)));

  //Prints both the raw sensor value and the processed value for debugging
  Serial.println("Sensor: " + (String)sensorValue + ", Mod: " + (String)modvalue);

  //method uses processed data to play tones within defined scale at defined bpm
  linkTones(B4mscale, modvalue, 200);

}
