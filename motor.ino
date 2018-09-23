int m1 = 11;
int m2 = 10;
int enA = 9;
int d1 , d2 ;


void motor_setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(enA, OUTPUT);
}



void motor_stop()
{
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
}


void motor_run(byte dir, int motor_speed)
{
  Serial.print("IM HERE!!");
  d1 = (dir == 1) ? 1 : 0;
  d2 = (dir == 1) ? 0 : 1;
  analogWrite(enA, motor_speed);
  digitalWrite(m1, d1);
  digitalWrite(m2, d2);
}



