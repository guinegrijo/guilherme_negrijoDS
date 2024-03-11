#define pinoBuzzer 2
#define verde 3
#define amarelo 4
#define azul 5
#define vermelho 6
#define prata 7
#define laranja 8
#define verde02 9
#define laranja02 10

byte notadoh, notare, notami, notafa, notasol, notala, notasi, notadohh = 0;

void setup() {
  Serial.begin(9600);

  pinMode(pinoBuzzer, OUTPUT);
  pinMode(verde,INPUT);
  pinMode(amarelo, INPUT);
  pinMode(azul,INPUT);
  pinMode(vermelho,INPUT);
  pinMode(prata, INPUT);
  pinMode(laranja, INPUT);
  pinMode(verde02, INPUT);
  pinMode(laranja02, INPUT);

}

void loop() {
 
  notadoh = digitalRead(verde);
  notare = digitalRead(amarelo);
  notami = digitalRead(azul);
  notafa = digitalRead(vermelho);
  notasol = digitalRead(prata);
  notala = digitalRead(laranja);
  notasi = digitalRead(verde02);
  notadohh = digitalRead(laranja02);

  if (notadoh == 1){
    tone(pinoBuzzer, 261.63);
  } 
  else if (notare == 1) {
    tone(pinoBuzzer, 293.66 );
  }
  else if (notami == 1) {
    tone(pinoBuzzer, 329.63 );
  }
  else if (notafa == 1) {
    tone(pinoBuzzer, 349.23);
  }
  else if (notasol == 1) {
    tone(pinoBuzzer, 392.00 );
  }
  else if (notala == 1) {
    tone(pinoBuzzer, 440.00 );
  }
  else if (notasi == 1) {
    tone(pinoBuzzer, 493.88 );
  }
  else if (notadohh == 1) {
    tone(pinoBuzzer, 554);
  }
  else{ 
    noTone(pinoBuzzer);
  }

}
