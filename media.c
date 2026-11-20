
#include <stdio.h>

int main() {

    // PRIMEIRA MEDIA
    float nota1a;
    float nota2a;
    float somaa;
    float mediaa;

    nota1a = 8.0;
    nota2a = 7.5;

    somaa = nota1a + nota2a;
    mediaa = somaa / 2.0;

    printf("Media A: %.2f\n", mediaa);


    // SEGUNDA MEDIA
    float nota1b;
    float nota2b;
    float somab;
    float mediab;

    nota1b = 9.0;
    nota2b = 6.0;

    somab = nota1b + nota2b;
    mediab = somab / 2.0;

    printf("Media B: %.2f\n", mediab);

    return 0;
}