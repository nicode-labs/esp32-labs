#define LED_ROUGE  10
#define LED_VERTE 11
#define LED_ORANGE  12
#define BOUTON  13
int etatBouton;
int etatLed;


void setup() {
  pinMode(LED_ROUGE, OUTPUT);
  pinMode(LED_VERTE, OUTPUT);
  pinMode(LED_ORANGE, OUTPUT);
  pinMode(BOUTON, INPUT_PULLUP);
  etatLed = HIGH;

}


void loop() {

  digitalWrite(LED_ROUGE, etatLed);
  etatBouton = digitalRead(BOUTON);
  while (etatBouton == HIGH)
  {
    etatBouton = digitalRead(BOUTON);
  }
  etatLed = !etatLed;
  digitalWrite(LED_ROUGE, etatLed);
  etatLed = !etatLed;
  digitalWrite(LED_ORANGE, etatLed);
  while (etatBouton == LOW)
  {
    etatBouton = digitalRead(BOUTON);
  }

  
  etatBouton = digitalRead(BOUTON);
  while (etatBouton == HIGH)
  {
    etatBouton = digitalRead(BOUTON);
  }
  etatLed = !etatLed;
  digitalWrite(LED_ORANGE, etatLed);
  etatLed = !etatLed;
  digitalWrite(LED_VERTE, etatLed);
  while (etatBouton == LOW)
  {
    etatBouton = digitalRead(BOUTON);
  }


  etatBouton = digitalRead(BOUTON);
  while (etatBouton == HIGH)
  {
    etatBouton = digitalRead(BOUTON);
  }
  etatLed = !etatLed;
  digitalWrite(LED_VERTE, etatLed);
  etatLed = !etatLed;
  while (etatBouton == LOW)
  {
    etatBouton = digitalRead(BOUTON);
  }
}

```