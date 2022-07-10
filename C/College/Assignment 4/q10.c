#include <stdio.h>
int main()
{
    int m, p, ch, cs, b;
    float perc;
    printf("Enter your Marks ot of 100\n");
    printf("PHYSICS: ");
    scanf("%d", &p);
    printf("CHEMISTRY: ");
    scanf("%d", &ch);
    printf("MATHS: ");
    scanf("%d", &m);
    printf("COMPUTER: ");
    scanf("%d", &cs);
    printf("BIOLOGY: ");
    scanf("%d", &b);

    perc = (p + ch + cs + m + b) / 5.00;
    printf("Your Percentage is %.2f %%\n", perc);

    if (perc >= 90){
        printf("GRADE A");
    }
    else if (perc >= 80){
        printf("GRADE B");
    }
    else if (perc >= 70){
        printf("GRADE C");
    }
    else if (perc >= 60){
        printf("GRADE D");
    }
    else if (perc >= 40){
        printf("GRADE E");
    }
    else {
        printf("GRADE F");
    }

    return 0;
}
