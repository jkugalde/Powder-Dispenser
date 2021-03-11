// put an integer number between [-255,255]

#define DC_IN1 2
#define DC_IN2 4
#define DC_PWM 3

int pwm = 00;

void setup() {

  Serial.begin(9600);
  pinMode(DC_IN1,OUTPUT);
  pinMode(DC_IN2,OUTPUT);
  pinMode(DC_PWM,OUTPUT);
  
}

void loop() {
  
  if(Serial.available()>0){
      pwm=Serial.parseInt();
  }
  if(pwm>0){
    digitalWrite(DC_IN1,HIGH);
    digitalWrite(DC_IN2,LOW);    
  }
  if(pwm<0){
    digitalWrite(DC_IN1,LOW);
    digitalWrite(DC_IN2,HIGH);    
  }
  if(pwm==0){
    digitalWrite(DC_IN1,LOW);
    digitalWrite(DC_IN2,LOW);
  }
    analogWrite(DC_PWM,pwm);
}
