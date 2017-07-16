/*
 * topic:
 *  recursive function with a sum of 1 to n
 * programmer:
 *  cuiyong
 * time:
 *  2017/7/16 11:50am
 */ 
#include <stdio.h>

int sum(int);

int main()
{
    int num,res;
    printf("please input a number:\n");
    scanf("%d", &num);
    res = sum(num);
    printf("sum of 1 to %d is: %d \n", num, res);
    return 0;
}

int sum(int num)
{
    if(num == 1){
        return 1;
    }
    return num+= sum(num-1);
}

