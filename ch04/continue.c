/*
* File   : ch03/continue.c  *
* Author : Tree new bee     *
* Page   : 54               * 
* Date   : 2022-06-10       *
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int ind = 0;
     while(ind < 5){
         if(ind % 2 == 1)
            break;
        printf("%d\t",ind);
        ind++;
     }
    printf("break\n");

    ind = 0;
     while(ind < 5){
         if(ind % 2 == 1){
            ind++;
            continue;
         }
        printf("%d\n",ind);
        ind++;
     }
     printf("\n");

    system("pause");
     return 0;
}