void setup()
{
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
}

void loop()
{
digitalWrite(7, HIGH);// clockwise
digitalWrite(6, LOW);
delay(2000);
digitalWrite(7, LOW); // Anticlockwise
digitalWrite(6, HIGH);
delay(2000);
digitalWrite(7, LOW); // stop
digitalWrite(6, LOW);
delay(2000);
}
