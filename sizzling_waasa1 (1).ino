#define POTENCIOMETRO A1
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel NEO = Adafruit_NeoPixel(  8 , 3 ,  NEO_GRB + NEO_KHZ800 );

int tiempo  = 0;
int potencia = 0;
int r = 0;
int g = 0;
int b = 0;
int estadoAnterior;



void setup() {
  NEO.begin();
  NEO.setBrightness(50);
  NEO.clear();
  pinMode(POTENCIOMETRO, INPUT);
  Serial.begin(9600);
}

void loop() {
  potencia = analogRead(POTENCIOMETRO);
  tiempo = map(potencia, 0, 1023, 200 ,800  );
  Serial.println(tiempo); 
   Serial.println("el tiempo"); 
  NEO.clear();
  r = random(0, 255);
  g = random(0, 255);
  b = random(0, 255);
 NEO.setPixelColor(0, NEO.Color(r,g,b));
  NEO.setPixelColor(1, NEO.Color(r,g,b));
 Serial.println("el r");
   Serial.println(g);
   Serial.println("el g");
   Serial.println(b);
   Serial.println("el b");
  NEO.show();
  NEO.clear();
  delay(tiempo);
  NEO.clear();

  NEO.setPixelColor(2, NEO.Color(r,g,b));
  NEO.setPixelColor(3, NEO.Color(r,g,b));

Serial.println(r);
   Serial.println("el r");
   Serial.println(g);
   Serial.println("el g");
   Serial.println(b);
   Serial.println("b");
  NEO.show();
  delay(tiempo);
NEO.clear();

NEO.setPixelColor(4, NEO.Color(r,g,b));
  NEO.setPixelColor(5, NEO.Color(r,g,b));

 Serial.println("el r");
   Serial.println(g);
   Serial.println("el g");
   Serial.println(b);
   Serial.println("b");
  NEO.show();
delay(tiempo);
NEO.clear();
  delay(tiempo);

}