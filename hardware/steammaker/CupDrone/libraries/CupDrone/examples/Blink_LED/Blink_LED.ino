
void setup() {
  pinMode(BOARD_LED0_PIN, OUTPUT);
  pinMode(BOARD_LED1_PIN, OUTPUT);  
}


void loop() {
  digitalWrite(BOARD_LED0_PIN, HIGH);   
  digitalWrite(BOARD_LED1_PIN, LOW);   
  delay(500);            
  digitalWrite(BOARD_LED0_PIN, LOW);
  digitalWrite(BOARD_LED1_PIN, HIGH);   
  delay(500);            
}