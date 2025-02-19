#include <stdio.h>
int main()
{
int cost price,selling price;
scanf("%d %d",cost price, selling price);
if(cost price < selling price) {
printf("Profit: %d", selling price - cost price);
}
else if(cost price > selling price){
    printf("Loss:%d", cost price - selling price);
}
else {
    printf(No loss);
}
}