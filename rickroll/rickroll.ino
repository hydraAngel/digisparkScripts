#include "DigiKeyboardPtBr.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.print("https://www.youtube.com/watch?v=xvFZjo5PgG0");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for (;;) {
    
  }
}
