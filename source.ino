// Define pins for HC-SR04
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Initialize the serial communication:
  Serial.begin(9600);

  // Initialize the trigger pin as an output:
  pinMode(trigPin, OUTPUT);

  // Initialize the echo pin as an input:
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters:
  long distance = duration * 0.034 / 2;

  // Print the distance on the Serial Monitor:
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait for a bit before measuring again:
  delay(1000);
}
