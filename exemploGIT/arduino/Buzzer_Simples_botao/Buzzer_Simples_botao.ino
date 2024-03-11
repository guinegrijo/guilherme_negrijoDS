#define pinoBuzzer 2
#define ledverde 5
#define botao 3
#define ledvermelho 4

void setup() {
  Serial.begin(9600);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(ledverde, OUTPUT);
  

}

void loop() {
  if (digitalRead(botao) == 1) {
    tone(pinoBuzzer, 523);
    digitalWrite(ledverde, HIGH);
    digitalWrite(ledvermelho, LOW);
  } else {
    noTone(pinoBuzzer);
    digitalWrite(ledverde, LOW);
    digitalWrite(ledvermelho, HIGH);
  }
  

}
