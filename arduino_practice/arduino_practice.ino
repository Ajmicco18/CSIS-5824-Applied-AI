char incomingByte = 0;
int choice = 0;

void setup() {
 //pinMode(LED_BUILTIN, OUTPUT);
 Serial.begin(9600);
 while (!Serial);

}

void loop() {
  /*digitalWrite(LED_BUILTIN, HIGH);
  delay(4000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000);*/

 if(Serial.available()>0){
    incomingByte = Serial.read();
    choice = incomingByte - '0';
    Serial.println(choice);

    switch(choice);
    }
}




