#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();  //Declaration of the Function//
void deposit();
void withdraw();
void transfer();
void checkdetails();
void last();
int totalamo=1000,age,tr,amo,damo,wamo,tamo,totaldip,totalwit,totaltr;
int accno;
char name[50];
void main()
{
    system("cls");
 printf("Enter Your Name:   ");
 gets(name);
 printf("Enter Account Number:  ");
 scanf("%d",&accno);
 printf("Enter your Age:   ");
 scanf("%d",&age);
while(1)
{
system("cls");
    switch(list())
    {
        case 1:
            deposit();
            totaldip+=damo;
            break;
        case 2:
            withdraw();
            if(amo<=totalamo)
            totalwit+=wamo;
            break;
        case 3:
            transfer();
            if(tr<=totalamo)
                totaltr+=tamo;
            break;
        case 4:
            checkdetails();
            break;
        case 5:
            system("cls");
            last();
            getch();
            exit(0);

        default:
            printf("\nInvalid choice:");
    }//END OF SWITCH STATEMENT//
    getch();
}//END OF WHILE LOOP//
}//END OF MAIN FUNCTION//

int list()//DECLARATION OF USER DEFINE FUNCTION//
{
    int ch;
    printf("                                    ");
    printf("\n1: Deposit Amount");
    printf("\n2: Withdraw Amount");
    printf("\n3: Transfer Amount");
    printf("\n4: Check Amount");
    printf("\n5: Exit  ");
    printf("\n\nEnter your choice :  ");
    scanf("%d",&ch);
    return (ch);
}

void deposit()
{
    printf("Enter the Amount to Deposit :  ");
    scanf("%d",&damo);
    totalamo+=damo;
}

void withdraw()
{
    printf("Enter the Amount to withdraw :  ");
    scanf("%d",&wamo);
    if(wamo<=totalamo)
        totalamo-=wamo;
    else
        printf("Enough Amount");
}

void transfer()
{
    printf("Enter the Amount to Transfer :  ");
    scanf("%d",&tamo);
    if(tr<=totalamo)
        totalamo-=tamo;
    else
        printf("Enough Amount");
}

void checkdetails()
{

    printf("\nTotal Amount   = %d",totalamo);
    printf("\nTotal Deposit  = %d",totaldip);
    printf("\nTotal withdraw = %d",totalwit);
    printf("\nTotal transfer = %d",totaltr);
    printf("                                ");
}
void last()
{
    printf("\n***********************************\n");
    printf("\nName: %s",name);
    printf("\nAccount Number: %d",accno);
    printf("\nAge : %d",age);
    printf("\nTotal Amount   = %d",totalamo);
    printf("\nTotal Deposit  = %d",totaldip);
    printf("\nTotal withdraw = %d",totalwit);
    printf("\nTotal transfer = %d",totaltr);
    printf("\n\n***THANKS***");
}






