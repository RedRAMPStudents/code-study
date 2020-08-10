
const int buzzerPin = 40;
const int buttonPin = 32;
int buttonState = HIGH;
void setup() 
{
pinMode(buttonPin,INPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);

}
void loop() 
{
while(buttonState == HIGH){
  
 buttonState = digitalRead(buttonPin);
   
    
    tone(40, 277, 1000);

      //delay between pulse
    delay(1300);
    
    noTone(buzzerPin);   
    buttonState = digitalRead(buttonPin);
}
}
