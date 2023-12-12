// digital pin 2 has a pushbutton attached to it. Give it a name:
int joyButton = 13;
int xPin = A0;
int yPin = A1;

int button1 = 8;
int button2 = 4;
int button3 = 2;

int xValue = 0;
int yValue = 0;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(joyButton, INPUT);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);


}


// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  

  // print out the state of the buttons and joystick axis:
  Serial.print("j");
  Serial.println(digitalRead(joyButton));
  Serial.print("x");
  Serial.println(analogRead(xPin));
  Serial.print("y");
  Serial.println(analogRead(yPin));
  Serial.print("b1");
  Serial.println(digitalRead(button1));
  Serial.print("b2");
  Serial.println(digitalRead(button2));
  Serial.print("b3");
  Serial.println(digitalRead(button3));

  delay(1);  // delay in between reads for stability
}