int motor_left[]={2,3};
int motor_right[]={4,5};
int LDR_left =A0; //reads the analog alues from the IRs
int LDR_right =A1;
int V1 =13; //Vcc and ground
int read1;
int read2;

void setup()
{
Serial.begin(9600);
// Setup motors
for(int i=0;i<2;i++)
{
pinMode(motor_left[i],OUTPUT);
pinMode(motor_right[i],OUTPUT);
}

pinMode(V1,OUTPUT);
pinMode(LDR_left,INPUT);
pinMode(LDR_right,INPUT);
read1=0;
read2=0;
digitalWrite(V1,HIGH); //Why?
/*
Uncomment for testing motor functions
moveforward();
delay(1000);
movebackward();
delay(1000);
moveleft();
delay(1000);
moveright();
delay(1000);
nomove();
delay(1000);
*/
} //end of void setup
void loop()
{
read1= analogRead(LDR_left); //stores the values of the IR
read2= analogRead(LDR_right);

if(read1>1000 && read2<1000) // object on left
{ Serial.println("Left");
moveleft();
}
else if (read1<990 && read2>930) // object on right
{ Serial.println("Right");
moveright();
}
else if ((read1>900) && (read2>880)) // object in front of both IRs
{ Serial.println("Forward");
moveforward();
}
else if (read1<850 && read2<950)
{
nomove();
}
} // end of void loop
void moveforward()
{
digitalWrite(motor_left[1],HIGH);
digitalWrite(motor_left[0],LOW);
digitalWrite(motor_right[1],LOW);
digitalWrite(motor_right[0],HIGH);
}
void movebackward()
{
digitalWrite(motor_left[0],LOW);
digitalWrite(motor_left[1],HIGH);
digitalWrite(motor_right[0],LOW);
digitalWrite(motor_right[1],HIGH);
}
void moveleft()
{
digitalWrite(motor_left[1],LOW);
digitalWrite(motor_left[0],HIGH);
digitalWrite(motor_right[0],HIGH);
digitalWrite(motor_right[1],LOW);
}
void moveright()
{
digitalWrite(motor_left[1],HIGH);
digitalWrite(motor_left[0],LOW);
digitalWrite(motor_right[0],LOW);
digitalWrite(motor_right[1],HIGH);
}
void nomove()
{
digitalWrite(motor_left[0],LOW);
digitalWrite(motor_left[1],LOW);
digitalWrite(motor_right[0],LOW);
digitalWrite(motor_right[1],LOW);
}
