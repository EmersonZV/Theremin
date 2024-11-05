int buzzer=3;

int trig=4;
int echo=5;
int tiempo;
int distancia;
int nota;

void setup()
 {
  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo=pulseIn(echo,HIGH);
  distancia=tiempo/58.2;
  Serial.println(nota);
  nota=map(distancia,10,300,50,900);
  tone(buzzer,nota);
  delay(50);
}
