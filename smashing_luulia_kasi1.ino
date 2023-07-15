int led1 = 2;
int led2 = 3;
int led3 = 4;
int button = 5;
int reading = 0;
int B = 0;
int counter = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  while (counter < 5) {
    reading = digitalRead(button);
    if (reading != B) {
      if (reading == HIGH) {
        counter++;
      }
    }
    B = reading;
    if (counter == 1) {
      digitalWrite(led1, HIGH);
    }
    if (counter == 2) {
      digitalWrite(led2, HIGH);
    }
    if (counter == 3) {
      digitalWrite(led3, HIGH);
    }
    if (counter == 4) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      delay(250);
    }
  }
 
  counter = 0;
}