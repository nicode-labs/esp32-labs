const int potPin = 34; //Le pin 34 est un pin analog

int potValeur = 0; //Variable qui va recevoir les valeurs du potentiomètre

void setup() {
 
  Serial.begin(115200); //Demarre la communication en serie 
  delay(1000);

}

void loop() {
  potValeur = analogRead(potPin); //lit et reçoit les valeurs du potentiomètre par le pin 34
  Serial.println(potValeur); //ecrit les valeurs en colonne 
  delay(500);

}
