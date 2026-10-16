# define LED_R 3
# define LED_G 6
# define LED_B 5
# define boto 7
int botonactual;
void setup() {

pinMode(LED_R, OUTPUT);
pinMode(LED_G, OUTPUT);
pinMode(LED_B, OUTPUT);
  pinMode(boto, INPUT_PULLUP);
 Serial.begin(9600);
}
void loop () {
 botonactual = digitalRead(boto);
  if (botonactual==LOW){
    analogWrite(LED_G, HIGH);
    analogWrite(LED_B, LOW);
    analogWrite(LED_R, HIGH);
  
  
  
  
  
  
  
  
  
  }else{

Serial.println("El boton se esta apretando");
    delay(1000);
    analogWrite(LED_G, LOW);
    analogWrite(LED_B, HIGH);
    analogWrite(LED_R, HIGH);













  }










}


