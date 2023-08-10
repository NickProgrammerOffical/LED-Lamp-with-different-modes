#include<Adafruit_NeoPixel.h>
#include <EncButton2.h>

#define DataP 28
#define NumL 30

int chosenMode = 0;

EncButton2<EB_BTN> enc(INPUT, 27);

//Modes: 0 - "White"; 1 - "Rainbow"; 2 - "Beach"; 3 - "Blue"; 4 - "Red"; 5 - "Green";

Adafruit_NeoPixel pixels(NumL, DataP, NEO_GRB + NEO_KHZ800);

void setup() {
 pixels.begin();
 pixels.setBrightness(100);
}

void loop() {

    enc.tick(); 
    if(enc.press()){
      chosenMode += 1;
      if(chosenMode==6){
        chosenMode=0;
      }
    }

    if(chosenMode==0){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(i, 255, 255, 255);
     }
     pixels.show();
    }
    if(chosenMode==1){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(0, 252, 3, 3);
        pixels.setPixelColor(1, 252, 90, 3);
        pixels.setPixelColor(2, 252, 90, 3);
        pixels.setPixelColor(3, 252, 148, 3);
        pixels.setPixelColor(4, 252, 211, 3);
        pixels.setPixelColor(5, 244, 252, 3);
        pixels.setPixelColor(6, 161, 252, 3);
        pixels.setPixelColor(7, 98, 252, 3);
        pixels.setPixelColor(8, 3, 252, 36);
        pixels.setPixelColor(9, 3, 252, 111);
        pixels.setPixelColor(10, 3, 252, 194);
        pixels.setPixelColor(11, 3, 252, 240);
        pixels.setPixelColor(12, 3, 211, 252);
        pixels.setPixelColor(13, 3, 173, 252);
        pixels.setPixelColor(14, 3, 140, 252);
        pixels.setPixelColor(15, 3, 98, 252);
        pixels.setPixelColor(16, 3, 49, 252);
        pixels.setPixelColor(17, 7, 3, 252);
        pixels.setPixelColor(18, 74, 3, 252);
        pixels.setPixelColor(19, 123, 3, 252);
        pixels.setPixelColor(20, 173, 3, 252);
        pixels.setPixelColor(21, 215, 3, 252);
        pixels.setPixelColor(22, 252, 3, 244);
        pixels.setPixelColor(23, 252, 3, 194);
        pixels.setPixelColor(24, 252, 3, 140);
        pixels.setPixelColor(25, 252, 3, 107);
        pixels.setPixelColor(26, 252, 3, 74);
        pixels.setPixelColor(27, 252, 3, 49);
        pixels.setPixelColor(28, 252, 3, 3);
        pixels.setPixelColor(29, 252, 94, 3);
     }
     pixels.show();
    }
    if(chosenMode==2){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(i, 255, 255, 255);
     }
     pixels.show();
    }
    if(chosenMode==3){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(i, 0, 0, 255);
     }
     pixels.show();
    }
    if(chosenMode==4){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(i, 255, 0, 0);
     }
     pixels.show();
    }
    if(chosenMode==5){
     for(int i = 0; i<NumL; i++){
        pixels.setPixelColor(i, 0, 255, 0);
     }
     pixels.show();
    }
    
    
    
   delay(100);
}
