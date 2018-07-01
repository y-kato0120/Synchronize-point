#include<stdio.h>
#include<stdlib.h>

int main(){
    int birth,birth2,sum,ans;

    printf("Input your birthday\n");
    printf("ex:1965-8-5==19650815>>");
    scanf("%d",&birth);

    printf("Input your partner's birthday>>");
    scanf("%d",&birth2);

    sum=birth+birth2;
    sum/=256;/*キリがいいので*/
    srand(sum);
    ans=rand()%100;/*判定厳しめ*/
    /*生年月日が一緒だと変わらないところがミソ*/

    printf("Your Synchronize point is %d%%\n",ans);
}