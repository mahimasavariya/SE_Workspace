#include <stdio.h>
#include <conio.h>

int main()
{
    int choice, qty;
    int total = 0;
    char more;
    int amount = 0;

    do
    {
        printf("\n ----- Menu ----- \n");
        printf("\n 1. Pizza    Price = 180 rs/pcs");
        printf("\n 2. Burger   Price = 100 rs/pcs");
        printf("\n 3. Dosa     Price = 120 rs/pcs");
        printf("\n 4. Idli     Price = 50 rs/pcs\n");

        printf("\n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n You have ordered Pizza.");
                printf("\n Enter the Quantity : ");
                scanf("%d", &qty);
                amount = qty * 180;
                break;

            case 2:
                printf("\n You have ordered Burger.");
                printf("\n Enter the Quantity : ");
                scanf("%d", &qty);
                amount = qty * 100;
                break;

            case 3:
                printf("\n You have ordered Dosa.");
                printf("\n Enter the Quantity : ");
                scanf("%d", &qty);
                amount = qty * 120;
                break;

            case 4:
                printf("\n You have ordered Idli.");
                printf("\n Enter the Quantity : ");
                scanf("%d", &qty);
                amount = qty * 50;
                break;

            default:
                printf("\n Invalid Choice.");
                amount = 0;
        }

        total = total + amount;

        printf("\n Amount : %d", amount);
        printf("\n Total Amount is : %d", total);

        printf("\n Do you want to place more orders? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    printf("\n Thank you for your order.");
    printf("\n Final Bill Amount = %d", total);

    getch();
    return 0;
}
