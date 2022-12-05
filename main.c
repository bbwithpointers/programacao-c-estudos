#include <stdio.h>


// Prototipo de funções

void linhas();


int main() {
    linhas();
    printf("\nMenu principal do programa\n\n");
    linhas();
    printf("\nMenu principal do programa 2\n\n");
}

void linhas() {
    for(int i =0;i<3;i++){
        for(int j=0;j<30;j++)
            putchar('#');
        putchar('\n');
    }
}