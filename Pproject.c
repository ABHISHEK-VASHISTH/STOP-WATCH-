#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int h,m,s;
    printf("SET TIME:-\n");
    scanf("%d%d%d",&h,&m,&s);
    if((h>12) || (m>59) || (s>59)){
        printf("ERROR");
        exit(0);
    }
    while(1){
        s++;
        if(s>59){
        m++;
        s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("CLOCK:-");
        printf("%02d:%02d:%02d",h,m,s);
        system("cls");
    }
    return 0;
    }