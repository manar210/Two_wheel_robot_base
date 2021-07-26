void setup()
{
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

pinMode(6, OUTPUT);
pinMode(3, OUTPUT);

}

void loop()
{
  // Moving clockwise
  
digitalWrite(11, HIGH);
digitalWrite(6, HIGH); 

delay(700); // Wait for 700 millisecond(s)

  // Moving counterclockwise
  
digitalWrite(11, LOW);
digitalWrite(6, LOW);

delay(700); // Wait for 700 millisecond(s)

  // Moving clockwise
  
digitalWrite(10, HIGH);
digitalWrite(3, HIGH);

delay(700); // Wait for 700 millisecond(s)
  
// Moving counterclockwise
  
digitalWrite(10, LOW);
digitalWrite(3, LOW);

delay(700); // Wait for 700 millisecond(s)

}