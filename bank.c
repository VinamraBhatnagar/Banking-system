#include<stdio.h>
/*Three Account number are-123,456,789 */
void main(){
    int account_no[0];
    for(int i=0;i<3;i++){
        printf("enter your account_no:");
        scanf("%d",&account_no);
        if(account_no[0]==123){
            float balance=0,amount,withdraw;
            for(int j=1;j<=3;j++){
                printf("choose any option:-\n");
                printf("1.Deposit\n");
                printf("2.Balance\n");
                printf("3.withdraw\n");
                int selection;
                printf("enter your selection:");
                scanf("%d",&selection);
                if(selection==1){
                   printf("enter the amount:");
                   scanf("%f",&amount);
                   balance=balance+amount;
                }
                else if(selection==2){
                    printf("Your balance is %f\n",balance);
                }
                else if(selection==3){
                    printf("enter the value:");
                    scanf("%f",&withdraw);
                    if(balance>withdraw){
                        balance=balance-withdraw;
                        printf("Now your balance is %f\n",balance);
                    }
                    else{
                        printf("Insufficient balance\n");
                    }
                }
            }
        }
        else if(account_no[0]==456){
            float balance=0,amount,withdraw;
            for(int j=1;j<=3;j++){
                printf("choose any option:-\n");
                printf("1.Deposit\n");
                printf("2.Balance\n");
                printf("3.withdraw\n");
                int selection;
                printf("enter your selection:");
                scanf("%d",&selection);
                if(selection==1){
                   printf("enter the amount:");
                   scanf("%f",&amount);
                   balance=balance+amount;
                }
                else if(selection==2){
                    printf("Your balance is %f\n",balance);
                }
                else if(selection==3){
                    printf("enter the value:");
                    scanf("%f",&withdraw);
                    if(balance>withdraw){
                        balance=balance-withdraw;
                        printf("Your balance is %f\n",balance);
                    }
                    else{
                        printf("Insufficient balance\n");
                    }
                }
            }
        }
        else if(account_no[0]==789){
            float balance=0,amount,withdraw;
            for(int j=1;j<=3;j++){
                printf("choose any option:-\n");
                printf("1.Deposit\n");
                printf("2.Balance\n");
                printf("3.withdraw\n");
                int selection;
                printf("enter your selection:");
                scanf("%d",&selection);
                if(selection==1){
                   printf("enter the amount:");
                   scanf("%f",&amount);
                   balance=balance+amount;
                }
                else if(selection==2){
                    printf("Now your balance is %f\n",balance);
                }
                else if(selection==3){
                    printf("enter the value:");
                    scanf("%f",&withdraw);
                    if(balance>withdraw){
                        balance=balance-withdraw;
                        printf("Now your balance is %f\n",balance);
                    }
                    else{
                        printf("Insufficient balance\n");
                    }
                }
            }
        }
        else{
            printf("Invalid input\n");
        }
    }
}