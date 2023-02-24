#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);

int selected = 0;
int entered = -1;


void setup() {

  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  display.clearDisplay();
  
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(25, 15);
  display.println("315Hz");
  display.setTextSize(1);
  display.setCursor(85, 22);
  display.print("BOX");
  display.setTextSize(1);
  display.setCursor(25, 35);
  display.println("by CiferTech");
  
  display.display();
  delay(3000);
}

void loop() {

  displaymenu();
  
}


void displaymenu(void) {

  int down =  digitalRead(5);
  int up =    digitalRead(6);
  int enter = digitalRead(7);
  
  if(up == LOW && down == LOW){
    entered = -1;
    noTone(8);
  };

  if (up == LOW)
  {
    selected = selected + 1;
    if (selected > 3)
      selected = 3;
    delay(200);
  };
  
  if (down == LOW)
  {
    selected = selected - 1;
    if (selected < 0)
      selected = 0;
    delay(200);
  };
  
  if (enter == LOW) {
    entered = selected;
  };

  const char *options[4] = {
    " 6700  ",
    " 10000 ",
    " 1000  ",
    " Random"
  };
  
  if (entered == -2) {
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(37, 10);
    display.println("UP + DOWN");
    display.setCursor(25, 20);
    display.println("click to stop");
    display.setCursor(45, 42);
    display.println("Done");
    display.display();
  }
  
  if (entered == -1) {
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("Menu");
    display.setCursor(0, 20);
    
    for (int i = 0; i < 4; i++) {    
      if (i == selected) {
        display.setTextSize(1);
        display.print(">");
        display.println(options[i]);
        
      } else if (i != selected) {
        display.setTextSize(1);
        display.setTextColor(SSD1306_WHITE);
        display.println(options[i]);
      }
    }
    
  } else if (entered == 0) {
    
    entered = -2;  
    
  for (int i = 0; i <= 100; i++) {

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("frequency");
    display.setCursor(102, 0);
    display.println("6700");

    display.setCursor(0, 10);
    display.println("cycle");
    display.setCursor(120, 10);
    display.println("0");
    
    display.setCursor(0, 25);
    display.println("progress");
    display.setCursor(110, 25);
    display.print(i);
    display.println("%");
    
    display.drawRect(10, 40, 100, 15, WHITE);
    display.fillRect(12, 42, i * 0.95, 11, WHITE);
    
    display.display();
    delay(50);
 
  }   
    tone(8, 6700);  
    display.display();

  
  } else if (entered == 1) {
    
    entered = -2;  
    
  for (int i = 0; i <= 100; i++) {

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("frequency");
    display.setCursor(98, 0);
    display.println("10000");

    display.setCursor(0, 10);
    display.println("cycle");
    display.setCursor(120, 10);
    display.println("0");
    
    display.setCursor(0, 25);
    display.println("progress");
    display.setCursor(110, 25);
    display.print(i);
    display.println("%");
    
    display.drawRect(10, 40, 100, 15, WHITE);
    display.fillRect(12, 42, i * 0.95, 11, WHITE);
    
    display.display();
    delay(50);
 
  }
    tone(8, 10000);   
    display.display();
    
     
  } else if (entered == 2) {
    
    entered = -2;  
    
  for (int i = 0; i <= 100; i++) {

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("frequency");
    display.setCursor(102, 0);
    display.println("1000");

    display.setCursor(0, 10);
    display.println("cycle");
    display.setCursor(120, 10);
    display.println("0");
    
    display.setCursor(0, 25);
    display.println("progress");
    display.setCursor(110, 25);
    display.print(i);
    display.println("%");
    
    display.drawRect(10, 40, 100, 15, WHITE);
    display.fillRect(12, 42, i * 0.95, 11, WHITE);
    
    display.display();
    delay(50);
 
  }
    tone(8, 1000); 
    display.display();
    
 
} else if (entered == 3) {
    
    entered = -2;  
    
  for (int i = 0; i <= 100; i++) {
  
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("frequency");
    display.setCursor(92, 0);
    display.println("random");

    display.setCursor(0, 10);
    display.println("cycle");
    display.setCursor(120, 10);
    display.println("1");
    
    display.setCursor(0, 25);
    display.println("progress");
    display.setCursor(110, 25);
    display.print(i);
    display.println("%");
    
    display.drawRect(10, 40, 100, 15, WHITE);
    display.fillRect(12, 42, i * 0.95, 11, WHITE);
    
    display.display();
    delay(50);
 
  }
    int rn = random(0, 10000);
    int rnc = random(0, 9999);
    tone(8, rn, rnc);
  } 

  display.display();
 
}
