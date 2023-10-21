#include <Arduino.h>
#include <DataCapture.h>

void setup() {

  Serial.begin(9600);
  Serial.println();

  int A [] = {3,4,2,1,5};
  int I, Dato;
  float band = 'F' ;

  Dato = 4 ;

  // La Busqueda Secuencial

  I=0;
  while ((band == 'F' ) && (I<5)) {
      if (A[I] == Dato ){

           band = 'V' ;

           break; 

      }

      I++;
  }

     if (band == 'F'){

     Serial.println("El Numero a Buscar No se Existe en el Arreglo " + String(I) );

     }
      else if (band == 'V'){

      Serial.println("El Numero a Sido Encontrado en el Pos : " + String(I));

      }
 

}


void loop() {
  


}

