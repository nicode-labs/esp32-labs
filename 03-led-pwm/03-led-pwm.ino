/*
  03-led-pwm
  Fait s'allumer une LED progressivement grâce au PWM, puis recommence.
  Matériel : ESP32 Dev Module + LED + résistance
*/

const int ledPin = 23;  // Broche de l'ESP32 reliée à la LED (via la résistance)


void setup() {
  pinMode(ledPin, OUTPUT);  // La broche 23 est une sortie (elle envoie du courant vers la LED)

}

void loop() {
  // Fait monter le rapport cyclique de 0 (éteinte) à 255 (pleine lumière), sur 8 bits
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    analogWrite(ledPin, dutyCycle);  // Envoie un signal PWM : plus la valeur est grande,
                                     // plus la LED reste allumée longtemps à chaque clignotement
    delay(15);                       // Pause de 15 ms entre chaque pas → montée d'environ 4 s
  }
