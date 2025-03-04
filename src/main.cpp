#include <Arduino.h>

#define LED_RED 23
#define LED_YELLOW 22
#define LED_GREEN 21

#define BUTTON_1 34
#define BUTTON_2 32
#define BUTTON_3 33

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_1) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_RED, HIGH);
      delay(500);
      digitalWrite(LED_RED, LOW);
      delay(500);
    }
  }
  
  if (digitalRead(BUTTON_2) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_RED, HIGH);
      digitalWrite(LED_GREEN, LOW);
      delay(500);
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_GREEN, HIGH);
      delay(500);
    }
    digitalWrite(LED_GREEN, LOW);
  }

  if (digitalRead(BUTTON_3) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_RED, HIGH);
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_GREEN, LOW);
      delay(500);
      
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_YELLOW, HIGH);
      delay(500);
      
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_GREEN, HIGH);
      delay(500);
      
      digitalWrite(LED_GREEN, LOW);
    }
  }
}
