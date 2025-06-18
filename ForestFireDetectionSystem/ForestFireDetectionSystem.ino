
#include <LiquidCrystal.h>

// Initialize LCD pins (adjust if necessary)
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Pin assignments
const int tempPin = A0; // Temperature sensor pin
const int gasPin = A1;  // Gas sensor pin

// Threshold values
const float tempThreshold = 50.0; // Temperature threshold in °C
const int gasThreshold = 150;    // Gas threshold (adjust based on sensor)

void setup() {
  lcd.begin(16, 2); // Initialize the 16x2 LCD
  lcd.print("Fire Detection");
  delay(2000);
  lcd.clear();
  pinMode(tempPin, INPUT);
  pinMode(gasPin, INPUT);
  Serial.begin(9600); // Initialize Serial communication
  Serial.println("Fire Detection System Started");
}

void loop() {
  // Read sensor values
  int tempRaw = analogRead(tempPin);
  int gasRaw = analogRead(gasPin);

  // Convert temperature value
  float temperature = (tempRaw * 5.0 / 1023.0) * 100.0;

  // Display temperature on the first row
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C  "); // Add spaces to overwrite any leftover characters

  // Display gas level on the second row
  lcd.setCursor(0, 1);
  lcd.print("Gas: ");
  lcd.print(gasRaw);
  lcd.print("    "); // Add spaces to overwrite any leftover characters

  // Serial output for monitoring
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Gas Level: ");
  Serial.println(gasRaw);

  // Fire detection logic
  if (temperature > tempThreshold || gasRaw > gasThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("Fire Detected! ");
    Serial.println("Fire Detected!");
  } else {
    Serial.println("Status: Safe");
  }

  delay(1000); // Update every second
}
