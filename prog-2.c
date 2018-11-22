#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#define e 0.001
#define f(x) x*exp(x)-1
#define g(x) 1/(exp(x))
#define df(x) (x+1)*exp(x)


int main()
{
    system("Color 3F");

    int choice;
    float a,b,x0=0,x1=0,f0,f1,fn,fr,Xn,Xr,dfn;

    int n = 0, r = 0, k = 0;

    printf("         Welcome         \n");
    printf("   Solution of Equation");
    printf("\n----------------------------\n");
    while(1)
    {
        printf("\n\n  ************************");
        printf("\n @________MAIN MENU_______@\n");
        printf(" # 1. Bisection           #\n");
        printf(" # 2. Iteration           #\n");
        printf(" # 3. Newton-Raphson's    #\n");
        printf(" # 4. Exit                #\n");
        printf(" **************************\n");
        printf(" Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            system("cls");
            system("Color 2F");

            printf("    @Solution of Bisection Method@\n");
            printf("_________________________________________\n");
            printf("\n Let,f(x) = x*e^(x) - 1\n");

            printf(" Enter the value of a(1) and b(0): ");
            scanf("%f %f",&a,&b);

            do
            {
                f0=f(a);
                f1=f(b);

                Xr=(a+b)/2;

                fn=f(Xr);

                if(a*fn<0)
                {
                    b=Xr;
                }
                else         /// (b*fn<0)
                {
                    a=Xr;
                }
                n++;
                printf("\n No.of %d required root = %f",n,Xr);


            }
            while(fabs(fn)>e);  // fabs is return the absolute value
            printf("\n\n So required solution root is %.3f\n",Xr);
            break;

        case 2:
            system("cls");
            system("Color 6F");

            printf("    @Solution of Iteration Method@\n");
            printf("_________________________________________\n");
            printf("\n Let,f(x) = x*e^(x) - 1\n");
            printf("     g(x) = 1/(e^(x)) ");


            printf("\n Enter the initial value(1): ");
            scanf("%f",&x0);
            do
            {
                if(g(x0)<1)
                {
                    x1=g(x0);
                    Xr=(x1-x0)/x1;
                    x0=x1;
                    r++;
                    printf("\n No.of X%d required root = %f",r,x0);
                }
                else
                {
                    printf("\n Your input is invalid!!!!");
                }
            }
            while(fabs(Xr)>e);
            printf("\n\n So required solution root is %.3f\n",x0);
            break;

        case 3:
            system("cls");
            system("Color 3F");

            printf("    @Solution of Newton-Raphson Method@\n");
            printf("___________________________________________\n");
            printf("\n Let,f(x) = x*e^(x) - 1\n");
            printf("    df(x) = (x+1)*e^(x)");

            printf("\n Enter the initial value(1) : ");
            scanf("%f",&Xn);

            do
            {
                fn = f(Xn);
                fr = f(Xr);
                dfn = df(Xn);
                Xr = Xn-(fn/dfn);
                Xn = Xr;
                k++;
                printf("\n No.of X%d required root = %f",k,Xr);

            }
            while(fabs(fr)>e);
            printf("\n\n So required solution root is %.3f\n",Xr);
            break;

        case 4:
            printf("\n\tTHANK YOU FOR WATCHING ^_^ \n");
            return 0;

        default:
            printf("Enter correct number e.g 1 - 4\n");
            break;

        }
    }

}
