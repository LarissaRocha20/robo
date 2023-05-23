const int pinReadSensor = 12;
const int pinLigarMotor = 8;


void setup()
{
  // CONFIGURAÇÕES DOS PINOS
  pinMode(pinReadSensor,INPUT); // Conf Entrada
  pinMode(pinLigarMotor,OUTPUT); // Conf Saída
}

void loop()
{
  int status = digitalRead(pinReadSensor);
  if(status == HIGH){
  digitalWrite(pinLigarMotor,HIGH);
  } else {
  digitalWrite(pinLigarMotor,LOW);
  }
  
}