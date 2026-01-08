#include <stdio.h>

// Global değişken
int global_variable = 0;

void increment_variables() {
// Statik değişken
  static int static_variable = 0;

  // Yerel değişken
  int local_variable = 0;

  global_variable++;
  static_variable++;
  local_variable++;

  printf("Global variable: %d\n", global_variable);
  printf("Static variable: %d\n", static_variable);
  printf("Local variable: %d\n", local_variable);
}

int main() {
  increment_variables();
  increment_variables();
  increment_variables();

  return 0;
}

/*
Açıklama:

- Global değişken: Programın herhangi bir yerinden erişilebilir. Değeri programın yürütülmesi boyunca korunur.
- Statik değişken: Kapsamı tanımlandığı fonksiyon ile sınırlıdır. Ancak değeri fonksiyon çağrıları arasında korunur.
- Yerel değişken: Kapsamı tanımlandığı fonksiyon ile sınırlıdır. Değeri fonksiyon çağrıları arasında korunmaz.

Bu örnekte, global değişken ve statik değişken artırılır ve değerleri increment_variables() fonksiyonuna yapılan çağrılar arasında korunur. 
Yerel değişken de artırılır, ancak değeri her fonksiyon çağrıldığında 0'a sıfırlanır.

Global ve statik değişken arasındaki fark:
Global değişkenler programın herhangi bir yerinden erişilebilir.
Statik global değişkenler ise yalnızca tanımlandıkları dosya içinde erişilebilir.
Bu durumda, statik global değişkenler ile normal global değişkenler arasındaki temel fark, erişilebilirlik kapsamıdır.

Normal (yerel) değişkenler ile statik değişkenler arasındaki fark ise, normal değişkenlerin değerleri fonksiyon her çağrıldığında kaybolurken, statik değişkenlerin değerleri fonksiyon çağrıları arasında korunur.
*/
