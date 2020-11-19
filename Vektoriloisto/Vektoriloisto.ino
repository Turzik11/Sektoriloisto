#define LedSIV 10

void setup() {
  pinMode(LedSIV, OUTPUT);
}

#define VIIVE 200
void loop(){
  digitalWrite(LedSIV, 0);
  delay(VIIVE);
  digitalWrite(LedSIV, 64);
  delay(VIIVE);
  digitalWrite(LedSIV, 127);
  delay(VIIVE);
  digitalWrite(LedSIV, 191);
  delay(VIIVE);
  digitalWrite(LedSIV, 255);
  delay(VIIVE * 5);
}
