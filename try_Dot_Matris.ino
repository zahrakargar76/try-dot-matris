#include <MaxMatrix.h>
int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

byte buffer [20];
char text[] = "a";

MaxMatrix m(DIN, CS, CLK, maxInUse);
void setup() {
  // put your setup code here, to run once:
  m.init();
  m.setIntensity(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  m.setDot(0, 7, true);
  delay(1000);
  m.setDot(7, 0, true);
  delay(1000);
  m.setColumn(3, B11110000);
  delay(1000);
  m.setColumn(4, B00001111);
  delay(1000);
  m.clear();
  delay(1000);
}
