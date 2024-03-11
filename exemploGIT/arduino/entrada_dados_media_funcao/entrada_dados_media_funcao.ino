float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, media;

void setup() {
  Serial.begin(9600);
}

void loop() {

  Serial.println("digite a nota 1:");
  nota1 = aguardaEntradaNumerica();
  Serial.print("a nota 1 foi: ");
  Serial.println(nota1);

  Serial.println("digite a nota 2:");
  nota2 = aguardaEntradaNumerica();
  Serial.print("a nota 2 foi: ");
  Serial.println(nota2);

  Serial.println("digite a nota 3:");
  nota3 = aguardaEntradaNumerica();
  Serial.print("a nota 3 foi: ");
  Serial.println(nota3);


  if (nota1 == 13) {
    Serial.println("nota1 = 13 eca lula!!!");
  }
  if (nota1 == 22) {
    Serial.println("nota1 = 22 ai sim BOLSONARO!!!");
  }

  if (nota2 == 13) {
    Serial.println("nota2 = 13 eca lula!!!");
  }
  if (nota2 == 22) {
    Serial.println("nota2 = 22 ai sim BOLSONARO!!!");
  }

  if (nota3 == 13) {
    Serial.println("nota3 = 13 eca lula!!!");
  }
  if (nota3 == 22) {
    Serial.println("nota3 = 22 ai sim BOLSONARO!!!");
  }

  Serial.print("digite o peso 1: ");
  peso1 = aguardaEntradaNumerica();
  Serial.println(peso1);

  Serial.print("digite o peso 2: ");
  peso2 = aguardaEntradaNumerica();
  Serial.println(peso2);

  Serial.print("digite o peso 3: ");
  peso3 = aguardaEntradaNumerica();
  Serial.println(peso3);


  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("A média do aluno foi: ");
  Serial.println(media);


  delay(1000);

  Serial.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}

//criando uma função chmada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
  }
  //retornar o valor digitado no serial em tipo float ou int
  return Serial.parseFloat();
}
