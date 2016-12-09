int LDR = 0;
int LDRValue = 0;
int Light_sensitivity = 10;


void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop()
{
  LDRValue = analogRead(LDR);
  Serial.println(LDRValue);
  delay(50);  

  if(LDRValue < Light_sensitivity)
  {
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(12, HIGH);
    delay(200);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    digitalWrite(12, LOW);

  }
}  

