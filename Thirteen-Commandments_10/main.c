//
//  main.c
//  Thirteen-Commandments_10
//
//  Created by HyperLee on 2022/2/16.
//
//  Item 10 不要在 stack 設置過大的變數以避免堆疊溢位(stack overflow)
//  https://www.ptt.cc/bbs/C_and_CPP/M.1465304337.A.9F2.html

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    //int array[10000000]; // 在stack宣告過大陣列, 改用下列方式宣告
    int *array = (int*) malloc( 10000000*sizeof(int) );
    
    for(i = 0; i < 10000000; i++)
    {
        array[i] = i;
        printf("array[%d] %d\n", i, array[i]);
    }
    
    return 0;
}
