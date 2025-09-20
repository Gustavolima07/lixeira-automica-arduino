#include <Servo.h>
Servo servo;
 
int servo_pin = 9;
int trig_pin = 8;
int echo_pin = 7;
long duracao, distancia;
 
 
void setup()
{
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  servo.write(0);
  delay(100);
}
 
void ultrassonic_distance() {
  //Função para o sensor ultrssônico calcular a distância
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(5);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trig_pin, LOW);
  pinMode(echo_pin, INPUT);
  duracao = pulseIn(echo_pin, HIGH);
  distancia = (duracao/2) / 29.1;  //Distância em cm
}
 
void loop()
{
  for (int i=0;i<=2;i++){
    //Looping para utilizar a função de calcular a distânica
    ultrassonic_distance();        
    delay(1);      
  }
  if ( distancia<=25 ) {
    //Caso o Sensor detecte um obejto até 25cm a lixeira abre a tampa
    servo.attach(servo_pin);
    delay(1);
    delay(1000);      
    servo.write(90);    
    delay(1);
  }else {
    //Objeto não detectado ou saiu do alcance de 25cm, a lixeira fecha
    servo.attach(servo_pin);
    delay(10);
    delay(1);      
    servo.write(0);    
    delay(1);
  }
}