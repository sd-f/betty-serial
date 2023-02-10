#include <Arduino.h>


void setup() {
  Serial.begin(115200);

  Serial.print("--------------------\n");
  Serial.print("17-Jan-2010    10:15\n");
  Serial.print("    SARTORIUS       \n");
  Serial.print("Mod.          AZ6101\n");
  Serial.print("Ser. no.    10105355\n");
  Serial.print("Ver. no.    00-19-41\n");
  Serial.print("ID                  \n");
  Serial.print("--------------------\n");
  Serial.print("L ID                \n");
  Serial.print("wRef +     21.14 g  \n");
  Serial.print("Qnt  +       235 pcs\n");
  Serial.print("Qnt  +       567 pcs\n");
  Serial.print("--------------------\n");
  Serial.print("17-Jan-2010    10:20\n");
  Serial.print("Name:               \n");
  Serial.print("                    \n");
  Serial.print("--------------------\n");

/*
  Serial.print("--------------------\n");
  Serial.print("17-Jan-2010    10:30\n");
  Serial.print("    SARTORIUS       \n");
  Serial.print("Mod.          AZ6101\n");
  Serial.print("Ser. no.    10105355\n");
  Serial.print("Ver. no.    00-19-41\n");
  Serial.print("ID                  \n");
  Serial.print("--------------------\n");
  Serial.print("Cal Extern          \n");
  Serial.print("Set  +    5000.0 g  \n");
  Serial.print("--------------------\n");
  Serial.print("17-Jan-2010    10:32\n");
  Serial.print("Name:               \n");
  Serial.print("                    \n");
  Serial.print("--------------------\n");
  */
}


void loop() {
  delay(1000);
}