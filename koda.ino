int motor1 = 11;
int motor2 = 12;
int state = 2;

int sens1 = 4;
int sens2 = 3;
int sens3 = 2;

int btn1 = 5;
int btn2 = 6;
int btn3 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  pinMode(sens1, INPUT);
  pinMode(sens2, INPUT);
  pinMode(sens3, INPUT);

  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
// put your main code here, to run repeatedly:
  
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
  delay(50);
  if ((digitalRead(btn1) == HIGH) && (state != 0))
  {
   digitalWrite(motor1, HIGH);
   digitalWrite(motor2, LOW);
   while  (true)
   {
    delay(50);
    if (digitalRead(sens1) == LOW)
    {break;}
    }
    state = 0;
   }
  else if ((digitalRead(btn3) == HIGH) && (state != 2))
  {
   digitalWrite(motor1, LOW);
   digitalWrite(motor2, HIGH);
   while  (true){
    delay(50);
    if (digitalRead(sens3) == LOW)
    {break;}
   }
    state = 2;
   }
  else if ((digitalRead(btn2) == HIGH) && (state != 1))
  {
    if (state == 0)
    {
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
     }
     else
     {
     digitalWrite(motor2, HIGH);
      digitalWrite(motor1, LOW); 
     }
while  (true){
    delay(50);
    if (digitalRead(sens2) == LOW)
    {break;}
    }
    state = 1;
   }
}
