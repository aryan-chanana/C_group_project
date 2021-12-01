#include <stdio.h>
#include <string.h>
#include <time.h>


// input vehicle type, subcategory, model, vehicle no, owner contact name, contact no

struct vehicle{
    int type;
    int subcategory;
    char model[20];
    char vehicle_no[10];
    char name[20];
    char contact_no[10];
};

int entry();
int two_wheeler();
int four_wheeler();
int commercial();

int main() {
    time_t t;
    time(&t);
    //printf("%s\n", ctime(&t));
    int start;
    printf("\t\t***WELCOME TO GRAND LEVEL PARKING***\n\n");
    printf("What do you want to do?\n");
    printf("1. Entry\n");
    printf("2. Exit: ");
    scanf("%d",&start);
    printf("\n");
    if (start==1) {
        entry();
    }
    else if (start==2) {
        //exit();
    }
    return 0;
}

int entry() {
    struct vehicle user;
    printf("Select vehicle type\n");
    printf("1. Two wheeler\n");
    printf("2. Four wheeler\n");
    printf("3. Commercial Transport Vehicle:");
    scanf("%d",&user.type);
    if (user.type==1){
        //two_wheeler();
    }
    else if (user.type==2) {
        //four_wheeler();
    }
    else if (user.type==3) {
        //commercial();
    }
}
