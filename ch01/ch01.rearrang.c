/*
* File   : ch01/rearange.c
* Author : treenewbee
* Page   : 32
* Date   : 2022-06-09
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(void)
{
    int n_columns;
    int columns[MAX_COLS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];
    /*
    **读取该串列标号
    */
    n_columns = read_column_numbers(columns, MAX_COLS);
    /*
    **读取 处理和打印剩余的输入行
    */
    while (gets(input) != NULL)
    {
        printf("Original input : %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line : %s\n", output);
    }

    system("pause");
    return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;

    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
        num += 1;
    
    if (num % 2 != 0)
    {
        puts("Last column number is not paired");//puts函数会自动在末尾换行 gets函数和puts函数配合使用
        exit(EXIT_FAILURE);
    }
    //丢弃该行中包含最后一个数字的那部分
    while ((ch = getchar()) != EOF && ch != '\n')
        ; //空语句
    return num;
}
void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
    int col; //columns数组的下标
    int output_col; //输出列计数器
    int len; //输入行的长度

    len = strlen(input);
    output_col = 0;

    for (col = 0; col < n_columns; col += 2)
    {
        int nchars = columns[col + 1] - columns[col] + 1;
        if (columns[col] >= len || output_col == MAX_INPUT - 1)
            break;
        if (output_col + nchars > MAX_INPUT - 1)
            nchars = MAX_INPUT - output_col - 1;
        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;//指向下一个要拷入的位置
    }
    output[output_col] = '\0'; //output的最后一个位置加入一个结束符
}