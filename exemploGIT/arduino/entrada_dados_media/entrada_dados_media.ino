int nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, media;

void setup() {
 Serial.begin(9600);
}

void loop() {

  Serial.println("digite a nota 1:");

  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  nota1 = Serial.parseInt();

  Serial.print("a nota 1 foi: ");
  Serial.println(nota1);

  Serial.println("digite a nota 2:");

  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  
  nota2 = Serial.parseInt();
  Serial.print("a nota 2 foi: ");
  Serial.println(nota2);

  Serial.println("digite a nota 3:");

  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  
  nota3 = Serial.parseInt();
  Serial.print("a nota 3 foi: ");
  Serial.println(nota3);


  if(nota1 == 13){
    Serial.println("nota1 = 13 eca lula!!!");
  }
  if(nota1 == 22){
    Serial.println("nota1 = 22 ai sim BOLSONARO!!!");
  }

  if(nota2 == 13){
    Serial.println("nota1 = 13 eca lula!!!");
  }
  if(nota2 == 22){
    Serial.println("nota1 = 22 ai sim BOLSONARO!!!");
  }

   if(nota3 == 13){
    Serial.println("nota3 = 13 eca lula!!!");
  }
  if(nota3 == 22){
    Serial.println("nota3 = 22 ai sim BOLSONARO!!!");
  }

  Serial.println("digite o peso 1: ");
  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  peso1 = Serial.parseInt();

  Serial.println("digite o peso 2: ");
  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  peso2 = Serial.parseInt();

  Serial.println("digite o peso 3: ");
  while(Serial.available() == 0){
    //você digita um valor no terminal
  }
  peso3 = Serial.parseInt();

  soma1 = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
  soma2 = peso1 + peso2 + peso3;
  media = soma1 / soma2;
  
  Serial.print("A média do aluno foi: ");
  Serial.println(media);
  

  delay(1000);
  
  Serial.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

}

//criando uma função chmada
int aguardaEntrada(){
  while(!Serial.available()){

  }
  //retornar o valor digitado no serial em tipo float ou int
  return Serial.parseInt();


}
