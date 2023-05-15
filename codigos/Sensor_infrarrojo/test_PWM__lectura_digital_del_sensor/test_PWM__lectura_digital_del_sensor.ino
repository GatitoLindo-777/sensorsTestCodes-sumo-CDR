#include <PWM.h>
int32_t frequency = 38000; // Establezca la Frecuencia en Hertz (HZ), se pueden operar frecuencias de 10Hz a 300kHz aprox
#define EMITER_PIN 9
#define RECIVER_PIN 13
#define PWM 245

void setup()
{
  InitTimersSafe(); 
  bool success = SetPinFrequencySafe(EMITER_PIN, frequency);
  pinMode(RECIVER_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  pwmWrite(EMITER_PIN, PWM);
  delay(30);                       
  Serial.print(digitalRead(RECIVER_PIN));
}
