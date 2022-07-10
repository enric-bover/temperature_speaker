const int sensorPin = A0;
const float constVoltagePerBit = 5/1024.0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  float sensorVal = analogRead(sensorPin);
  float temperature = (sensorVal * constVoltagePerBit)*100.0 - 50.0;

  Serial.println("Sensor Temperature: ");
  Serial.println(temperature);

  Serial.println(sensorVal);


  delay(500);
}
