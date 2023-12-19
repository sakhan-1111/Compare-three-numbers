/*write a code which will compare three number and print highest ,second highest and lowest number*/
#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,c;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number:  ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    if (a>b&&b>c){
        printf ("The biggest number is %f\n",a);
        printf ("The second biggest number is %f\n",b);
        printf ("The smallest number is %f",c);
    }
    else if(b>a&&a>c){
        printf ("The biggest number is %f\n",b);
        printf ("The second biggest number is %f\n",a);
        printf ("The smallest number is %f\n",c);
        }
    if(c>b&&b>a){
        printf ("The biggest number is %f\n",c);
        printf ("The second biggest number is %f\n",b);
        printf ("The smallest number is %f",a);
        }
    if (a>c&&c>b){
        printf ("The biggest number is %f\n",a);
        printf ("The second biggest number is %f\n",c);
        printf ("The smallest number is %f",b);
        }
    if (b>c&&c>a){
        printf ("The biggest number is %f\n",b);
        printf ("The second biggest number is %f\n",c);
        printf ("The smallest number is %f",a);
        }
    if (c>a&&a>b){
        printf ("The biggest number is %f\n",c);
        printf ("The second biggest number is %f\n",a);
        printf ("The smallest number is %f",b);
        }
    return 0;
}
