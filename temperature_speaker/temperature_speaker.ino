const int sensorPin = A0;
const float constCleciusPerBit = 165/1024.0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  float sensorVal = analogRead(sensorPin);
  float temperature = sensorVal * constCleciusPerBit - 50;

  Serial.println("Sensor Temperature: ");
  Serial.println(temperature);

  Serial.println(sensorVal);


  delay(500);
}