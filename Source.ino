
// Pin where the relay is connected
int RelaySignalPin = 2;               

// Setup circuit outputs and inputs
void setup()                    
{
    pinMode(RelaySignalPin, OUTPUT);      
}

// Main loop
void loop()                     
{
    // Writes an HIGH signal on port <RelaySignalPin> 
    digitalWrite(RelaySignalPin, HIGH);  

    // Forces the circuit to wait for a 1 second
    delay(1000);             
    
    // Writes an LOW signal on port <RelaySignalPin>     
    digitalWrite(RelaySignalPin, LOW);    
    delay(1000);                 
}
