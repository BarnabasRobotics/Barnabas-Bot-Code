#include <Servo.h>//Need the Servo header so arduino knows what a motor is.
int BUTTON = 2;//Giving all my connected pins names so I remember what they are.
int LED = 5;
int SPEAKER = 6;
int RESET = 12;
Servo lArm;//Making my virtual motors
Servo rArm;
Servo head;

void setup()
{
pinMode(LED,OUTPUT);//Setting up pin modes
pinMode(BUTTON,INPUT_PULLUP);//This one's important. INPUT_PULLUP tells the button to be high so it notices when it is pulled low, aka when the button is pushed.
pinMode(SPEAKER,OUTPUT);
pinMode(RESET,INPUT);//I set the reset pin to input initially. I don't want it inadvertantly sending a signal.
digitalWrite(RESET,LOW);//I primed the reset pin. Notice because I set the pin to input it won't actually send a signal until the pinmode is changed.
lArm.attach(9);//attaching all my motors
rArm.attach(10);
head.attach(11);
while(digitalRead(BUTTON)==1){//Here is where we get our robot to start at our command. This while loop is conditioned to check if the button has been pressed yet.
digitalWrite(LED,HIGH);//I made it blink while waiting for the button to be pressed.
delay(500);
digitalWrite(LED,LOW);
delay(500);
}
}

void loop()
{
for(int i = 0; i<=3; i++)//Used a for loop so my robot doesn't dance forever
{
head.writeMicroseconds(1000);
lArm.writeMicroseconds(1000);
rArm.writeMicroseconds(2000);
delay(500);
head.writeMicroseconds(2000);
lArm.writeMicroseconds(2000);
rArm.writeMicroseconds(1000);
delay(500);
}
pinMode(RESET,OUTPUT);//Switch pinmode so the reset gets a low signal.
while(1);//failsafe. Robot should never get to here.
}

