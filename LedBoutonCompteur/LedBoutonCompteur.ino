#define LED 10
#define BOUTON 11
int etatLed;
int compteur;
int etatBouton; 

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOUTON, INPUT_PULLUP);
  compteur = 0; 
  etatLed = LOW;

}

void loop() {
  while(compteur < 3){

    etatBouton = digitalRead(BOUTON);
    while(etatBouton == HIGH)
    {
      etatBouton = digitalRead(BOUTON);
    }
    compteur++;
    etatBouton = digitalRead(BOUTON);
    while(etatBouton == LOW)
    {
      etatBouton = digitalRead(BOUTON);
    }
}
etatLed = !etatLed;
digitalWrite(LED, etatLed);
compteur = 0;
}
