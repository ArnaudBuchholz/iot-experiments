/*
 * Heartbeat
 *
 */

int count = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Heartbeat");
  Serial.print("count: ");
  Serial.println(count);
  pinMode(BUILTIN_LED, OUTPUT);  // initialize onboard LED as output
}
 
void loop() {
  ++count;
  Serial.print(count);
  Serial.print(" ");
  digitalWrite(BUILTIN_LED, LOW);   // LED ON
  delay(50);                        // wait 50 ms
  digitalWrite(BUILTIN_LED, HIGH);  // LED OFF
  delay(50);                        // wait 50 ms
  digitalWrite(BUILTIN_LED, LOW);   // LED ON
  delay(50);                        // wait 50 ms
  digitalWrite(BUILTIN_LED, HIGH);  // LED OFF
  delay(350);                       // wait 850 ms
}
