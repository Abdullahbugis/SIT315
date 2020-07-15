

int PIRpin = 7;
int Ledpin = 13; 

void setup() {

  
  Serial.begin(9600);
  pinMode(PIRpin, INPUT);
  pinMode(Ledpin, OUTPUT);
  
}

void loop() {

  
  if (digitalRead(PIRpin) == HIGH) {
    Serial.println("Motion detect");
    digitalWrite(Ledpin, HIGH);
  }
  else {
    Serial.println("No motion detect");
    digitalWrite(Ledpin, LOW);

  }
  delay(1000);
}
