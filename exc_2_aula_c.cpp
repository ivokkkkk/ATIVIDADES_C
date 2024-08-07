#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "portuguese");

int a,b;
float media;

printf("informe dois numeros inteiros:");
scanf("%d", &a);
  scanf("%d", &b);
 
  media = (a + b)/2;

printf("a media de %d e %d é %f", a, b, media);
}


