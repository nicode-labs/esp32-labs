#define LED 10
#define BOUTON 11
int etatBouton;
int etatLed;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOUTON, INPUT_PULLUP);
  etatBouton = digitalRead(BOUTON);
  etatLed = LOW;
}

void loop()
{
  etatBouton = digitalRead(BOUTON);
  while(etatBouton == LOW)
  {
    etatBouton = digitalRead(BOUTON);
  }
  etatLed = !etatLed;
  digitalWrite(LED, etatLed);
  etatBouton = digitalRead(BOUTON);
  while(etatBouton == HIGH)
  {
    etatBouton = digitalRead(BOUTON);
  }
  
}