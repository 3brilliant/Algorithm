
/*大衍数列
中国古代文献中，曾记载过“大衍数列”, 主要用于解释中国传统文化中的太极衍生原理。
它的前几项是：0、2、4、8、12、18、24、32、40、50 …
其规律是：对偶数项，是序号平方再除2，奇数项，是序号平方减1再除2。
*/
#include<stdio.h>

int i;

int main(){
    printf("Enter the number of Dayan arrays:\n");
    scanf("%d",&i);
    if (i&1){
        printf("Dayan arrays:%d",(i*i-1)/2);
    }
    else{
        printf("Dayan arrays:%d",i*i/2);
    }
}
