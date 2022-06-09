/*
* File   : ch03/storage.c    *
* Author : Tree new bee     *
* Page   : 44               * 
* Date   : 2022-06-10       *
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int index = 1;
    while (index<=3)
    {
        int a = 10;
        static int b = 10; //静态变量在程序运行前进行一次初始化，之后就不会再初始化了
        a++;
        b++;
        printf("index = %d , a = %d , b = %d \n", index, a, b);
        index++;
    }

    system("pause");
    return 0;
}

