void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //using built in led of the board
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); //on-1
  delay(2000);   
  digitalWrite(LED_BUILTIN, LOW); //off-1
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH); //on-2
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW); //off-2
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH); //on-3
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW); //off-3
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH); //on-4
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW); //off-4
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH); //on-5
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW); //off-5
  delay(2000);
  
}
