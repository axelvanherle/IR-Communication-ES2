#define MAX_MESSAGE_LENGTH 128 // Maximum length of the message
#define LED_PIN 13             // Pin number of the LED

void setup()
{
  Serial.begin(9600); // Start serial communication with a baud rate of 9600
}

void loop()
{
  static char message[MAX_MESSAGE_LENGTH + 1]; // Create a buffer to store the message. We do +1 to save the '\n' char.
  static int messageIndex = 0;                 // Index of the next available slot in the buffer
  
  if (Serial.available()) // Check if there is data available to read
  {
    char receivedChar = Serial.read();                              // Read the incoming character
    if (receivedChar == '\n' || messageIndex >= MAX_MESSAGE_LENGTH) // Check if the delimiter is received or the buffer is full
    {
      message[messageIndex] = '\0'; // Terminate the message string with null character
      Serial.print("Received: ");   // Print the message "Received: "
      Serial.println(message);      // Print the received message
      messageIndex = 0;             // Reset the message buffer index
    }
    else
    {
      message[messageIndex++] = receivedChar; // Store the received character in the buffer
    }
  }
}