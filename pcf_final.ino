#include "PCF8574.h"
PCF8574 pcf8574A(0x20);
PCF8574 pcf8574B(0x24);
PCF8574 pcf8574C(0x21);
PCF8574 pcf8574D(0x25);

void setup() {Serial.begin(9600);


pcf8574A.pinMode(P0,INPUT);
pcf8574B.pinMode(P0,INPUT);
pcf8574C.pinMode(P0,INPUT);
pcf8574D.pinMode(P0,INPUT);
pcf8574A.pinMode(P1,INPUT);
pcf8574B.pinMode(P1,INPUT);
pcf8574C.pinMode(P1,INPUT);
pcf8574D.pinMode(P1,INPUT);
pcf8574A.pinMode(P2,INPUT);
pcf8574B.pinMode(P2,INPUT);
pcf8574C.pinMode(P2,INPUT);
pcf8574D.pinMode(P2,INPUT);
pcf8574A.pinMode(P3,INPUT);
pcf8574B.pinMode(P3,INPUT);
pcf8574C.pinMode(P3,INPUT);
pcf8574D.pinMode(P3,INPUT);
pcf8574A.pinMode(P4,INPUT);
pcf8574B.pinMode(P4,INPUT);
pcf8574C.pinMode(P4,INPUT);
pcf8574D.pinMode(P4,INPUT);
pcf8574A.pinMode(P5,INPUT);
pcf8574B.pinMode(P5,INPUT);
pcf8574C.pinMode(P5,INPUT);
pcf8574D.pinMode(P5,INPUT);
pcf8574A.pinMode(P6,INPUT);
pcf8574B.pinMode(P6,INPUT);
pcf8574C.pinMode(P6,INPUT);
pcf8574D.pinMode(P6,INPUT);
pcf8574A.pinMode(P7,INPUT);
pcf8574B.pinMode(P7,INPUT);
pcf8574C.pinMode(P7,INPUT);
pcf8574D.pinMode(P7,INPUT);
pcf8574A.begin();
pcf8574B.begin();
pcf8574C.begin();
pcf8574D.begin();

  // put your setup code here, to run once:

}

void loop() {uint8_t room1a=pcf8574A.digitalRead(P0);
uint8_t room1b=pcf8574A.digitalRead(P1);
uint8_t room1c=pcf8574A.digitalRead(P2);
uint8_t room1d=pcf8574A.digitalRead(P3);
uint8_t room1e=pcf8574A.digitalRead(P4);
uint8_t room1f=pcf8574A.digitalRead(P5);
uint8_t room1g=pcf8574A.digitalRead(P6);
uint8_t room1h=pcf8574A.digitalRead(P7);
uint8_t room2a=pcf8574B.digitalRead(P0);
uint8_t room2b=pcf8574B.digitalRead(P1);
uint8_t room2c=pcf8574B.digitalRead(P2);
uint8_t room2d=pcf8574B.digitalRead(P3);
uint8_t room2e=pcf8574B.digitalRead(P4);
uint8_t room2f=pcf8574B.digitalRead(P5);
uint8_t room2g=pcf8574B.digitalRead(P6);
uint8_t room2h=pcf8574B.digitalRead(P7);
uint8_t room3a=pcf8574C.digitalRead(P0);
uint8_t room3b=pcf8574C.digitalRead(P1);
uint8_t room3c=pcf8574C.digitalRead(P2);
uint8_t room3d=pcf8574C.digitalRead(P3);
uint8_t room3e=pcf8574C.digitalRead(P4);
uint8_t room3f=pcf8574C.digitalRead(P5);
uint8_t room3g=pcf8574C.digitalRead(P6);
uint8_t room3h=pcf8574C.digitalRead(P7);
uint8_t room4a=pcf8574D.digitalRead(P0);
uint8_t room4b=pcf8574D.digitalRead(P1);
uint8_t room4c=pcf8574D.digitalRead(P2);
uint8_t room4d=pcf8574D.digitalRead(P3);
uint8_t room4e=pcf8574D.digitalRead(P4);
uint8_t room4f=pcf8574D.digitalRead(P5);
uint8_t room4g=pcf8574D.digitalRead(P6);
uint8_t room4h=pcf8574D.digitalRead(P7);
    if(room1a==HIGH){
    Serial.println("From Room1: Extra Pillows and Bedsheets");
    delay(500);}
    else if(room1b==HIGH){
    Serial.println("From Room1: Towels");
    delay(500);}
    else if(room1c==HIGH){
    Serial.println("From Room1: Waterbottles");
    delay(500);}
    else if(room1d==HIGH){
    Serial.println("From Room1: Breakfast");
    delay(500);}
    else if(room1e==HIGH){
    Serial.println("From Room1: Cleaning");
    delay(500);}
    else if(room1f==HIGH){
    Serial.println("From Room1: Electrical");
    delay(500);}
    else if(room1g==HIGH){
    Serial.println("From Room1: Plumbing");
    delay(500);}
    else if(room1h==HIGH){
    Serial.println("From Room1: Urgent");
    delay(500);}

    if(room2a==HIGH){
    Serial.println("From Room2: Extra Pillows and Bedsheets");
    delay(500);}
    else if(room2b==HIGH){
    Serial.println("From Room2: Towels");
    delay(500);}
    else if(room2c==HIGH){
    Serial.println("From Room2: Waterbottes");
    delay(500);}
    else if(room2d==HIGH){
    Serial.println("From Room2: Breakfast");
    delay(500);}
    else if(room2e==HIGH){
    Serial.println("From Room2: Cleaning");
    delay(500);}
    else if(room2f==HIGH){
    Serial.println("From Room2: Electrical");
    delay(500);}
    else if(room2g==HIGH){
    Serial.println("From Room2: Plumbing");
    delay(500);}
    else if(room2h==HIGH){
    Serial.println("From Room2: Urgent");
    delay(500);}

    if(room3a==HIGH){
    Serial.println("From Room3: Extra Pillows and Bedsheets");
    delay(500);}
    else if(room3b==HIGH){
    Serial.println("From Room3: Towels");
    delay(500);}
    else if(room3c==HIGH){
    Serial.println("From Room3: Waterbottes");
    delay(500);}
    else if(room3d==HIGH){
    Serial.println("From Room3: Breakfast");
    delay(500);}
    else if(room3e==HIGH){
    Serial.println("From Room3: Cleaning");
    delay(500);}
    else if(room3f==HIGH){
    Serial.println("From Room3: Electrical");
    delay(500);}
    else if(room3g==HIGH){
    Serial.println("From Room3: Plumbing");
    delay(500);}
    else if(room3h==HIGH){
    Serial.println("From Room3: Urgent");
    delay(500);}

    if(room4a==HIGH){
    Serial.println("From Room4: Extra Pillows and Bedsheets");
    delay(500);}
    else if(room4b==HIGH){
    Serial.println("From Room4: Towels");
    delay(500);}
    else if(room4c==HIGH){
    Serial.println("From Room4: Waterbottes");
    delay(500);}
    else if(room4d==HIGH){
    Serial.println("From Room4: Breakfast");
    delay(500);}
    else if(room4e==HIGH){
    Serial.println("From Room4: Cleaning");
    delay(500);}
    else if(room4f==HIGH){
    Serial.println("From Room4: Electrical");
    delay(500);}
    else if(room4g==HIGH){
    Serial.println("From Room4: Plumbing");
    delay(500);}
    else if(room4h==HIGH){
    Serial.println("From Room4: Urgent");
    delay(500);}

  

  // put your main code here, to run repeatedly:

}
