void setup() {
  pinMode (A0, INPUT);
  pinMode (10, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (11, OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int v = analogRead (A0);
  analogWrite(10, v/4);
  analogWrite(6, v/4);
  analogWrite(11, v/4);

}
