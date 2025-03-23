#include <LiquidCrystal.h>  //header for lcd
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); //led pins connected in arduino

void setup() //setup the program
{
lcd.begin(16, 2);  //led start with 16,2 point
lcd.clear();  // clear all screen

Serial.begin(9600); //this will be used for sending the data with more speed

pinMode(8, INPUT);  //start button
digitalWrite(8, HIGH);  //connect at arduino
pinMode(9, INPUT); //pause button
digitalWrite(9, HIGH); //connect at arduino
}
double i = 0;   //second
double a = millis(); //milli second 1st integer and it will accuratly make 1 second
double c ;  //milli second 2nd integer

void loop()  //program loop
{
lcd.clear();  //first screen is clear
lcd.print("press start");  //then print press start
delay(100);  //delay for pressing the button

if(digitalRead(8) == LOW) //if we press button 9 then this statement start working
{

lcd.clear();  //first clear screen
a = millis();  //milli second first integer and 1 second difference maker
while(digitalRead(9) == HIGH)  //this program start when we press 9 button
{

c = millis();   //milli second 1st integer and it will accuratly make 1 second
i = (c - a) / 1000;  //this is the formula for making the second
lcd.print(i);  // display second
lcd.setCursor(7,0); //at 7,0 positon at led
lcd.print("Sec's");  //print sec's at 7,0 positon at led
lcd.setCursor(0,0);  //at 0,0 postion at led
Serial.println(c);  //print milli second 1st integer
Serial.println(a);  //print milli second second integer
Serial.println(i);  //print second integer
Serial.println("......"); //at 0,0 postion at led
delay(100);  //delay for display seconds
}

if(digitalRead(9) == LOW)  //when  8button is press
{
while(digitalRead(8) == HIGH)   //this program start when we press 8 button
{
lcd.setCursor(0,0);  //at 0,0 positon at led
lcd.print(i);   //print second integer
lcd.setCursor(11,0);  //at 11,0 positon at led
lcd.print(""); //for space print
lcd.setCursor(0,0);  //at 0,0 positon at led
delay(100);  //delay for display seconds
}
}
}
}