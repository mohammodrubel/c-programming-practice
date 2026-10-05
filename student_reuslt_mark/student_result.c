
#include<stdio.h>
    int main()
        {
            int reuslt;

            scanf("%d",&reuslt);

            if(reuslt >= 80){
                printf("you got A+\n");
            }else if(reuslt >= 70){
                printf("you got A\n");
            }else if(reuslt >= 60){
                printf("you got A- \n");
            }else if(reuslt >= 50){
                printf("you got B \n");
            }else if(reuslt >= 40){
                printf("you got C \n");
            }else if(reuslt >= 33){
                printf("you got D");
            }else{
                printf("You result is F");
            }
        }


