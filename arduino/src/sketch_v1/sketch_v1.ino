// Define a variable to store the received message
String message = "";

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Check if there is any data available on the serial port
  if (Serial.available() > 0) {
    // Read the incoming message until a newline character is detected
    message = Serial.readStringUntil('\n');
    // Print the received message to the serial monitor
    Serial.print("Received: ");
    Serial.println(message);
    // Send the same message back over UART
    Serial.print("Sending: ");
    Serial.println(message);
  }
}