#include <Arduino.h>

#define RED_LED D0   // led warna merah
#define GREEN_LED D6 // led warna hijau

void setup()
{
  Serial.begin(115200);
  pinMode(RED_LED, OUTPUT); // atur pin-pin digital sebagai output
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.println("Contoh Program LED SOS");
}

void ledRED()
{

  // 3 dits (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(RED_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(RED_LED, LOW);  // LED mati
    delay(100);                  // delay selama 100ms
  }
  delay(100);

  // 3 dahs (3 garis atau huruf O)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(RED_LED, HIGH); // LED nyala
    delay(400);                  // delay selama 400ms
    digitalWrite(RED_LED, LOW);  // LED mati
    delay(100);                  // delay selama 100ms
  }

  // 100ms delay to cause slight gap between letters
  delay(100);
  // 3 dits again (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(RED_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(RED_LED, LOW);  // LED mati
    delay(100);                  // delay selama 100ms
  }
}

void ledGREEN()
{

  // 3 dits (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(GREEN_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(GREEN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }
  delay(100);

  // 3 dahs (3 garis atau huruf O)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(GREEN_LED, HIGH); // LED nyala
    delay(400);                  // delay selama 400ms
    digitalWrite(GREEN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }

  // 100ms delay to cause slight gap between letters
  delay(100);
  // 3 dits again (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(GREEN_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(GREEN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }
  digitalWrite(GREEN_LED, HIGH);
}

void ledBLUE()
{

  // 3 dits (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(BUILTIN_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(BUILTIN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }
  delay(100);

  // 3 dahs (3 garis atau huruf O)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(BUILTIN_LED, HIGH); // LED nyala
    delay(400);                  // delay selama 400ms
    digitalWrite(BUILTIN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }

  // 100ms delay to cause slight gap between letters
  delay(100);
  // 3 dits again (3 titik atau huruf S)
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(BUILTIN_LED, HIGH); // LED nyala
    delay(150);                  // delay selama 150ms
    digitalWrite(BUILTIN_LED, LOW); // LED mati
    delay(100);                  // delay selama 100ms
  }
}

void loop()
{
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, HIGH);
  ledRED();
  delay(3000);
  ledGREEN();
  delay(3000);
  ledBLUE();
  delay(3000);
}

