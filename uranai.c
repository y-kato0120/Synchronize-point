#include<stdio.h>
#include<stdlib.h>

int main(){
    int birth[2];
    int date, month;
    int sum,ans;

    int i = 0;
    while(i < 2){
        switch(i) {
            case 0:
                printf("Input your birthday\n");
                printf("e.g. : 1965-8-15==19650815 >> ");
                break;
            case 1:
                printf("\n");
                printf("Input your partner's birthday >> ");
        }
        
        scanf("%d", &birth[i]);
        
        date = birth[i] % 100;
        month = ((birth[i] % 10000) - date) / 100;
        
        if (date <= 31 && month <= 12) {
            i++;
        } else {
            printf("\n\nPlease check the input.\n\n");
        }
    }

    sum = birth[0] + birth[1];
    sum/=256;/*キリがいいので*/
    srand(sum);
    ans=rand()%100;/*判定厳しめ*/
    /*生年月日が一緒だと変わらないところがミソ*/

    printf("Your Synchronize point is %d%%\n",ans);
}