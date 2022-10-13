#include <stdio.h>
#include <stdlib.h>
int main (void){
    int i;
    printf("  Decimal| Hexadecimal\t| Octal\t\t| Char\n");
    for(i=0; i<=127; i++){
        printf("\t%d|\t%X\t|\t%o\t|\t%c\t\n", i, i, i, i);
    }
    system("pause");
    return 0;
}