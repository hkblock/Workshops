int light=0;
int light2=0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}
void loop() {
light = analogRead(A0);
light2 = map(light,0,1023,0,255);
analogWrite(11, light2);
}

