/*
  SEND HIGH TO MOTOR WHEN THE BUTTON IS PRESSED 
  ELSE SEND LOW TO MOTOR
*/
volatile bool state = false;

void function(void)
{
  if(state == false)
    state = true;
  else
    state = false;
}

void setup() 
{
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2), function, RISING);
}

void loop() 
{
  if(state == true)
    digitalWrite(4, HIGH);
  else
    digitalWrite(4, LOW);
}
