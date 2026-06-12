    #include<stdio.h>
    int main(){
        int a=1,b=1,n,sum=0;
        printf("Enter the nth term for fibonacci series generation: ");
        scanf("%d",&n);

        printf("\n%d\t%d",a,b);
        for(int i=n;i>2;i--){
            sum=a+b;
            printf("\t%d",sum);
            b=a;
            a=sum;
        }
        return 0;
    }