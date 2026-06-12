#include<stdio.h>
int main()
{
    float cost_price, selling_price;

    printf("Enter the Cost Price: ");
    scanf("%f",&cost_price);

    printf("\nEnter the Selling Price: ");
    scanf("%f",&selling_price);

    if(selling_price>cost_price)
    {
        printf("Dear Seller! You have made profit. Profit Amount = %f",selling_price-cost_price);
    }
    else if(selling_price<cost_price)
    {
        printf("Dear Seller.... We have incured loss. Loss Amount = %f",cost_price-selling_price);
    }
    else
    {
        printf("Selling Price equals Cost Price....");
    }
    return 0;
}