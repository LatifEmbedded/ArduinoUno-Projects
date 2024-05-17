/* 
  CREATOR : DALI FETHI ABDELLATIF
  DATE : 17/05/2024
  PLATFORM : ARDUINO UNO
  SIMULATION : TINKERCARD
*/
int array[] = {2, 3, 4, 5}, max = 4, counter = 0, value = 1, i = 0, time = 350;
bool state = 0;
void setup(void)
{
  for(int i = 0; i<max; ++i)
    pinMode(array[i], OUTPUT);
}
void loop(void)
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