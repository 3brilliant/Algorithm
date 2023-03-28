
/*
 *问题描述
 * 一根高筋拉面，中间切一刀，可以得到2根面条
 * 如果对折1次，中间切一刀可以得到3根面条
 * 如果连续对折2次，中间切一刀可以得到5根面条
 * 那么连续对折10次，中间切一刀可以得到多少面条？
 *
 *
 * 问题分析
1. 不对折（对折零次），从中间切一刀，得到 2 根面条， 2 = 2
2、对折一次，从中间切一刀，得到 3 根面条， 3 = 2 + 2^0
3、对折两次，从中间切一刀，得到 5 根面条， 5 = 2 + 2^0 + 2^1
4、对折三次，从中间切一刀，得到 9 根面条， 9 = 2 + 2^0 + 2^1 + 2^2
…
11、对折十次，从中间切一刀，得到 2 + 2^0 + 2^1 + 2^2 + ...... + 2^9 根面条
 *
 * */

#include <stdio.h>

int cut_noodles(int times){
    int result = 1,t= 1;
    for(int i = 0; i<times; i++){
        result += t;
        t = t * 2;
        return result;
    }

}

int main(){
    int result;
    int times;
    printf("Enter the number of times to cut the noodles:");

    scanf("%d",&times);
    result = cut_noodles(times);
    printf("Output Results%d\n",result);
    return 0;

}
