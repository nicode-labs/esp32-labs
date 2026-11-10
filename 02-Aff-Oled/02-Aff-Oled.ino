/*
  02-aff-oled (NICO.G - nov.2026)
  Affiche du texte sur un écran OLED SSD1306 (128x64) en I2C.
  Matériel : ESP32 Dev Module + écran OLED 0,96" (SSD1306)
  Bibliothèque : ACROBOTIC_SSD1306
*/

#include <Wire.h>
#include <ACROBOTIC_SSD1306.h>

void setup() {
  
  Wire.begin(); //La ligne démarre le protocole I2C, et n'a 
                //pas besoin d'argument car il utilise les broches par défaut de l'esp32
                // (SDA = 21 et SCL = 22).
  oled.init();
  oled.clearDisplay();
  oled.setTextXY(0,0); //Définit où l'écran affiche, X (n° de ligne) Y (La colonne où ça commence)
  oled.putString("NicodeLabs");
  oled.setTextXY(1,0);
  oled.putString("BTS CIEL");
  oled.setTextXY(2,0);
  oled.putString("Test");
  oled.setTextXY(2,5);
  oled.putString("AFF OLED");

}

void loop() {

}
