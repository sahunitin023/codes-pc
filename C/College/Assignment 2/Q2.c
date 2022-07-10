/*Ques no. 2*/#include<stdio.h>

int main()

{
    int x=10,y=15,A;
    A= x++ - ++y + ++x - y++ - x++;
    printf("x=%d\ny=%d",x,y);
    return 0;
}
