/*Smart fan controlled via smart phone 
fab lab ismailia 
*/ 

#include <SoftwareSerial.h>
SoftwareSerial myfan (2,3) ;
byte fan = 4 ; 
byte onLed = 5 ; 
byte offLed = 6 ; 
void setup() {
myfan.begin(9600);  
pinMode (fan,OUTPUT) ; 
pinMode (onLed,OUTPUT) ;
pinMode (offLed,OUTPUT) ;
}

void loop() {
int reading = myfan.read();
if (reading = '1') 
{
digitalWrite (fan , HIGH) ; 
digitalWrite (onLed , HIGH) ;
digitalWrite (offLed , LOW) ;  
}

else if (reading = '0') 
{
digitalWrite (fan , LOW) ; 
digitalWrite (onLed , LOW) ;
digitalWrite (offLed , HIGH) ;  
}

}
