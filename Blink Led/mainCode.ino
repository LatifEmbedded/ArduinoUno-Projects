void setup(void)
{
  pinMode(8, OUTPUT);
}
void loop(void)
{
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
}