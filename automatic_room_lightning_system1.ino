// Define the pin connected to the LDR
const int ldrPin = A0;
// Define the pin connected to the LED
const int ledPin = 13;
// Define the threshold value for light intensity
const int threshold = 1020; // Adjust this value according to your environment
void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the LDR
  int ldrValue = analogRead(ldrPin);
  
  // Print the value of the LDR to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Check if the light intensity is below the threshold
  if (ldrValue < threshold) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }

  // Add a small delay to prevent rapid reading
  delay(100);
}
