int take = 2;

void setup() {
  
  Serial.begin(9600);
  pinMode(take, INPUT);
}

void loop() {
  int takeStateHere = digitalRead(take);
  Serial.println(takeStateHere);
  delay(500);
}
