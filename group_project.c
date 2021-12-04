#include <stdio.h>
#include <string.h>
#include <time.h>


// input vehicle type, subcategory, model, vehicle no, owner name, contact no

struct vehicle{
    int type;
    int subcategory;
    char model[20];
    char vehicle_no[15];
    char name[20];
    char contact_no[15];
};

struct vehicle user;
int user_counter = 0;

int entry();
int entry_receipt();
int two_wheeler();
int four_wheeler();
int commercial();
int user_Details();
int exiter();
FILE *data;


int main() {
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
        //searcher();
        exiter();
    }
    return 0;
}

int entry() {
    //int type;
    int total=10;
    printf("Select vehicle type\n");
    printf("1. Two wheeler\n");
    printf("2. Four wheeler\n");
    printf("3. Commercial Transport Vehicle: ");
    scanf("%d",&user.type);
    if (user.type==1){
        two_wheeler();
    }
    else if (user.type==2) {
        four_wheeler();
    }
    else if (user.type==3) {
        commercial();
    }
    user_counter+=1;
    //printf("Spaces left = %d",user_counter);
}

int two_wheeler() {
    int sub;
    printf("\n Cost is Rs. 10/hr Each\n");
    printf("Select sub-category\n");
    printf("1. Cylce\n");
    printf("2. Scooty\n");
    printf("3. Bike: ");
    scanf("%d",&sub);
    user_Details();
    printf("Here is your Entry receipt...\n\n");
    entry_receipt();
}

int four_wheeler() {
    int sub;
    printf("\n Cost is Rs. 30/hr Each\n");
    printf("Select sub-category\n");
    printf("1. Mirco\n");
    printf("2. Sedan\n");
    printf("3. SUV: ");
    scanf("%d",&sub);
    user_Details();
    printf("Here is your Entry receipt...\n\n");
    entry_receipt();
}

int commercial() {
    int sub;
    printf("\n Cost is Rs. 15/hr Each\n");
    printf("Select sub-category\n");
    printf("1. Truck\n");
    printf("2. Bus\n");
    printf("3. Tempo: ");
    scanf("%d",&sub);
    user_Details();
    printf("Here is your Entry receipt...\n\n");
    entry_receipt();
}

int user_Details() {
    data = fopen("D:\\Temp. Folder\\Programming\\C\\ok\\Entry_details.txt","a");
    printf("\nEnter name: ");
    scanf("%s",user.name);
    printf("Enter contact no: ");
    scanf("%s",user.contact_no);
    printf("Enter vehicle no: ");
    scanf("%s",user.vehicle_no);
    printf("Enter model: ");
    scanf("%s",user.model);
    /*
    fprintf(data,"Owner name: %s\n",user.name);
    fprintf(data,"Owner contact no: %s\n",user.contact_no);
    fprintf(data,"Vehicle no: %s\n",user.vehicle_no);
    fprintf(data,"Vehicle model: %s\n",user.model);
    */
    fwrite (&user, sizeof(struct vehicle), 1, data);
}

int entry_receipt() {
    time_t t;
    time(&t);
    printf("***************************************\n");
    printf("%s\n", ctime(&t));
    printf("Owner name: %s\n",user.name);
    printf("Owner contact no: %s\n",user.contact_no);
    printf("Vehicle no: %s\n",user.vehicle_no);
    printf("Vehicle model: %s\n",user.model);
    printf("***************************************");
}

int searcher(char vehicle[100]) {
    data = fopen("D:\\Temp. Folder\\Programming\\C\\ok\\Entry_details.txt","r");
    //fscanf(data,"%s",&num);
    //printf("the value is %s",num);
    while(fread(&user, sizeof(struct vehicle), 1, data)) {
        if (strcmp(user.vehicle_no,vehicle)==0) {
            printf("%s\n%s\n%s\n%s\n", user.model, user.vehicle_no, user.name, user.contact_no);
            break;
        }
    }
}

int exiter() {
    char vehicle[100];
    printf("Enter vehicle no: ");
    scanf("%s",vehicle);
    searcher(vehicle);
}
