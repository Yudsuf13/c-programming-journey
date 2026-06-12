#include<stdio.h>
#include<math.h>
int main()
{
    int red, green, blue;
    printf("Enter the values of three RGB color range 0-255, to be covnerted into CMYK: ");
    scanf("%d%d%d",&red,&green,&blue);

    float c, m, y, k, w;
    
    if(red==0&&green==0&&blue==0){
        printf("CMY values are all 0 and the value of k is 1.");
    }
    else{
        if(red>=green&&red>=blue){
            w=red/255.0;
        }
        else if(green>=red&&green>=blue)
        {
            w=green/255.0;
        }
        else{
            w=blue/255.0;
        }
        c= (w-(red/255.0))/w;
        m= (w-(green/255.0))/w;
        y= (w-(blue/255.0))/w;
        k=1-w;
        printf("CMY values are: c= %f, m= %f, y= %f, and k= %f", c,m,y,k);
    }
    return 0;
    
}