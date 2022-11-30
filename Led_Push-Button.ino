int LED = 8;
int BUTTON = 2;

int buttonState;
int lastButtonState;
int ledState = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  lastButtonState = digitalRead(BUTTON);
}

void loop()
{
  buttonState = digitalRead(BUTTON);
  if (buttonState != lastButtonState){
    lastButtonState = buttonState;
    if (buttonState == LOW){
      if (ledState == HIGH){
        ledState = LOW;
      }
      else{
        ledState = HIGH;
      }
      digitalWrite(LED, ledState);
    }
  }
}
