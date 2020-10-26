//Initialization junk for camera
#include "esp_camera.h"
#include <WiFi.h>
#define CAMERA_MODEL_ESP_EYE

const char* ssid = "esp-eye-9d25";
const char* password = "";


//Initialization junk for servo
#include <Servo.h>
Servo myservo;

//Initialization junk for Piezo
const int buzzer = 8; 

//Initialization junk for camera server
void startCameraServer();

void setup() {

//Setup shit for Camera
  #if defined(CAMERA_MODEL_ESP_EYE)
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  #endif
  
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");


//Setup shit for servo 
  myservo.attach(9);}
  int pos = 0;

//Setup shit for Piezo
  pinMode(buzzer, OUTPUT);

}

void loop() {


//Loop shit for Camera


//Loop shit for Servo
for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}
for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(86);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}
for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(94);              
    delay(2);}
for (pos = 360; pos >= 0; pos -= 1) { 
    myservo.write(93);              
    delay(5);}


//Loop shit for Piezo

if (COM5=="high")
  tone(buzzer, 3750); 



}
