int array[] = {2, 4, 7, 8, 12}, max = 5, time1 = 200, counter = 0, time2 = 500, time3 = 1000;
void setup(void)
{
  for(int i = 0; i<max; ++i)
    pinMode(array[i], OUTPUT);
  pinMode(13, INPUT);
}
void loop(void)
{
  if(digitalRead(13) == HIGH)
  {
    if(counter == 0)
    {    
      for(int i = 0; i<max; ++i)
      {
        digitalWrite(array[i], HIGH);
        delay(time1);
        digitalWrite(array[i], LOW);
      }
      for(int i = max-1; i>=0; --i)
      {
        digitalWrite(array[i], HIGH);
        delay(time1);
        digitalWrite(array[i], LOW);
      }
      counter = 1;
    }
    else if(counter == 1)
    {
      for(int i = 0; i<max; ++i)
      {
        digitalWrite(array[i], HIGH);
        delay(time2);
        digitalWrite(array[i], LOW);
      }
      for(int i = max-1; i>=0; --i)
      {
        digitalWrite(array[i], HIGH);
        delay(time2);
        digitalWrite(array[i], LOW);
      }
      counter = 2;  
    }
    else if(counter == 2)
    {
      for(int i = 0; i<max; ++i)
      {
        digitalWrite(array[i], HIGH);
        delay(time3);
        digitalWrite(array[i], LOW);
      }
      for(int i = max-1; i>=0; --i)
      {
        digitalWrite(array[i], HIGH);
        delay(time3);
        digitalWrite(array[i], LOW);
      }
      counter = 0;  
    }
  }
}