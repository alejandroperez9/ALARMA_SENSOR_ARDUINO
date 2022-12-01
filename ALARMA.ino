#define trig 7                        // Emisor de pulso o señal
#define echo 6                        // Receptor "del eco" del pulso o señal
#define buzzer 12                     //Zumbador

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT); 

}

void loop() {
  long duration, distance;            //Establecemos duration y distance como variables numéricas extensas
  digitalWrite(trig, LOW); 
  delay(2);
  digitalWrite(trig, HIGH);           //Mandamos un pulso de 5 microsegundos
  delay(5);
  digitalWrite(trig, LOW);            //Apagamos
  duration = pulseIn(echo, HIGH); 
  distance = (duration/2)*0.0343; 

  if (distance < 10) {
  tone(buzzer, 1000);
  delay(5000);
}else{
  noTone(buzzer);
}
}


 
