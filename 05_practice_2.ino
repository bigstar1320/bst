#define LED 7
unsigned int count, toggle;
void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  count = toggle = 0;
  digitalWrite(LED, toggle);
}
void loop() {
  toggle = 0;
  digitalWrite(LED, toggle);
  delay(1000);
  count = 0;
  while (count < 10) {
    toggle = toggle_state(toggle);
    digitalWrite(LED, toggle);
    delay(100);
    count++;
  }
  digitalWrite(LED, 1);
  while (1) {
    ;
  }
}
int toggle_state(int toggle) {
  return !toggle;
}
