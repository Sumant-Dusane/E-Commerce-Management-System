#include<stdio.h>
#include<conio.h>
struct cloth
{
    int price;
    char name[50];
    char color[10];
    int size;
    int qty;
};
struct cloth c[50];

struct electronic
{
    int price;
    char mod_name[100];
    char color[100];
    int qty;

};
struct electronic e[50];

int main()
{   int i,j,ch,n1,n2;
    clrscr();
    printf("\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t  ||Welcome||\n");
    printf("\t\t\t\t\t\t----------------\n");

    printf("1.Clothes\n");
    printf("2.Electronics\n");
    printf("Enter the choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter number of items:");
        scanf("%d",&n1);
        for(i=0;i<n1;i++)
        {
            printf("Enter the name:");
            scanf("%s",&c[i].name);

            printf("Enter the color:");
            scanf("%s",&c[i].color);

            printf("Enter the price:");
            scanf("%d",&c[i].price);

            printf("Enter the quantity:");
            scanf("%d",&c[i].qty);

            printf("Enter the size:");
            scanf("%d",&c[i].size);
        }

        printf("\t\t   **  Clothes ** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   Size   |  QUANTITY |  PRICE    | Color \n");
    printf("------------------------------------------------------------------\n");
    for ( i = 0; i < n1; i++)    
    printf("%d         %s              %d          %d             %d      %s\n",i+1, c[i].name, c[i].size, c[i].qty, c[i].price, c[i].color);
    printf("\n");
    printf("\n------------------------------------------------------------------\n");

        break;

    case 2:
    printf("Enter number of items:");
        scanf("%d",&n2);
        
        for(i=0;i<n2;i++)
        {
            printf("Enter the name:");
            scanf("%s",&e[i].mod_name);

            printf("Enter the color:");
            scanf("%s",&e[i].color);

            printf("Enter the price:");
            scanf("%d",&e[i].price);

            printf("Enter the quantity:");
            scanf("%d",&e[i].qty);
        }

            printf("\t\t**  Electronics ** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME             |  QUANTITY |  PRICE    | Color \n");
    printf("------------------------------------------------------------------\n");
    for ( i = 0; i < n2; i++)
    {
	printf("%d     %s                    %d             %d        %s",i+1, e[i].mod_name, e[i].qty, e[i].price, e[i].color);
	printf("\n");
    }
      printf("\n------------------------------------------------------------------\n");
       break;
    
    default:
    printf("Invalid option!!!");
        break;
    }

    getch();
}



/*
						----------------
						  ||Welcome||
						----------------
1.Clothes
2.Electronics
Enter the choice:2
Enter number of items:2
Enter the name:tv
Enter the color:blxk
Enter the price:2000
Enter the quantity:3
Enter the name:mobile
Enter the color:white
Enter the price:3000
Enter the quantity:1
		**  Electronics **
------------------------------------------------------------------
S.N.|    NAME             |  QUANTITY |  PRICE    | Color
------------------------------------------------------------------
1     tv                    3             2000        blxk
2     mobile                    1             3000        white

------------------------------------------------------------------


*/