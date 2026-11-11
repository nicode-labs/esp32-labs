/*
  05-bouton
  Allume une LED tant que le bouton est appuyé.
  Matériel : ESP32 Dev Module + bouton poussoir + résistance 10 kOhm (pull-down) + LED + résistance
*/

const int pinBouton = 4;  // Broche qui lit l'état du bouton
const int ledPin = 23;    // Broche qui commande la LED
int etatBouton = 0;       // Mémorise l'état lu sur le bouton (0 ou 1)

void setup() {
  Serial.begin(115200);         // Démarre la communication série avec l'ordinateur
  pinMode(pinBouton, INPUT);    // Entrée : la pull-down de 10 kOhm évite l'état flottant
  pinMode(ledPin, OUTPUT);      // Sortie vers la LED

}

void loop() {
  etatBouton = digitalRead(pinBouton);  // Relâché = LOW (0), appuyé = HIGH (1)
  Serial.println(etatBouton);           // Affiche l'état dans le moniteur série
  if(etatBouton == HIGH){               // Bouton appuyé → LED allumée
    digitalWrite(ledPin, HIGH);
  }
  else{                                 // Bouton relâché → LED éteinte
    digitalWrite(ledPin, LOW);
  }

}
