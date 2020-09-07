int ledPin= 2;
int buttonPin = 4;          //Here we defined the input pins
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);     //Here we defined whhich gives me output and to  which input is given
  pinMode(buttonPin,INPUT);

}

void loop() {
  buttonState = digitalRead(butonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
    Serial.println("LED ON *****  ");          //Here we use loop to make led on or off
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.println("LED  OFF *****"); 
  }

}                 //this the first basic project of arduino uno
