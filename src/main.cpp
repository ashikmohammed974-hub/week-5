#include <arduino.h>



// put function declarations here:
float myFunction(float, float);

void setup() {
  Serial.begin(9600);
}

void loop() {
float number1 = getNumberFromUser("Enter a number: ");
  float number2 = getNumberFromUser("Enter another number: ");
  float result = myFunction(number1, number2);
  Serial.println(result);
} 

// put function definitions here:
float myFunction(float x, float y) {
  return x * y;
  Serial.println("The result is: " + String(result));
}
