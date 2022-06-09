/*
* File   : ch03/source1.c
* Author : Tree new bee
* Page   : 42
* Date   : 2022-06-10
*/

#include<stdio.h>
// #include "source2.c" 不推荐使用这种方式
int main(void){
    extern int b;
    printf("%d\n",b);
    return 0;
}