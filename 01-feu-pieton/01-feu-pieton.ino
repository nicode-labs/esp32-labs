// Feu piéton - ESP32
// Le feu reste vert, et quand on appuie sur le bouton,
// il passe à l'orange puis au rouge pour laisser traverser.

// on définit les constantes, c'est à dire les LED de couleur et le bouton
const int LED_VERT = 15;
const int LED_ORANGE = 4;
const int LED_ROUGE = 5;
const int BOUTON = 13;

// ce qui s'exécute une seule fois au démarrage : on prépare les broches
void setup() {
  pinMode(LED_VERT, OUTPUT);     // en gros, la broche 15 est une sortie : la carte va envoyer du courant pour allumer la LED
  pinMode(LED_ORANGE, OUTPUT);
  pinMode(LED_ROUGE, OUTPUT);
  pinMode(BOUTON, INPUT_PULLUP); // en gros, la broche 13 est une entrée : la carte va lire si le bouton est appuyé (relâché = HIGH, appuyé = LOW)
}

// là on a tout préparé, donc on peut faire la boucle
void loop() {
  digitalWrite(LED_VERT, HIGH);  // on dit à la broche 15 d'être dans l'état HIGH (donc la LED verte s'allume)

  // pour attendre l'appui du bouton, on fait une boucle "tant que"
  while (digitalRead(BOUTON) == HIGH) {
    // tant que le bouton n'est pas appuyé (HIGH), on attend
  }

  // le bouton a été appuyé : le feu passe à l'orange
  digitalWrite(LED_VERT, LOW);
  digitalWrite(LED_ORANGE, HIGH);
  delay(1000);                   // orange pendant 1 seconde

  // puis au rouge, pour laisser traverser les piétons
  digitalWrite(LED_ORANGE, LOW);
  digitalWrite(LED_ROUGE, HIGH);
  delay(3000);                   // rouge pendant 3 secondes
  digitalWrite(LED_ROUGE, LOW);

  // la boucle recommence : retour au vert
}