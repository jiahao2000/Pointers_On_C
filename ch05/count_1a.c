/*
* File   : ch03/count_1a.c  *
* Author : Tree new bee     *
* Page   : 54               * 
* Date   : 2022-06-10       *
*/

#include<stdio.h>
#include<stdlib.h>

int count_one_bits(unsigned value){
    int ones;
    for(ones = 0;value != 0; value = value >>1){
        ones++;
    }

    return ones;
}