/*
* File   : ch03/goto.c      *
* Author : Tree new bee     *
* Page   : 60               * 
* Date   : 2022-06-10       *
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
    int i = 10;
    add:
        i += 20;

    if(i == 
    10)
        goto add;
    printf("%d\n",i);

    system("pause");
    return 0;
}