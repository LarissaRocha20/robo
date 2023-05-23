const int sensorEsq = 11;
const int motorDir = 7;
const int sensorDir = 4;
const int motorEsq = 2;

void setup() {

  pinMode(sensorEsq,INPUT); // 11
  pinMode(sensorDir,INPUT); // 4

  pinMode(motorDir,OUTPUT); // 7
  pinMode(motorEsq,OUTPUT); // 2

}

void loop() {

  int statusDirSensor = digitalRead(sensorDir);
  int statusEsqSensor = digitalRead(sensorEsq);
  
  if(statusDirSensor == HIGH && statusEsqSensor == HIGH){

    digitalWrite(motorDir, HIGH);
    digitalWrite(motorEsq, HIGH);

  }else if (statusDirSensor == LOW && statusEsqSensor == HIGH){

    digitalWrite(motorDir, HIGH);
    digitalWrite(motorEsq, LOW);

  }else if(statusDirSensor == HIGH && statusEsqSensor == LOW){

    digitalWrite(motorDir, LOW);
    digitalWrite(motorEsq, HIGH);

  }else if (statusDirSensor == LOW && statusEsqSensor == LOW){

    digitalWrite(motorDir, LOW);
    digitalWrite(motorEsq, LOW);

  }

}