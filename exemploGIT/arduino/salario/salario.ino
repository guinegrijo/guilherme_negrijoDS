float salario_atual, novo_salario;

void setup() {
  salatio_atural = 1200;
  if(salario_ atual <= 500 && salario_atual > 0)
  {//início
  novo_salario = salario_atual * 1.2;
  }//fim
  else if (salario_atual > 500)
  {
    novo_salario = salario_atual *1.1;
  }
  else
  {
    novo_salario = 0;
  }
}

Serial.begin(9600);

void loop() {
  // roda varias vezes o codigo
  //Serial.print("Hoje é o último dia de janeiro!!!"); //mostra a  frase no monitor
  //Serial.println(S); // mostra o valor da soma e muda o cursor de linha
  
  if (novo_salario == 0)
  {
    Serial.println("Digite um Salário Válido")
  }
  else{

  Serial.print("Novo Salário: ");
  Serial.println(novo_salario);
  Serial.println("-------------------------------------");

  }

  delay(1000);

}
