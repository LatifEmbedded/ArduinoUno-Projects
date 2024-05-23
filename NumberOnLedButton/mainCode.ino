/* 
  BINARY NUMBERS FROM 0000 TO 1001 DISPLAYED ON LEDS USING THE PINS 12, 8, 7, 4 AS OUTPUT 
  WHILE PIN 2 AS INPUT USING INTERRUPT ON PIN 2 TO START AND CONTINUOUSLY IT KEEP DISPLAY THE NUMBERS
*/
int array[] = {12, 8, 7, 4}, time = 1000, max = 4, counter = 0;
volatile bool state = false;
int i = 0, value = 0, j = 0x01;
void function(void)
{
  if(state == false)
    state = true;
}
void setup() 
{
  for(int i = 0; i<max; ++i)
    pinMode(array[i], OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), function, RISING);
}
void loop() 
{
  if(state == true)
  {
    while(counter != 10)
    {
      while(i != max)
      {
        value = (counter & j);
        digitalWrite(array[i], value);
        ++i;
        j *= 2;
      }
      j = 0x01;
      i = 0;
      ++counter;
      delay(time);
    }
    counter = 0x00;
  }
}