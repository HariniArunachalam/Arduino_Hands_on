const int ledRed = 12;
const int ledYellow = 11;
const int ledGreen = 10;
void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}
void all_Off()
{
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,LOW);
}

void loop() {
   Go_State();
  delay(5000);
  Wait_State();
  delay(2000);
  Stop_State();
  delay(5000);
}
void Go_State()
{
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,LOW);
}
void Wait_State()
{
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledGreen,LOW);
}
void Stop_State()
{
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,HIGH);
}
