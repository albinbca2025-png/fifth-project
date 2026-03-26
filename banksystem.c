#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int choice ;
    int balance = 0 ,amount ;
    char name [100] ;
    long long accountnumber ;
    srand(time(0));
    printf("=== CREATE YOUR ACCOUNT ===\n");
    printf("=== Enjoy next level of Banking with SB BANKS ===\n");
    printf("ENTER NAME \n");
    scanf("%[^\n]s",name);
    accountnumber = (long long) (rand()%9000000000LL)+1000000000LL ;
    printf("ACCOUNT CREATED !! WELCOME %s (Acc NO : %d)\n",name , accountnumber);
while (1)
{
    printf("===MINI BANK MENU===\n");
    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1 : 
        printf("===DEPOSIT===\n");
        printf("Enter amount to deposit : ");
        scanf("%d",&amount);
        balance =+amount ;
        printf("Deposited : %d Balance is: %d\n",amount,balance);
        break ;
        
        case 2 :
        printf("===WITHDRAW===\n");
        printf("Enter amount to withdraw : ");
        scanf("%d",&amount);
        if(amount<=balance)
        {
            balance =-amount ;
            printf("Amount withrawn is : %d. Current Balance is : %d\n",amount,balance);
        }
            else
            {
                printf("INSUFFICIENT BALANCE!! Current balance is : %d\n",balance);
            }
            break ;
            
            case 3 : 
            printf("===CHECK BALANCE===");
            printf("Your Balance is : %d\n",balance);
            break ;
            
            case 4 :
            printf("THANK YOU FOR USING SB BANK ACCOUNT %s\n",name);
            exit(0);
            default :
            printf("INVALID CHOICE !!\n");
            }
        }
        return 0 ;
    }
