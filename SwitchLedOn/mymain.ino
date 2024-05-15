void setup(void)
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}
void loop(void)
{
  if(digitalRead(7) == HIGH)
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);
}