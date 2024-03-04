void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("\nHello wolrd");
  Serial.print("\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  String input1;
  String input2;

  Serial.print("\nZadejte první číslo");
  while (input1.length() < 1) {
    input1 = Serial.readStringUntil('\n');
  }

  Serial.print("\nZadejte druhé číslo");
  while (input2.length() < 1) {
    input2 = Serial.readStringUntil('\n');
  }
  
  int x = input1.toInt();
  int y = input2.toInt();
  int sum = x + y;
  Serial.print("\n");
  Serial.print(sum);
  Serial.print("\n");
}
