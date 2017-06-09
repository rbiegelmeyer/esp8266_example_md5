#include <MD5Builder.h>

MD5Builder _md5;

String md5(String str) {
  _md5.begin();
  _md5.add(String(str));
  _md5.calculate();
  return _md5.toString();
}

void setup() {
  Serial.begin(115200);

  Serial.println("MD5 example\n");

  Serial.println("MD5 (\"foo\") = acbd18db4cc2f85cedef654fccc4a4d8 (known)");
  Serial.print("MD5 (\"foo\") = ");
  Serial.print(md5("happy"));
  Serial.println(" (calculated)\n");

  Serial.println("MD5 (\"bar\") = 37b51d194a7513e45b56f6524f2d51f2 (known)");
  Serial.print("MD5 (\"bar\") = ");
  Serial.print(md5("bar"));
  Serial.println(" (calculated)\n");
}

void loop() {
}
