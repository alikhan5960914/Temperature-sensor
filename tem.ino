const int pinRedLED=11;
const int pinTempSensor=A1;

void setup()
{
  pinMode(pinRedLED, OUTPUT);
  pinMode(pinTempSensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float mvTemp = analogRead(pinTempSensor);
  float centTemp=(((mvTemp /1024)*5)-0.5)*100;
  
  Serial.print("Recorded Temperature: ");
  Serial.print(centTemp);
  Serial.print(" °C\n");
  
  if(centTemp>30){
    digitalWrite(pinRedLED, HIGH);
  }
  else{
    digitalWrite(pinRedLED, LOW);
  }
  
  delay(1000);
}
