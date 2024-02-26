#define pinoButton 8
#define led 9
bool status = false;

void setup() {

pinMode(pinoButton, INPUT);
pinMode(led, OUTPUT);
  
Serial.begin(9600);

}

void loop() {
  //lendo o pino digital atraés do push button
 //Serial.println(digitalRead(pinoButton));

if(digitalRead(pinoButton) == 1 && status == false)
{
  Serial.println("Borão apertado: ON...");
  digitalWrite(led, HIGH);
  status = false;
  delay(1000);
}
else if(digitalRead(pinoButton) == 1 && status == true){
  Serial.println("Botão não apertado: OFF");
  digitalWrite(led, LOW);
  status = true;
  delay(1000);
}
}
