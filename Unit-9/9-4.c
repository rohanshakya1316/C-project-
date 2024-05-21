// Ask bike name and display its cost by reading the information of 
// bike from a data file that includes name, lot number, and cost.
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct info_bike
// {
//     char name[50];
//     int lot_num;
//     float cost;
// };

// void main()
// {
//     struct info_bike bike[20];
//     FILE *fp;
//     char search_bike[50];
//     int i = 0;
//     fp = fopen("info_bikes.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Error opening the file.");
//         exit(1);
//     }
//     while (fscanf(fp, "%s, %d, %f", bike[i].name, &bike[i].lot_num, &bike[i].cost) != EOF)
//     {
//        i++;
//     }
//     printf("Enter the name of bike under Bajaj Company: ");
//     fgets(search_bike, sizeof(search_bike), stdin);
//     for (i = 0; i < 20; i++)
//     {
//         if ((strcmpi(bike[i].name, search_bike)) == 0)
//         {
//         printf("The cost of %s bike is %f.\n", search_bike, bike[i].cost);
//         }
//     }
//     if (i == 20)
//     {
//         printf("Information of bike not found.");
//     }
//     fclose(fp);
// }


// #include <stdio.h>
// #include <string.h>

// #define MAX_BIKES 100
// #define MAX_NAME_LENGTH 50

// typedef struct {
//     char name[MAX_NAME_LENGTH];
//     int lotNumber;
//     float cost;
// } Bike;

// int main() {
//     FILE *file;
//     Bike bikes[MAX_BIKES];
//     int numBikes = 0;
//     char searchName[MAX_NAME_LENGTH];

//     // Open the file for reading
//     file = fopen("info_bikes.txt", "r");

//     // Check if the file opened successfully
//     if (file == NULL) {
//         perror("Error opening file");
//         return 1; // Exit the program with an error code
//     }

//     // Read bike information from the file
//     while (fscanf(file, "%%[^ '32'], %d, %f\n", bikes[numBikes].name, &bikes[numBikes].lotNumber, &bikes[numBikes].cost) == 15) {
//         numBikes++;
//     }

//     // Close the file
//     fclose(file);

//     // Ask the user for a bike name
//     printf("Enter the name of the bike: ");
//     fgets(searchName, sizeof(searchName), stdin);
//     searchName[strcspn(searchName, "\n")] = '\0'; // Remove the newline character

//     // Search for the bike and display its cost
//     int found = 0;
//     for (int i = 0; i < numBikes; i++) {
//         if (strcmp(bikes[i].name, searchName) == 0) {
//             printf("Cost of %s: $%.2f\n", bikes[i].name, bikes[i].cost);
//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("Bike not found.\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bike {
    char name[50];
    int lotNumber;
    float cost;
};

int main() 
{
    FILE * file1 = fopen("bikes_data.txt", "w");

    if (file1 == NULL) {
        fprintf(stderr, "Error opening the file for writing.\n");
        return 1; 
    }

    fprintf(file1, "Honda 101 5000.00\n");
    fprintf(file1, "Yamaha 102 6000.50\n");
    fprintf(file1, "Suzuki 103 5500.75\n");

    fclose(file1);

    printf("Data has been written to the file successfully.\n");

    FILE * file2 = fopen("bikes_data.txt", "r");
        if (file2 == NULL) 
        {
        fprintf(stderr, "Error opening the file.\n");
        return 1; 
        }

    int numBikes;
    fscanf(file2, "%d", &numBikes);

    struct Bike bikes[numBikes];
    for (int i = 0; i < numBikes; i++) {
        fscanf(file2, "%s %d %f", bikes[i].name, &bikes[i].lotNumber, &bikes[i].cost);
    }

    fclose(file2);

    char userBikeName[50];
    printf("Enter the bike name: ");
    scanf("%s", userBikeName);

    int found = 0;
    float cost = 0.0;
    for (int i = 0; i < numBikes; i++) {
        if (strcmp(bikes[i].name, userBikeName) == 0) {
            found = 1;
            cost = bikes[i].cost;
            break;
        }
    }

    if (found) {
        printf("The cost of %s is $%.2f\n", userBikeName, cost);
    } else {
        printf("Bike not found in the data file.\n");
    }

    return 0; 
}

