float n1, n2, n3, p1, p2, p3, soma_n, soma_p, media;

void setup() {

  Serial.begin(9600);

  n1 = 10;
  n2 = 8.9;
  n3 = 6.7;

  p1 = 7;
  p2 = 8.9;
  p3 = 10;

  soma_n = (n1*p1) + (n2*p2) + (n3*p3);
  soma_p = p1 + p2 + p3;
  media = soma_n / soma_p;

  Serial.print(media);
}

void loop() {
  

}
