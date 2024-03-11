//constante para o pino da buzzer
#define pinoBuzzer 2
#define led 3

void setup() {
  Serial.begin(9600);

  pinMode(pinoBuzzer, OUTPUT);
  pinMode(led, OUTPUT);

  delay(1000);

}

void loop() {
  digitalWrite(led, HIGH);
  tone(pinoBuzzer, 523);
  delay(1000);
  
  digitalWrite(led, LOW);
  digitalWrite(pinoBuzzer, LOW);
  delay(1000);

}
