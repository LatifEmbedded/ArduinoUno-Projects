int array[] = {2, 4, 7, 8, 12, 13}, max = 6, time = 200, i = 0, j = max-1;
void setup(void)
{
  for(; i<max; ++i)
    pinMode(array[i], OUTPUT);
  i = 0;
}
void loop(void)
{
  if(i != 3 && j != 2)
  {
    digitalWrite(array[i-1], LOW);
    digitalWrite(array[j+1], LOW);
    digitalWrite(array[i], HIGH);
    digitalWrite(array[j], HIGH);
    delay(time);
    ++i;
    --j;
  }
  else
  {
    i -= 2, j+= 2;
    while(1)
    {
      if(i != -1 && j != 6)
      {
        digitalWrite(array[i+1], LOW);
        digitalWrite(array[j-1], LOW);
        digitalWrite(array[i], HIGH);
        digitalWrite(array[j], HIGH);
        delay(time);
        --i;
        ++j;
      }
      else
      {
        digitalWrite(array[0], LOW);
        digitalWrite(array[1], LOW);
        digitalWrite(array[2], LOW);
        digitalWrite(array[3], LOW);
        digitalWrite(array[4], LOW);
        digitalWrite(array[5], LOW);
        i = 0, j = max-1;
        break;  
      }
    }
  }
}