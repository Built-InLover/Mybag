/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2023年07月14日 星期五 15时12分51秒
 ************************************************************************/

#include<stdio.h>
#include"system.h"
#include"test1.h"
#include"test2.h"
int main(){
    test1();
    test2();
    my_printf("Main printf finished!\n");
    return 0;
}
