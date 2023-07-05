const int hallPin = 2;    
const int ledPin =  13;    
int hallState = 0; 

void setup ( ) {
  pinMode(ledPin, OUTPUT);      
  pinMode(hallPin, INPUT); 

  Serial.begin(9600);
}

void loop(){
  hallState = digitalRead (hallPin);               

  if ( hallState == LOW ) {
    Serial.println ( “ Magnet detected!” );
    digitalWrite (ledPin, HIGH) ;                                
  } 
  else {
    digitalWrite(ledPin, LOW);   
    Serial.println ( “Nothing” );
  }
}
