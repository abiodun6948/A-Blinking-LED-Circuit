void setup() {
pinMode(13,OUTPUT);  // put your setup code here, to run once:

}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
tone(9,1000);
delay(200);
digitalWrite(13,LOW);
noTone(9);
delay(200);
}
