#include <Arduino.h>



// put function declarations here:
int myFunction(int x, int y);
int getNumberFromUser(const char* message);

void setup() {
  Serial.begin(9600);
}

void loop() {
int number1 = getNumberFromUser("Enter a number: ");
  int number2 = getNumberFromUser("Enter another number: ");
  int result = myFunction(number1, number2);
  Serial.println(result);
} 

// put function definitions here:
int myFunction(int x, int y) {
  int result = x * y;
  Serial.println("The result is: " + String(result));
  return result;
}

int getNumberFromUser(const char* message)
{
    Serial.println(message);

    while (Serial.available() == 0) 
    {
    }

    int number = Serial.parseInt(); 

    return number; 
}

