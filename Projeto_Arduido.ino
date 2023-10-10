// C++ code
//
int luminosidade = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  luminosidade = analogRead(A0);
  if (luminosidade < 100) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  } else {
    Serial.println(luminosidade);
  }
  delay(10); // Delay a little bit to improve simulation performance
}