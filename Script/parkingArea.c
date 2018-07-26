void setup() {
  pinMode(1,OUTPUT);   //sensor
  pinMode(2,OUTPUT);   //sensor
  pinMode(3,OUTPUT);   //sensor
  pinMode(4,OUTPUT);   //sensor
  pinMode(5,OUTPUT);   //leds
  pinMode(6,OUTPUT);   //leds
  pinMode(7,OUTPUT);   //leds
  pinMode(8,OUTPUT);   //leds
  pinMode(9,OUTPUT);   //leds
  pinMode(10,OUTPUT);  //leds
  Serial.begin(9600);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  int read1,read2,read3,read4;
  read1=analogRead(0);
  read2=analogRead(1);
  read3=analogRead(2);
  read4=analogRead(3);

  if (read1<985)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    Serial.println("A empty");
  }
  else if (read2<1015)
  {
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    Serial.println(read2);
  }
  else if (read3<1018)
  {
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    Serial.println("C empty");
  }
  else if (read4<1018)
  {
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    Serial.println("D empty");
  }
  // put your main code here, to run repeatedly:

}
