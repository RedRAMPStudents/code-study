#define joystickX 2
int Xceil = 1000;
int Xfloor = 100;
int TestTest;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(joystickX, INPUT);

 int Xaxis = analogRead(joystickX);
  while(Xaxis<Xceil&&Xaxis>Xfloor){
    Xaxis = analogRead(joystickX);
    if (Xaxis>998){
      TestTest = 1;
    }
    else if (Xaxis<102){
      TestTest = 0;
    }
    }

}

void loop() {
  // put your main code here, to run repeatedly: 
  delay(100);
  if (TestTest == 1){
    Serial.println("You're a right flicker");
    delay(1000);
  }
  else if (TestTest == 0){
    Serial.println("You're a left flicker");
    delay(1000);
  }
  else{
    Serial.println("Didn't work :(");
    delay(1000);
  }
}
