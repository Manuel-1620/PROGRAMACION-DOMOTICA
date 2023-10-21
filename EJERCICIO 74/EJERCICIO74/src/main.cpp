#include <Arduino.h>
#include <DataCapture.h>

   void setup() {

   Serial.begin(9600);
   Serial.println();
   
   void PedirDatos();
   void CambiarSigno(int vec[], int );
   void MostrarVector(int vec[], int );

   int vec[100];
   int Tam;

   PedirDatos(vec, Tam);
   CambiarSigno(vec, Tam);
   MostrarVector(vec, Tam);
}

   void PedirDatos(int vec[], int &Tam) {

   Tam = DataCapture::captureInteger("Digite el Tamaño del Vector: ");
   for (int i = 0; i < Tam; i++) {
      vec[i] = DataCapture::captureInteger("Digite el Numero: ");
   }
}

   void CambiarSigno(int vec[], int Tam) {
   for (int i = 0; i < Tam; i++) {
      vec[i] *= -1;
   }
}

void MostrarVector(int vec[], int Tam) {
   Serial.println("\nMostrando los Elementos del Vector con Signo Cambiado\n");

   for (int i = 0; i < Tam; i++) {
      
     vec[i] = DataCapture::captureInteger(" ");

   }
}


void loop() {

}

