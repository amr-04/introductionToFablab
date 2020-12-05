
//The idea of this sketch is to turn on the built-in arduino LED number of times equals to the number of button pushes.




int state=1; //To know the number of the state we're in


void setup() {
  Serial.begin(9600); //To begin serial communication on baud 9600
  pinMode (LED_BUILTIN, OUTPUT); //To setup the built-in arduino LED to be the output
  pinMode (7, INPUT); //To setup the button connected with pin number 7 to be the input
  
  
}

void loop() {
  
  int counter=0; //Counter for the while loop that is going to be used
  
  if (digitalRead (7)) //if statment to check when the button is pushed (true)
  {
    Serial.println("Button push number:"); //Writes on the serial monitor
    Serial.println(state);  //Writes on the serial monitor the number of pushes

  while(counter<state)
  {
  digitalWrite(LED_BUILTIN, HIGH); //To turn the arduino LED on
  delay(1000);  //delay with one second
  digitalWrite (LED_BUILTIN, LOW); //To turn the arduino LED off
  delay(1000); //delay with one second
  
  counter++; //Counter iteration for the while loop
  }
  state++;  //state iteration for the void loop
  }
  
  
  
 
   
}
