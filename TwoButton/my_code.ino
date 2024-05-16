/* 
  CREATOR : DALI FETHI ABDELLATIF
  DATE : 16/05/2024
  PROJECT : 
      - SWAPING LED FROM LEFT TO RIGHT BY PUSHING THE SWITCH CONNECTED TO PIN 3
      - SWAPING LED FROM RIGHT TO LEFT BY PUSHING THE SWITCH CONNECTED TO PIN 5
*/
int pinArray[] = {2, 4, 7, 8, 12, 13}, max = 6, time = 100, counter = 0;
void setup(void)
{
  for(int i = 0; i<max; ++i)
    pinMode(pinArray[i], OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
}
void loop(void)
{
  if(digitalRead(3) == HIGH)
  {
    delay(50);
    for(int i = 0; i<max; ++i)
    {
      digitalWrite(pinArray[i], HIGH);
      delay(time);
      digitalWrite(pinArray[i], LOW);
    }
  }
  else if(digitalRead(5) == HIGH)
  {
    delay(50);
    for(int i = max-1; i>=0; --i)
    {
      digitalWrite(pinArray[i], HIGH);
      delay(time);
      digitalWrite(pinArray[i], LOW);
    }  
  }
}