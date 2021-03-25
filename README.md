# Pr1

```
#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  Serial.println("ON");
  delay(500);
  Serial.println("OFF");
  }
```
## DIAGRAMA DE FLUJO
``` mermaid
graph TD;
    A(Turn the LED on)-->B(print on);
    B-->C(wait for 500 ms);
    C-->D(tunr the LED off);
    D-->E(print off);
    E-->F(wait for 500 ms);
    F-->A;
```
## DIAGRAMA DE TIEMPOS
```wavedrom
{ signal: [
    { name: "LED",  wave: "101010101" },
    { name: "time", wave:"484848484", data: ["0.5s", "0.5s", "0.5s" ,"0.5s","0.5s","0.5s","0.5s","0.5s","0.5s"] }
] }
```