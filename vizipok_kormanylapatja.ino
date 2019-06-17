#include <Servo.h> //a servo könyvtár betöltése
int servoPin = 9;//változó rendelése a 9-es kimenethez

Servo servo; //a servo könyvtárba létrehoz egy servo nevű változót
int angle = 90; // szervó pozíció változója és értékadása


void setup(){
{
servo.attach(servoPin); //servó vezérlőszál összerendelése a digitális kimenetünkkel
} 

pinMode(6,INPUT); //bemenetek maghatarozasa
pinMode(7,INPUT);
}

void loop(){

int ertek= 0;// bealitja az ertek valtozot
if (digitalRead(6) == HIGH)// figyeli a 6-os bemenetet

{
  ertek= 1;
  angle = 0;// ha igaz beallitja a servo valtozot 0 fokra
}
if(digitalRead(7) == HIGH)// figyeli a 7-es bemenetet
{
  ertek= 2;
  angle = 180;// ha igaz beallitja a servo valtozot 180 fokra
}
switch (ertek){ //itt pedig összehasonlítja azt esetválasztókkal
case 1: // ha a 6-os bemenet aktiv
servo.write(angle); //a servo beall 0 fokra
break;
case 2: // ha a 7-es bemenet aktiv
servo.write(angle); //a servo beall 180 fokra
break;
default: // végrehajtódik ha egyik eset sem igaz
angle = 90;
servo.write(angle); //a servo beall 90 fokra
}

}
