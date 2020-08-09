/*
 * Declaring variables for pin values and button state values
 */
const int button = 32;
const int buttonTwo = 33;
const int joyButton = 5;
int buttonState=HIGH;
int buttonStateTwo = HIGH;
int joyButtonState = HIGH;
int buzzerPin = 40;
int pause;
/*
 * c is the variable for number of cycles, this tells us when a study/rest cycle is complete. g serves as our timer for this program, 
 * counting out the number of seconds passed.
 */
int c = 0;
int g=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button, INPUT_PULLUP);
pinMode(buttonTwo, INPUT_PULLUP);
pinMode(joyButton, INPUT_PULLUP);
}

void loop() {
  if(g==0){
    
    tone(40, 523, 500);
    digitalWrite(BLUE_LED, HIGH);
    
      //delay between pulse
    delay(130);
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    tone(40, 1047, 500);
    
    delay(1000);
    digitalWrite(BLUE_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    delay(1000);
    noTone(buzzerPin);   
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);

  }
  // put your main code here, to run repeatedly: 
  /*
   * This while loop helps countain the study/rest cycle, and leave it when needed.
   */
  while(buttonStateTwo==HIGH){
delay(1000);
buttonStateTwo = digitalRead(buttonTwo);
++g;
Serial.println(g);
if(g%2==0){
  digitalWrite(RED_LED, HIGH);
}
else{
  digitalWrite(RED_LED, LOW);
}
joyButtonState = digitalRead(joyButton);
if(joyButtonState==LOW){
    tone(40, 392, 500);
    digitalWrite(BLUE_LED, HIGH);
    
      //delay between pulse
    delay(130);
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    tone(40, 587, 500);
    
    delay(1000);
    digitalWrite(BLUE_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    delay(1000);
    noTone(buzzerPin);   
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
  pause=1;
  delay(1000);
}
else{
  pause=0;
}

while(pause == 1){
digitalWrite(RED_LED, HIGH);
  joyButtonState = digitalRead(joyButton);
if(joyButtonState==LOW){
  tone(40, 587, 500);
    digitalWrite(GREEN_LED, HIGH);
    
      //delay between pulse
    delay(130);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BLUE_LED, HIGH);
    tone(40, 392, 500);
    
    delay(1000);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BLUE_LED, HIGH);
    delay(1000);
    noTone(buzzerPin);   
    digitalWrite(BLUE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
  pause=0;
}
else{
  pause=1;
}
}
/*
 * The buzzer goes off after 20 minutes the first time (20 seconds in this prototype) and then every 30 minutes subsequently. The formula "g-c*30==20"
 * helps ensure it will go off at these times. Shoutout to Mrs. Fang for the Calc 2 series lesson
 */
if(g-c*1500==1200){
  while(buttonState == HIGH){
  
 buttonState = digitalRead(button);
    
    tone(buzzerPin, 277, 1000);

      //delay between pulse
    delay(1300);
 
    noTone(buzzerPin);   
    buttonState = digitalRead(button);
}
buttonState=HIGH;
}
/*
 * The rest buzzer goes off for the first time at 30 , this formula helps ensure that
 */
if(g%1500==0){
  while(buttonState == HIGH){
  
 buttonState = digitalRead(button);
   
    
    tone(40, 1047, 100);

      //delay between pulse
    delay(130);
    tone(40, 1047, 100);
    delay(1000);
    
    noTone(buzzerPin);   
    buttonState = digitalRead(button);
}
  buttonState=HIGH;
  ++c;
}
}
 tone(40, 659, 250);

      //delay between pulse
    delay(130);

    tone(40, 784, 250);

    delay(130);

    tone(40, 1319, 250);

    delay(130);

    tone(40, 1047, 250);

    delay(130);

    tone(40, 1175, 250);

    delay(130);

    tone(40, 1568, 250);
    
      //delay between pulse
    delay(1000);
    
    noTone(buzzerPin); 
Serial.print("You had a ");
double f = (double)g/60;
Serial.print(f);
Serial.println(" minute study session!");
Serial.print(g);
Serial.print("\t");
Serial.println(c);
delay(100);
int d=4;
while(d==4){
  
}

}
