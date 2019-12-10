int a=6;
int b=5;
int c=11;
int d=10;
int e=9;
int f=7;
int g=8;

void setup() {
 pinMode(a,OUTPUT); 
 pinMode(b,OUTPUT); 
 pinMode(c,OUTPUT); 
 pinMode(d,OUTPUT); 
 pinMode(e,OUTPUT); 
 pinMode(f,OUTPUT); 
 pinMode(g,OUTPUT); 
 }

 void loop() {
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(b,HIGH);digitalWrite(c,HIGH); delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(g,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH); delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(g,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH); delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(f,HIGH);digitalWrite(g,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(e,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);delay(500);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW); digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);delay(500);
  digitalWrite(a,HIGH);digitalWrite(b,HIGH);digitalWrite(c,HIGH);digitalWrite(d,HIGH);digitalWrite(f,HIGH);digitalWrite(g,HIGH);delay(500);

 }
