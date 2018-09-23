
int inPin = A0;
int val = 0;
void button_setup()
{
pinMode(inPin,INPUT); 
}

void button()
{
  val = analogRead(inPin);
  if(val == 0)
  {
    motor_run(0,170);
    delay(550); // to be tested
    motor_stop();
  }
}


