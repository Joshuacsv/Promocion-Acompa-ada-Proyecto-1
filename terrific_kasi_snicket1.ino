#define ledr 2
#define ledg 4
#define ledb 3
#define botnon 13

int bot;
int modo ;
int estadoBtn = HIGH;
int estadoAnterior = HIGH;

void setup()
{ 
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(botnon, INPUT_PULLUP);
  Serial.begin(9600);
}  

void loop() {
estadoBtn = digitalRead(bot);
 Serial.println("Estado");
 Serial.print(estadoBtn);

 if (estadoBtn == LOW && estadoAnterior == HIGH) {
    modo++;
    if (modo > 2) modo = 0;
    Serial.print("Modo: ");
    Serial.println(modo);
    delay(500); 
  }
 estadoAnterior = estadoBtn;
    Serial.println("modo" );
    Serial.println(modo);
  if(modo==0){
 Serial.println("Estado Bloqueado");
    analogWrite(ledr, 255);
   delay(1000);
  analogWrite(ledr, 255);
}  
if(modo==1){
 Serial.println("Estado Bloqueado");
    analogWrite(ledg, 255);
   delay(1000);
  analogWrite(ledg, 255);
}  
}






































































































































































































