 #include <stdio.h>

struct Home
{
    int room;
    int Year;
    char city[50];
};

main() 
{
    int n;

    printf("Enter the number of houses: ");
    scanf("%d", &n);

    struct Home houses[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for house %d\n", i + 1);

        printf("Enter number of rooms: ");
        scanf("%d", &houses[i].room);

        printf("Enter year of establishment: ");
        scanf("%d", &houses[i].Year);

        printf("Enter city: ");
        scanf("%s", houses[i].city); 
    }

    printf("\n--- House Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nHouse %d details:\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].room);
        printf("Year of establishment: %d\n", houses[i].Year);
        printf("City: %s\n", houses[i].city);
    }

}