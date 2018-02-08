
const int Fabric = 9;

int LED = 11;
int Brightness = 0;
int FadeAmount = 5;
int FabricValue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (LED, OUTPUT);
pinMode (Fabric, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


FabricValue = digitalRead(Fabric);
Serial.println(FabricValue);
delay(90);

if (FabricValue == HIGH)
  {digitalWrite(LED,HIGH);}
else 
  {digitalWrite(LED,LOW);}
 analogWrite(LED, Brightness);

 Brightness = Brightness + FadeAmount;

 if (Brightness <= 0 || Brightness >=250)
 { FadeAmount = -FadeAmount; }

 delay(30);
 
 if (FabricValue == LOW)
 {digitalWrite(LED, LOW);}
 }
