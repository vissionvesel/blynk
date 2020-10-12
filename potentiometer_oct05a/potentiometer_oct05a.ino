int voltpin=A2,readVal,dtime=250 ;
float V2;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  readVal=analogRead(voltpin);
  V2=(5./1023.)*readVal;
  // put your main code here, to run repeatedly;
  Serial.println(V2);
  delay(dtime);

}
