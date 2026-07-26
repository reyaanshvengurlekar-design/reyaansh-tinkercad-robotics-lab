// https://www.youtube.com/watch?v=luNc9ALvluk

// C++ code
//
int gassensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  gassensor = analogRead(A0);
  Serial.println(gassensor);
  if (gassensor >= 500) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, HIGH);
  }
  if (gassensor >= 650) {
    tone(7, 523, 100); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(7, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
