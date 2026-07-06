const int LED = 2;  //initialising led anode to D2 pin
void setup() {
  pinMode(LED, OUTPUT); // Configure the LED pin as an output pin
}

void loop() { 
  digitalWrite(LED, HIGH); // Turn the LED ON by setting the pin HIGH
  delay(2000);    // Keep the LED ON for 2 seconds
  digitalWrite(LED, LOW);  // Turn the LED OFF by setting the pin LOW
  delay(1000);  // Keep the LED OFF for 1 second
}