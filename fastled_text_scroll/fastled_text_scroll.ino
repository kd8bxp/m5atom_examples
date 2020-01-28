#include <FastLED.h>
#include <FastLED_GFX.h>

#define LED_PIN         27
#define COLOR_ORDER     GRB
#define CHIPSET         WS2812B
#define BRIGHTNESS      64

#define CANVAS_WIDTH    5
#define CANVAS_HEIGHT   5
#define NUM_LEDS        (CANVAS_WIDTH * CANVAS_HEIGHT)

GFXcanvas matrix(CANVAS_WIDTH, CANVAS_HEIGHT);

#define arr_len( x )  ( sizeof( x ) / sizeof( *x ) ) // Calculation of Array Size;

int pixelPerChar = 5; // Width of Standard Font Characters is 8X6 Pixels
int x = matrix.width(); // Width of the Display
int i = 0; // Counter
int clr = 0; // Counter for Indexing Array of Colors


void setup() {
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(matrix.getBuffer(), NUM_LEDS).setCorrection(TypicalSMD5050);
  FastLED.setBrightness(BRIGHTNESS);
  matrix.setTextWrap(false);
  //matrix.setTextSize(1);
  matrix.setTextColor(CRGB::Blue,CRGB::Black);
  
}

void loop() {
  writeText("HELLO WORLD"); //Print the Message String;
  delay(1000);
  
   }

void writeText(String msg) {
  int arrSize = 5; //arr_len( colors ); // Array of Text Colors;
  int msgSize = (msg.length() * pixelPerChar) + (2 * pixelPerChar); // CACULATE message length;
  int scrollingMax = (msgSize) + matrix.width(); // ADJUST Displacement for message length;

  x = matrix.width(); // RESET Cursor Position and Start Text String at New Position on the Far Right;
  clr = 0; // RESET Color/Repeat Index;

  while (clr <= arrSize) {
    /* Change Color with Each Pass of Complete Message */
    //matrix.setTextColor(colors[clr]);

    //matrix.fillScreen(0); // BLANK the Entire Screen;
    matrix.setCursor(x, 0); // Set Starting Point for Text String;
    matrix.print(msg); // Set the Message String;

    /* SCROLL TEXT FROM RIGHT TO LEFT BY MOVING THE CURSOR POSITION */
    if (--x < -scrollingMax ) {
      /*  ADJUST FOR MESSAGE LENGTH  */
      // Decrement x by One AND Compare New Value of x to -scrollingMax;
     // This Animates (moves) the text by one pixel to the Left;

      x = matrix.width(); // After Scrolling by scrollingMax pixels, RESET Cursor Position and Start String at New Position on the Far Right;
      ++clr; // INCREMENT COLOR/REPEAT LOOP COUNTER AFTER MESSAGE COMPLETED;
    }
    FastLED.show(); // DISPLAY the Text/Image
    delay(100); // SPEED OF SCROLLING or FRAME RATE;
  }
  clr = 0; // Reset Color/Loop Counter;

/* LATHER - RINSE - REPEAT - Why coders have such nice hair */
}
