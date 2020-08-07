#define joystickX 2
#define joystickY 26
#define button1 32
int Xceil = 1000;
int Xfloor = 100;
int Yceil = 1000;
int TestTest=0;
String Oput;
int buttonState;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(joystickX, INPUT);
pinMode(joystickY, INPUT);
pinMode(button1, INPUT);

}

void loop() {
  buttonState = digitalRead(button1);
  if(buttonState == LOW){
  StickFlicker();
  }
}




void StickFlicker (){
   int Xaxis = analogRead(joystickX);
 int Yaxis = analogRead(joystickY);
  while(Xaxis<Xceil&&Xaxis>Xfloor&&Yaxis<Yceil){
    Xaxis = analogRead(joystickX);
    Yaxis = analogRead(joystickY);
    if (Xaxis>998){
      TestTest = 1;
    }
    else if (Xaxis<102){
      TestTest = 2;
    }
    else if (Yaxis>998){
      TestTest = 3;
    }
    }
  // put your main code here, to run repeatedly: 
  delay(100);
  if (TestTest == 1){
    Serial.println("You're a right flicker");
    delay(100);
    TestTest=0;
  }
  else if (TestTest == 2){
    Serial.println("You're a left flicker");
    delay(100);
    TestTest=0;
  }
  else if(TestTest == 3){
    Serial.println("Up it is!");
    TestTest=0;
  }
  
  else if(TestTest<1&&TestTest>3){
    Serial.println("Didn't work :(");
    delay(100);
  }
}
