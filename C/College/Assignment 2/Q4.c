/*Ques no. 4*/#include<stdio.h>

int main()
{
    int x,y,u=2,v=9,a,b,c=3,d=5,O;
    a=!d&&c;
    b=!d||c;
    x=u++ - ++u - u--;
    y=v++ - v-- + --v - v--;
    O=(a&&b)>(x&&y);
    printf("O=%d",O);


}
