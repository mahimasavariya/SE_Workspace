#include<stdio.h>
#include<conio.h>

struct book 
{
    int id;
    char name[50];
    char author[50];
    int issued; 
};

void main()
{
    struct book b[100];
    int count=0,i,id;
    int choice;

    while(1)
    {

        printf("\n --- Library Management Systm --- ");
        printf("\n 1. Add Book ");
        printf("\n 2. Displays Book ");
        printf("\n 3. Issue Book ");
        printf("\n 4. Return Book ");
        printf("\n 5. Exit");
        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);


        switch(choice)    
        {
            case 1:
                printf("\n Enter Book ID : ");
                scanf("%d", &b[count].id);

                printf("\n Enter Book Name : ");
                scanf(" %[^\n]", b[count].name);

                printf("\n Enter Author Name : ");
                scanf(" %[^\n]" , b[count].author);

                b[count].issued = 0;
                count++;

                printf("\n Book Added Successfully");
                break;

            case 2 : 
                if(count == 0)
                {
                    printf("\n No Books Available");
                }

                else
                {
                    printf("\nID\tName\t\tAuthor\t\tStatus\n");
                    for(i=0; i<count; i++)
                    {
                        printf("%d\t%s\t\t%s\t\t%s\n",
                                b[i].id,
                                b[i].name,
                                b[i].author,
                                b[i].issued ? "Issued" : "Available");
                    }
                }

                break;

            case 3: 
                printf("Enter Book ID to Issue : ");
                scanf("%d", &id);

                for(i=0; i<count; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("\n Book issued successfully.");
                        }

                        else
                        {
                            printf("\n Book is already issued.");
                        }
                        break;
                    }
                }

                if(i == count)
                    printf("\n Book not found");
                break;

                
            case 4:
                printf("\n Enter Book ID to Return :");
                scanf("%d", &id);

                for(i=0; i<count; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued == 1)
                        {
                            b[i].issued = 0;
                            printf("\n Book Return Successfully.");
                        }
                        else
                        { 
                            printf("\n Book is already available.");
                        }
                        break;
                    }
                }

                if(i == count)
                    printf("\n Book not found.");
                break;

            case 5: 
                printf("\n Exiting Program...");
                return;

            default: 
                printf("\n Invalid Choice!");

        }

    }

    getch();
}