String incoming_str; 
int d = 0;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  if(d == 0){
    Serial.print("Received : ");
    d = 1;
  }
  
  if (Serial.available() > 0) {
    d = 2;
    incoming_str = Serial.readString();
    Serial.println(incoming_str);
  }else{
    if(d == 2){d = 0;}
  }
 
}
