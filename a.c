#include<stdio.h>
#include<windows.h>
int main()
{
    int h, m, s;
    int d = 1000; // we add a delay of 1000 milliseconds and we will use it in function sleep.
    printf("Set time :\n");
    scanf("%d%d%d", &h, &m, &s);
    if(h>24 || m>60 || s>60){
        printf("ERROR !\n");
        exit (0);
    }
    while(1)// In C language any non 0 value is true, therefore this is an infinite loop. 
    {
        s++;
        if (s>59){
            m++;
            s = 0;
        }
        if(m>59){
            h++;
            m = 0;
        }
        if(h>24){
            h = 0;
        }
        printf("CLOCK:  %02d:%02d:%02d", h, m, s);// This writes the clock in the format 00:00:00
        Sleep(d); //This function sleep slows down the while loop so that it looks like a real clock
        system("cls");
    }
    return 0;
}