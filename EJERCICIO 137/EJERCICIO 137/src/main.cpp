#include <Arduino.h>
#include <DataCapture.h>


void setup() {
    
  Animal *animales[2];
  animales[0] = new Perro (5, "Boby", "Pastor Aleman");
  animales[1] = new Humano(18,"Juan");

  animales [0] ->Comer(); 
  animales[1]-> Comer ();
  class Animal{

  private:
  int edad ;
  public:

  Animal(int);
  virtual void Comer ();

  };

  class Humano : public Animal {
    private:
     string Nombre;
     public:
     Humano (int,string);
     void Comer ();

  };

  class Perro : public Animal {

    private:
        string Nombre,Raza;
        public :
        Perro(int,string,string);
  };

  Animal :: Comer (){
  edad =_edad;
  }

  void Animal::Comer(){
   
   Serial.println ("Yo como");

  }

  Humano::Humano(int_edad,string_nombre) : Animal1(_edad) : Animal1(_edad){

     nombre = _nombre ;

  }

  void Humano::Comer (){
    Animal::Comar();
    Serial.println ("En una Mesa, Sentado en su Silla ");
  }

  Perro :: Perro (int_edad,string_Nombre,string_Raza) : Animal (_edad){

   Nombre = _Nombre;
   Raza = _Raza;

  }

  void Perro :: Comer(){
  Animal::Comar();
  Serial.println (" En el Suelo, con su Plato");
  }


}

void loop() {




  
}


