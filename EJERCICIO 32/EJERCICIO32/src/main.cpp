#include <Arduino.h>
#include <DataCapture.h>

void setup() {

  Serial.begin(9600);
  Serial.println();

  int Numero [100] ;
  int N = DataCapture::captureInteger("Digite un Numero de Elementos que va a Tener Arreglo :");

  for (int i=0;i<N; i++){
  
   Numero [i] = DataCapture::captureInteger("Digite un Número:");

  }
  
   Serial.println("Valores del Arreglo:");
   
  for (int i=0;i<N;i++){

       Serial.println(Numero[i]);

  }



}
void loop() {


}

