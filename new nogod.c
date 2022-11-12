#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
    int q=0;
    do{
    int n,i,r,x,y,z,m;
    double taka=100000.00;
    int pass,pass2=1234, p=10;
    while
    (p!=0)
        {
    printf("\nInput the password: ");  scanf("%d",&pass);
    if (pass==pass2)
    {
    printf("\n\n\t\t\tHello! It's an honor to serve you.\n\n\n");
    printf("\n\tYou Have BDT: %.2lf TAKA\n\n",taka);
    printf("1.Send Money\n");
    printf("2.Mobile Recharge\n"); printf("3.Payment\n");
    printf("4.Cash Out\n");
    printf("5.Pay Bill\n");
    printf("6.Check Balance\n");
    printf("7.Exit.\n\n\n");
    scanf("%d",&n);
    if(n==1) { printf("Enter Mobile Number For Send Money:\n");
    scanf("%d",&m); printf("\n\n\nEnter Ammount:\n");
    scanf("%d",&r); taka=taka-r;
    printf("\n\n\nEnter Pin:\n");
    while
    (p!=0)
    {
    scanf("%d",&pass);
    if (pass==pass2)
    {
    printf("\n\nSend Money Successful . :) \n"); printf("Your Current Balance is %.2lf taka.\n",taka); p=0;
    }
    else
    {
    printf("Wrong password, try another");
    }
    printf("\n");
    } }
    if(n==2)
    {
    printf("\n\nEnter Mobile Number For Recharge:\n");
    scanf("%d",&m);
    printf("\n\nEnter Ammount:\n");
    scanf("%d",&r); printf("\n\nEnter Pin:\n");
    while
    (p!=0)
    {
    scanf("%d",&pass);
    if (pass==pass2)
    {
    printf("\n\nRecharge Successful. :) \n"); printf("Your Current Balance is %.2lf taka.\n",taka-r); p=0;
    } else { printf("Wrong password, try another");
    }
    printf("\n");
    } }
    if(n==3) { printf("\n\nEnter Mobile Number For Payment:\n");
    scanf("%d",&m);
    printf("\n\nEnter Ammount:\n");
    scanf("%d",&r);
    printf("\n\nEnter Pin:\n");
    while (p!=0) { scanf("%d",&pass);
    if (pass==pass2)
    {
    printf("\n\nPayment Successful. :) \n"); printf("Your Current Balance is %.2lf taka.\n",taka-r); p=0;
    }
    else
    {
    printf("Wrong password, try another");
    }
    printf("\n");
    } }
    if(n==4)
    {
    printf("\n\nEnter Mobile Number For Cash Out:\n");
    scanf("%d",&m);
    printf("\n\nEnter Ammount:\n"); scanf("%d",&r); printf("\n\nEnter Pin:\n");
    while
    (p!=0)
{
                        scanf("%d",&pass);
                        if (pass==pass2)
                        {
                            printf("\n\nCash Out Successful. :) \n");
                            printf("Your Current Balance is %.2lf taka.\n",taka-r);
                            p=0;
                        }
                        else
                        {
                            printf("Wrong password, try another");
                        }
                        printf("\n");
                    }
                }
                if(n==5)
                {
                    printf("\n\nEnter Bill Number For Pay Bill:\n");
                    scanf("%d",&m);
                    printf("\n\nEnter Ammount:\n");
                    scanf("%d",&r);
                    printf("\n\nEnter Pin:\n");
                    while
                    (p!=0)
                    {
                        scanf("%d",&pass);
                        if (pass==pass2)
                        {
                            printf("\n\nPay Bill Successful. :) \n");
                            printf("Your Current Balance is %.2lf taka.\n",taka-r);
                            p=0;
                        }
                        else
                        {
                            printf("Wrong password, try another");
                        }
                        printf("\n");
                    }
                }
                if(n==6)
                {
                    printf("Enter Password for check your current balace:\n");
                    while (p!=0)
                    {
                        scanf("%d",&pass);
                        if (pass==pass2)
                        {
                            printf("\n\nYour Current Balance is BDT %.2lf Taka \n",taka);
                            p=0;
                        }
                        else
                        {
                            printf("Wrong password, try another");
                        }
                        printf("\n");
                    }
                }
                if(n==7)
                {
                    printf("Press 1 to exit.\n");
                    scanf("%d",&q);
                }
                p=0;
            }
            else
            {
                printf("Wrong password, try again ");
            }
            printf("\n");
        }
    }
    while
    (q==0);
    printf("Made With Proud, By Rohan.\n");
    getch();
}
