void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);  //initialise Arduino pin 5 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);  //light up the led
  delay(1000);//wait 1 sec
  digitalWrite(5, LOW);//turn off the led
  delay(1000); // wait 1 sec
}
