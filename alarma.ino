int BUZZER = 3;
int PUNTERO = 2;
int RESISTENCIA = A0;
int PULSADOR = 4;

int valor=0;

void setup() {
  pinMode(PULSADOR, INPUT);
  pinMode(PUNTERO, OUTPUT);
  pinMode(BUZZER, INPUT);
  Serial.begin(9600);
  digitalWrite(PUNTERO, HIGH);
  analogWrite(BUZZER,0);
}

void loop() {
  do{
    valor = analogRead(RESISTENCIA);
  }while(valor<100);
  digitalWrite(PUNTERO, LOW);
  analogWrite(BUZZER,255);
  while(digitalRead(PULSADOR)==0);
  digitalWrite(PUNTERO, HIGH);
  analogWrite(BUZZER,0);
}
