//Congratulations and welcome to Digital-Hit-Me-Target Scoring System created and made by Stachu.
//Version 4.0

//+ 1x ultrasonic unit to meassure the distance
//+ 1x addressabe LED to show distance status (R /G /B) + 1x 330 Ohm resistor
//+ 2x MAX7219 to display the acheved points
//+ automatic meassurment of the road witdh at startup to determine the max value [cm]
//+ calculating points regarding to distance from the ultrasonic unit (0 - 100)

// Required Arduino libraries:
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#include <hcsr04.h>
#include <FastLED.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 2
#define CS_PIN 7
#define LED_PIN     3
#define NUM_LEDS    1
CRGB leds[NUM_LEDS];

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

 #define DATAPIN 10
 #define CLK_PIN 8

const int trigPin = 5;
const int echoPin = 6;
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
float j;
float k;
int t;
float x;
int z;
float ab;
float cd;
float ef;
float gh;
float ij;
float abcd;
float efgh;
float ijk;
float abcdefgh;
float abcdefghijk;
float percentage;
int roadWidth;
int messFrom;
int delayDisplay = 0; // setting up the delay of showing the achieved points; i.e. a value of 0 means no delay - instant showing the points parallel to the LED-light, 1000 shows the points 1 second after the LED-light [value in milliseconds]
int probe = 35; // setting up the sensitivity; i.e. a value of 1 means ultrafast measurment, 100 very slow [value in milliseconds]
long duration;
int distance;

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  myDisplay.begin();
  myDisplay.setIntensity(3);
  myDisplay.displayClear();
    
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
 
  Serial.begin(9600); 

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  z = duration * 0.034 / 2;
  roadWidth = z;
  messFrom = (roadWidth - 1);
  Serial.print("Road width: ");
  Serial.println(z);
  Serial.println("");  
  delay (probe);
  
  leds[0] = CRGB(0, 0, 255);
  FastLED.show();
  myDisplay.setTextAlignment(PA_CENTER);  
  myDisplay.print(String(z));
  delay(2000);
  myDisplay.setTextAlignment(PA_CENTER);  
  myDisplay.print(" ");
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  x = duration * 0.034 / 2;
  if (x <= messFrom)
  {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  a = duration * 0.034 / 2;
  if (a > roadWidth)
  {
  a = messFrom;
  }
  Serial.print("Distance a: ");
  Serial.println(a);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  b = duration * 0.034 / 2;
  if (b > roadWidth)
  {
  b = messFrom;
  }
  Serial.print("Distance b: ");
  Serial.println(b);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  c = duration * 0.034 / 2;
  if (c > roadWidth)
  {
  c = messFrom;
  }
  Serial.print("Distance c: ");
  Serial.println(c);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  d = duration * 0.034 / 2;
  if (d > roadWidth)
  {
  d = messFrom;
  }
  Serial.print("Distance d: ");
  Serial.println(d);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  e = duration * 0.034 / 2;
  if (e > roadWidth)
  {
  e = messFrom;
  }
  Serial.print("Distance e: ");
  Serial.println(e);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  f = duration * 0.034 / 2;
  if (f > roadWidth)
  {
  f = messFrom;
  }
  Serial.print("Distance f: ");
  Serial.println(f);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  g = duration * 0.034 / 2;
  if (g > roadWidth)
  {
  g = messFrom;
  }
  Serial.print("Distance g: ");
  Serial.println(g);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  h = duration * 0.034 / 2;
  if (h > roadWidth)
  {
  h = messFrom;
  }
  Serial.print("Distance h: ");
  Serial.println(h);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  i = duration * 0.034 / 2;
  if (i > roadWidth)
  {
  i = messFrom;
  }
  Serial.print("Distance i: ");
  Serial.println(i);
  delay (probe);


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  j = duration * 0.034 / 2;
  if (j > roadWidth)
  {
  j = messFrom;
  }
  Serial.print("Distance j: ");
  Serial.println(j);
  delay (probe);
  

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  k = duration * 0.034 / 2;
  if (k > roadWidth)
  {
  k = messFrom;
  }
  Serial.print("Distance k: ");
  Serial.println(k);
  Serial.println("");
  delay (probe);
  

  ab = min (a, b);
  cd = min (c, d);  
  ef = min (e, f);
  gh = min (g, h);   
  ij = min (i, j);  
    abcd = min (ab, cd);
    efgh = min (ef, gh);
    ijk = min (ij, k);
      abcdefgh = min (abcd, efgh);
        abcdefghijk = min (abcdefgh, ijk);
          percentage = (103 - abcdefghijk);   
          if (percentage > 100)
          {
          percentage = 100;  
          }
          int minPoints = (100 - messFrom);
          int points = percentage;
          points = map(points, minPoints, 100, 0, 100);

  Serial.print("Score: ");
  Serial.println(points);
  Serial.println("");

  if (points >= 80)
  {
    leds[0] = CRGB(0, 255, 0);
    FastLED.show();
  }
  if (points >= 50 && points < 80) 
  {
    leds[0] = CRGB(150, 100, 0);
    FastLED.show();    
  }
  if (points < 50)
  {
    leds[0] = CRGB(255, 0, 0);
    FastLED.show();  
  }

  delay(delayDisplay);
  myDisplay.setTextAlignment(PA_CENTER);  
  myDisplay.print(String(points));
  delay(300); // uncomment the lines 332 - 335 to clear the result every (xxxx) milliseconds after triggering; i.e. a value of 3000 means that the achieved score and LED will turn off after 3 seconds. Next measure is possible only after the setted time (in this case 3 seconds) [value in milliseconds]
//  myDisplay.displayClear();
//  leds[0] = CRGB(0, 0, 0);
//  FastLED.show();   
 }
}
