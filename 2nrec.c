#include<stdio.h>
int power(int n);
main()
{
    int n,res;
    printf("ENTER THE POWER OF 2 TO BE CALCULATED");
    scanf("%d",&n);
    printf("THE ANSWER IS");
    res=power(n);
    printf("%d",res);


}

int power(int n)
{
        int result;


        if(n==1)
        {
            return 2;

        }
        else
        {
            result= 2*power(n-1);
        }
}