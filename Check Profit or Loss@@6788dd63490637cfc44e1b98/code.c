#include <stdio.h>
int main ()
{
int cost_price,selling_price;
scanf("%d", &cost_price);
scanf("%d", &selling_price);
if(cost_price < selling_price) {
printf("Profit");
}
else if(cost_price > selling_price) {
    printf("Loss");
}
else {
    printf("No Profit No Loss");
}
}