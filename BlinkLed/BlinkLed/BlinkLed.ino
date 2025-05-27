int led=2;  // 2 : number of bin connected to led

void setup() 
{

pinMode(led,OUTPUT); // identification 'led' as OUTPUT

}

void loop() 
{

digitalWrite(led,HIGH); // turn on the led
delay(1000); // delay 1s=1000ms

digitalWrite(led,LOW); // turn off the led
delay(1000);
}
