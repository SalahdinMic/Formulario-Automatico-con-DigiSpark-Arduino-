#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2000);  // Retardo inicial de 2 segundos

  // Abre el navegador (en este caso, Opera)
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("(Aqui pones tu navegador, puede ser chrome, opera, medge, etc etc etc)");
  DigiKeyboard.delay(100);   
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);  // Retardo después de abrir Opera

  // Abre el formulario de Google con la URL personalizada
  DigiKeyboard.print("(Aqui pon tu url mediante un teclado ingles)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);  // Retardo para cargar el formulario

  // Completa el formulario
  DigiKeyboard.print("\t\t\t(aqui pon: Apellido,Nombre )");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t(aqui pon tu correo sin el @)");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_ALT_RIGHT); // Mantener Alt presionado y presionar 2
  DigiKeyboard.delay(100);  // Pequeña pausa entre pulsaciones
  DigiKeyboard.sendKeyStroke(0, 0);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("gmail.com");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t\t\t\t"); // 4 tabulaciones
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t\t"); // 2 tabulaciones
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t"); // 1 tabulacion
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // No se utiliza en este caso
}
