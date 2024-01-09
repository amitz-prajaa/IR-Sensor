int ir = 8 ;
int led1 = 13 ;
int led2 = 12 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir, INPUT);
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int s = digitalRead(ir );
    Serial.print("IR value : ");
    Serial.println(s);
    if(s==0){
      Serial.println("obstecal");
      digitalWrite(led1 , 0);
      digitalWrite(led2 , 1);
      delay(200);
    }
    else{
      Serial.println("no obstecal");
      digitalWrite(led2 , 0);
      digitalWrite(led1 , 1);
      delay(200);
      
    }
}
