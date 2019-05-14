// reads INPIN and prints the result to Serial
#define INPIN A0

void setup(){
  Serial.begin(9600);
  pinMode(INPIN,INPUT);
} 
void loop(){ 
  Serial.println(analogRead(INPIN));
  delay(1);
}  
