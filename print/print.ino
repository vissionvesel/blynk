int j=1,dtime=750,x=3,y=7,z;
String mystring=" + ";
float pi=3.14;
float r=2;
float area;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print("radius=");
Serial.println(r);
Serial.print("area=");
Serial.println(area);
delay(dtime);
r=r+.5;
}
