#include <Arduino.h>
#include <DataCapture.h>

void setup() {

  Serial.begin(9600);
  Serial.println();

  int Dato = 5;
  int numero = DataCapture::captureInteger("Digite un Numero:");
  
  if (numero != Dato) {
    Serial.println("El Numero no es 5: ");
  } else {
    Serial.println("El Numero es 5: ");
  }
} 
  
void loop() {
  
}


