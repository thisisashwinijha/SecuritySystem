int pirSensor = D0;
int buzzer = D4;

void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pirSensor, INPUT);
  pinMode(buzzer, OUTPUT);  
}

void loop() {
      // put your loopcode here, to run once:
  int sensorValue = digitalRead(pirSensor);

  if (sensorValue == 1) {
     digitalWrite (buzzer, HIGH) ; //send tone
      delay (100) ;
      digitalWrite (buzzer, LOW) ; //no tone
      delay (100);
    Serial.println("Motion Detected!");  
    delay(100);
  }
  else
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Stable");
    delay(100);
    }
}
