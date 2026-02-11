#include <stdio.h>

//Establishes beggining cost sets as 0 as well as the amount of items
float cost = 0.0;
int items = 0;
float aftertax;

//Start of code
int main()
{
  float price;
  int quantity;
  //Begin of loop
  while(1)
  {
    //Asks user for price of items, and offers choice of quitting when user is done
    printf("Enter price of items (Enter -1 to quit): ");
    scanf("%f", &price);
    //Establishes exit clause
    if(price == -1.0f)
    {
      break;
    }
    //This asks for the amount of items. It dosent have an exit clause to make no confusion
    printf("Enter quantity of item: ");
    scanf("%d", &quantity);
    cost += price * quantity;
    items += quantity;
    //This establishes 7% indiana sales tax
    aftertax = (cost * 1.07);
  }

  //Prints all of the results
  printf("You bought %d items\n", items);
  printf("Total cost is %.2f\n", cost);
  printf("The cost after tax is %.2f\n", aftertax);
}
