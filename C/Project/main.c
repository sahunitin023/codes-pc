#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

int i,j,k;

//delay function
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int Randoms(int lower, int upper, int count){
    int i;
    int num;
    for (i = 0; i < count; i++) {
        num = (rand() %(upper - lower + 1)) + lower;
        // printf("%d ", num);
    }
    return num;
}

//--------------------------------------------------------------------
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void welcome()
{

  char a[6]={'a','b','c','d'};
  int i,j,z,k,l;

  for(z=0;z>=0;z++)
  {
  if (kbhit())
    break;
  for(i=0;i<150;i++)
  {
  if (kbhit())
  {
      i=150;
      break;
  }

  for(l=0;l<13;l++)
  {

        if(a[l]=='a')
        {
        k=l*10;
        gotoxy(i,k);
        printf("@@@@@@@@@@  @@@@@@@@         @@      @@@@@@@@@  @@@@@@@@@  @@@@@@@@@@   @@@@@@@@@\n");
        gotoxy(i,k+1);
        printf("@@@@@@@@@@  @@     @@      @@  @@    @@@@@@@@@  @@@@@@@@@  @@@@@@@@@@  @@@@@@@@@\n");
        gotoxy(i,k+2);
        printf("    @@      @@      @@    @@    @@   @@         @@             @@      @@\n");
        gotoxy(i,k+3);
        printf("    @@      @@     @@    @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+4);
        printf("    @@      @@@@@@@@     @@@@@@@@@@  @@@@@@@@   @@@@@@@@       @@      @@\n");
        gotoxy(i,k+5);
        printf("    @@      @@ @@        @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+6);
        printf("    @@      @@   @@      @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+7);
        printf("    @@      @@     @@    @@      @@  @@         @@         @@@@@@@@@@  @@@@@@@@@\n");
        gotoxy(i,k+8);
        printf("    @@      @@       @@  @@      @@  @@         @@         @@@@@@@@@@   @@@@@@@@@\n");
        }


        if(a[l]=='b')

        {
          k=l*10;
          gotoxy(i,k);
          printf(" @@@@@@@@@  @@@@@@@@@@    @@@@@@@@@   @@         @@      @@      @@\n");
          gotoxy(i,k+1);
          printf("@@@@@@@@@   @@@@@@@@@@   @@@@@@@@@@@  @@@@       @@    @@  @@    @@\n");
          gotoxy(i,k+2);
          printf("@@              @@      @@            @@ @@      @@   @@    @@   @@\n");
          gotoxy(i,k+3);
          printf("@@              @@      @@            @@  @@     @@  @@      @@  @@\n");
          gotoxy(i,k+4);
          printf("@@@@@@@@@@      @@      @@    @@@@@@  @@   @@    @@  @@@@@@@@@@  @@\n");
          gotoxy(i,k+5);
          printf("        @@      @@      @@    @@@@@@  @@    @@   @@  @@      @@  @@\n");
          gotoxy(i,k+6);
          printf("        @@      @@      @@    @   @@  @@      @@ @@  @@      @@  @@\n");
          gotoxy(i,k+7);
          printf("@@@@@@@@@   @@@@@@@@@@   @@@@@@   @@  @@       @@@@  @@      @@  @@@@@@@@\n");
          gotoxy(i,k+8);
          printf(" @@@@@@@@@  @@@@@@@@@@    @@@@@   @@  @@         @@  @@      @@  @@@@@@@@\n");
        }

        if(a[l]=='c')

        {
          k=l*10;
          gotoxy(i,k);
          printf(" @@@@@@@@@  @@@@@@@@@@  @@            @@  @@         @@  @@            @@      @@@@@@@@@@  @@@@@@@@@@    @@@@@@@@@    @@         @@\n");
          gotoxy(i,k+1);
          printf("@@@@@@@@@   @@@@@@@@@@  @@@@        @@@@  @@         @@  @@          @@  @@    @@@@@@@@@@  @@@@@@@@@@   @@@@@@@@@@@   @@@@       @@\n");
          gotoxy(i,k+2);
          printf("@@              @@      @@ @@      @@ @@  @@         @@  @@         @@    @@       @@          @@      @@         @@  @@ @@      @@\n");
          gotoxy(i,k+3);
          printf("@@              @@      @@  @@    @@  @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@  @@     @@\n");
          gotoxy(i,k+4);
          printf("@@@@@@@@@@      @@      @@   @@  @@   @@  @@         @@  @@        @@@@@@@@@@      @@          @@      @@         @@  @@   @@    @@\n");
          gotoxy(i,k+5);
          printf("        @@      @@      @@    @@@@    @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@    @@   @@\n");
          gotoxy(i,k+6);
          printf("        @@      @@      @@            @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@      @@ @@\n");
          gotoxy(i,k+7);
          printf("@@@@@@@@@   @@@@@@@@@@  @@            @@   @@@@@@@@@@@   @@@@@@@@  @@      @@      @@      @@@@@@@@@@   @@@@@@@@@@@   @@       @@@@\n");
          gotoxy(i,k+8);
          printf(" @@@@@@@@@  @@@@@@@@@@  @@            @@    @@@@@@@@@    @@@@@@@@  @@      @@      @@      @@@@@@@@@@    @@@@@@@@@    @@         @@\n");
        }

        if(a[l]=='d')

        {
          printf("\n\n\n\n\n\n\n\n\n\n                                                                                          PRESS ENTER TO CONTINUE\n");
        }


  }

  system("CLS");

  }

}
}

// void music()
// {
//     PlaySound(TEXT("C:\\Users\\Ayush Raj\\Downloads\\Music\\music.wav"),NULL,SND_ASYNC);
// }





//Till here all above initialized functions are used in welcome screen
//---------------------------------------------------------------------------------------------------

//declaring the structure
struct lane
    {
        char straight[10];
        char right[10];
    }pairs[4];
typedef struct lane way;

void func1()
{
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are active
    strcpy((*(ptr)).right," GREEN  ");

    //route no. 2 & 6 are at inactive mode
    strcpy((*(ptr+1)).straight,"RED   ");

    //route no. 3 & 7 are at inactive mode
    strcpy((*(ptr+2)).right,"RED   ");

    strcpy((*(ptr+3)).straight,"  YELLOW");

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s|   %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8%s -->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--%s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}

void func2()
{
    //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5
    strcpy((*(ptr)).right,"YELLOW  ");

    //route no. 2 & 6 are active
    strcpy((*(ptr+1)).straight," GREEN  ");

    //route no. 3 & 7 are inactive
    strcpy((*(ptr+2)).right,"RED   ");

    //route no. 4 & 8.are inactive
    strcpy((*(ptr+3)).straight,"RED   ");

    //calling the printing function
    //with arguments as values inside pairs

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s| %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8   %s-->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--  %s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   | %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}

void func3()
{
    //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are inactive
    strcpy((*(ptr)).right,"RED   ");

    //route no 2 & 6
    strcpy((*(ptr+1)).straight,"YELLOW  ");

    //route no. 3 & 7 are active
    strcpy((*(ptr+2)).right," GREEN  ");

    //route no. 4 & 8 are inactive
    strcpy((*(ptr+3)).straight,"RED   ");

    //calling the printing function
    //with arguments as values inside pairs

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *    %s|  %s |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8   %s-->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3 %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__ %s 7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--  %s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |  %s |    %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}

void func4()
{
   //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are inactive
    strcpy((*(ptr)).right,"RED   ");

    //route no. 2 & 6 are inactive
    strcpy((*(ptr+1)).straight,"RED   ");

    //route no. 3 & 7
    strcpy((*(ptr+2)).right,"YELLOW  ");

    //route no. 4 & 8 are active
    strcpy((*(ptr+3)).straight," GREEN  ");

   //calling the printing function
   //with arguments as values inside pairs

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *    %s|    %s |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8 %s-->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3 %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--  %s4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |    %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}
void afun1(){
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are active
    strcpy((*(ptr)).right," GREEN  ");

    //route no. 2 & 6 are at inactive mode
    strcpy((*(ptr+1)).straight,"RED   ");

    //route no. 3 & 7 are at inactive mode
    strcpy((*(ptr+2)).right,"RED   ");
    //route no. 4 & 8 are at inactive mode
    strcpy((*(ptr+3)).straight,"  RED");

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s|   %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8%s -->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--%s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}
void afun2(){
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are active
    strcpy((*(ptr)).right," RED  ");

    //route no. 2 & 6 are at inactive mode
    strcpy((*(ptr+1)).straight,"GREEN   ");

    //route no. 3 & 7 are at inactive mode
    strcpy((*(ptr+2)).right,"RED   ");
    //route no. 4 & 8 are at inactive mode
    strcpy((*(ptr+3)).straight,"  RED");

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s|   %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8%s -->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--%s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}
void afun3(){
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are active
    strcpy((*(ptr)).right,"RED   ");

    //route no. 2 & 6 are at inactive mode
    strcpy((*(ptr+1)).straight,"RED   ");

    //route no. 3 & 7 are at inactive mode
    strcpy((*(ptr+2)).right,"GREEN  ");
    //route no. 4 & 8 are at inactive mode
    strcpy((*(ptr+3)).straight,"  RED");

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s|   %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8%s -->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--%s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}
void afun4(){
    way pairs[4];
    way *ptr=pairs;

    //route no. 1 & 5 are active
    strcpy((*(ptr)).right," RED    ");

    //route no. 2 & 6 are at inactive mode
    strcpy((*(ptr+1)).straight,"RED   ");

    //route no. 3 & 7 are at inactive mode
    strcpy((*(ptr+2)).right,"RED   ");
    //route no. 4 & 8 are at inactive mode
    strcpy((*(ptr+3)).straight,"  GREEN");

printf("************************************************************************************************************************************************************************\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *    D     |     6     |    7     *    5     |     2     |    C     *                                                 *\n");
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *  %s|   %s  |  GREEN   *                                                 *\n",(*ptr).right,(*(ptr+1)).straight);
printf("*                                                *          |           |          *          |           |          *                                                 *\n");
printf("*                                                *          |           |          *     |    |     |     |    |     *                                                 *\n");
printf("**************************************************          |           |          *   <--    |     V     |    -->   ***************************************************\n");
printf("*                                                ^                                                                                                                     *\n");
printf("*                                    D  GREEN  __|                                                                                C                                    *\n");
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    8%s -->                                                                                8                                    *\n",(*(ptr+3)).straight);
printf("*----------------------------------------------__-                                                                   --------------------------------------------------*\n");
printf("*                                    3   %s  |                                                                                                                     *\n",(*(ptr+2)).right);
printf("*                                                V                                                                                1                                    *\n");
printf("**************************************************                                                                   ***************************************************\n");
printf("*                                    5                                                                               ^                                                 *\n");
printf("*                                                                                                                    |__  %s  7                                    *\n",(*(ptr+2)).right);
printf("*-------------------------------------------------                                                                   --------------------------------------------------*\n");
printf("*                                                                                                                                                                      *\n");
printf("*                                    4                                                                               <--%s  4                                    *\n",(*(ptr+3)).straight);
printf("*-------------------------------------------------                                                                   --__----------------------------------------------*\n");
printf("*                                                                                                                     |                                                *\n");
printf("*                                    A                                                                                V   GREEN   B                                    *\n");
printf("**************************************************   <--    |     ^     |    -->   *          |           |           **************************************************\n");
printf("*                                                *     |    |     |     |    |     *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *  GREEN   |   %s  |  %s*          |           |           *                                                *\n",(*(ptr+1)).straight,(*ptr).right);
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *    A     |     6     |    1     *    3     |     2     |     B     *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("*                                                *          |           |          *          |           |           *                                                *\n");
printf("************************************************************************************************************************************************************************\n");

}
void callAmbulence(){

           int a=Randoms(1,8,1);
           if(a==1||a==5) {
                system("cls");
                afun1();
                delay(10);}
           if(a==2||a==6) {
               system("cls");
                afun2();
                delay(10);}
           if(a==3||a==7) {
               system("cls");
                afun3();
                delay(10);}
           if(a==8||a==4) {
               system("cls");
                afun4();
                delay(10);}
          /* delay(10);
           system("cls");*/
        }






void call()
{
        way pairs[4];
    way *ptr=pairs;

    //ascii value of the delete button on keyboard is 127
    //ascii value of the esc button on keyboard is 27

    char ch;
    while(1){
        func1();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
            else if((int)ch==97){
                callAmbulence();
            }
        }
        delay(10);
        system("cls");

        func2();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
            else if((int)ch==97){
                callAmbulence();
            }
        }
        delay(10);
        system("cls");

        func3();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
            else if((int)ch==97){
                callAmbulence();
            }
        }
        delay(10);
        system("cls");

        func4();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
            else if((int)ch==97){
                callAmbulence();
            }
        }
        delay(10);
        system("cls");
    }
}

//==============================================================================================
int main()
{

    // music();
    welcome();
    getchar();
    delay(1);
    system("cls");
    call();
    system("cls");
    return 0;
}

// char ch;
// while(1){
//     printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
//     if(kbhit){
//         ch=getch();
//         if((int)ch==27) break;
//     }
// }
