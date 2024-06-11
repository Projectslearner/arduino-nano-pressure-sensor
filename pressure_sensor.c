/*
    Project name : Pressure Sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-pressure-sensor
*/

const int pressureSensorPin = A0; // Analog pin connected to the pressure sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int pressureValue = readPressure(); // Read pressure value from the sensor
  displayPressure(pressureValue); // Display pressure value on Serial Monitor
  delay(1000); // Add a small delay for stability
}

int readPressure() {
  int sensorValue = analogRead(pressureSensorPin); // Read analog value from the sensor
  return sensorValue; // Return the pressure value
}

void displayPressure(int pressure) {
  Serial.print("Pressure Sensor Value: ");
  Serial.println(pressure);
}
