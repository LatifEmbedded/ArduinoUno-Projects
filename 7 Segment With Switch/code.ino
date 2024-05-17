/* 
  CREATOR : DALI FETHI ABDELLATIF
  DATE : 17/05/2024
  PLATFORM : ARDUINO UNO
  SIMULATION : TINKERCARD
*/
/*
    Launch showing numbers using a switch connected to pin 2 using interrupt
*/
int array[] = {4, 5, 6, 7}, max = 4, value = 1, i = 0, time = 500;
bool state = 0;
volatile int counter = 0;
volatile bool etat = false;
void function(void);
void setup(void)
{
  for(int i = 0; i<max; ++i)
    pinMode(array[i], OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), function, RISING);
}
void loop(void)
{
  if(etat == true)
  {
    if(counter != 10)
    {
      if(i != 4)
      {
        state = value & counter;
        digitalWrite(array[i], state);
        ++i;
        value<<=1;
      }
      else
      {
        delay(time);
        i = 0;
        ++counter;
        state = 0;
        value = 1;
      }
    }
    else
      counter = 0;
  }
}
void function(void)
{
  etat = ! etat;
}
