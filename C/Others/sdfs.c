#include <stdio.h>
int main()
{
    int i , n , r=0 , b=0 , g=0 , p=0 , y=0;
    printf("Enter the number of toys:-->>   \n");
    scanf("%d\n",&n);
    char tc[20] ;
    for (i=0 ; i<n ; ++i){
        printf("Enter the colour of the toy (lowercase) :-->>  ");
        scanf("\n");
        scanf("%[^\n]%*s", tc);
        switch ((int)tc) {
            case 114:
                r++;
                break;
            case 98:
                b++;
                break;
            case 103:
                g++;
                break;
            case 112:
                p++;
                break;
            case 121:
                y++;
                break;
            default:
                printf("Error input");
                break;
        }
    }
    printf("\nNo of toys of colour ::: \n");
    printf("Red:-> %d\n",r);
    printf("Red:-> %d\n",b);
    printf("Red:-> %d\n",g);
    printf("Red:-> %d\n",p);
    printf("Red:-> %d\n",y);
    return 0;
}
