#include <MAX6675.h>

#define CS_PIN 10
MAX6675 tcouple(CS_PIN);

void setup()
{
  Serial.begin(9600);
  Serial.println("****MAX6675 thermocouple library by E. Kremer****");
  Serial.println();
}

void loop()
{
  float celsius = tcouple.readTempC();
  float fahrenheit = tcouple.readTempF();
  Serial.print("T in С = ");
  Serial.print(celsius);
  Serial.print(". T in Fahrenheit = ");
  Serial.println(fahrenheit);
  delay(500);
}