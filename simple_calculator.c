#include<stdio.h>
#include<math.h>

void main(){
    printf("\n\n                ****************** Welcome to Simple Calculator ******************\n\n");
    int choice,a,b;
    float x,y;
    do
    {
        printf("\n\nEnter one of the following options :\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
        printf("Now enter your choice :  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter first number : ");
            scanf("%d",&a);
            printf("\nEnter second number : ");
            scanf("%d",&b);
            printf("\nResult of operation is : %d",a+b);
            break;
        
        case 2:
            printf("\nEnter first number : ");
            scanf("%d",&a);
            printf("\nEnter second number : ");
            scanf("%d",&b);
            printf("\nResult of operation is : %d\n",a-b);
            break;
        case 3:
            printf("\nEnter first number : ");
            scanf("%f",&x);
            printf("\nEnter second number : ");
            scanf("%f",&y);
            printf("\nResult of operation is : %f\n",x*y);
            break;
        case 4:
            printf("\nEnter first number : ");
            scanf("%f",&x);
            printf("\nEnter second number : ");
            scanf("%f",&y);
            if(b==0) printf("\nDivision by zero error.\n");
            else
            printf("\nResult of operation is : %f\n",x/y);
            break;
        case 5:
            printf("\nEnter first number : ");
            scanf("%d",&a);
            printf("\nEnter second number : ");
            scanf("%d",&b);
            printf("\nResult of operation is : %d\n",a%b);
            break;
        case 6:
            printf("\nEnter base number : ");
            scanf("%d",&a);
            printf("\nEnter exponent number : ");
            scanf("%d",&b);
            printf("\nResult of operation is : %f\n",pow(a,b));
            break;
        case 7:
            break;
        default:
            printf("\nEnter valid choice.\n");
            break;
        }
    } while (choice!=7);
    printf("\n\nExited from Simple Calculaor.\n
    Thanks for using.\n\n");
    
}