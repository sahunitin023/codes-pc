#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[1000];
    fgets(a, 1000, stdin);
    int n=strlen(a),cont=0;
    for (int i=48; i<58; i++) {
        for (int j=0;j<n ;j++) {
            if (a[j]==(char)i) {
                cont++;
            }
        }
        printf("%d ", cont);
        cont=0;
    }
    return 0;
}
