#include <stdio.h>
#include <string.h>

struct bill{
    char name[20];
    char mob[10];
    int qty;
    int dish;
    int flavour;
    char coupon[6];
    int mode_of_payment;
};

struct bill user;
float total_cost=0;
int cost_before_discount=0;
float discount_price=0;
int cost=0;
int quantity=0;
int mob_no=1;
int alright=1;
char discount[5];
char select[20];

int input_user() {
    printf("Select dessert: \n");
    printf("1. Gulab Jamun\n");
    printf("2. Gajar Halwa\n");
    printf("3. Rass Malai\n");
    printf("4. Jalebi\n");
    printf("5. Ice Cream\n");
    printf("6. None: ");
    scanf("%d",&user.dish);
    if (user.dish==1) {
        printf("Cost is Rs. 25/pcs");
        cost=25;
    }
    else if (user.dish==2) {
        printf("Cost is Rs. 35/plate");
        cost=35;
    }
    else if (user.dish==3) {
        printf("Cost is Rs. 30/pcs");
        cost=30;
    }
    else if (user.dish==4) {
        printf("Cost is Rs. 5/pcs");
        cost=5;
    }
    else if (user.dish==5) {
        printf("Choose Flavour: \n");
        printf("1. Kulfi\n");
        printf("2. Vanilla\n");
        printf("3. Chocolate\n");
        printf("4. Strawberry\n");
        printf("5. Butter Scotch: ");
        scanf("%d",&user.flavour);

        if (user.flavour==1) {
            printf("Cost is Rs. 15/pcs");
            cost=15;
        }
        else if (user.flavour==2) {
            printf("Cost is Rs. 10/scoop");
            cost=10;
        }
        else if (user.flavour==3) {
            printf("Cost is Rs. 25/scoop");
            cost=25;
        }
        else if (user.flavour==4) {
            printf("Cost is Rs. 20/scoop");
            cost=20;
        }
        else if (user.flavour==5) {
            printf("Cost is Rs. 30/scoop");
            cost=30;
        }
    }
    if (user.dish!=6) {
        printf("\nEnter quantity: ");
        scanf("%d",&user.qty);
        quantity+=user.qty;
        cost_before_discount+=cost*user.qty;
        total_cost=cost_before_discount;
    }
}


int coupon() {
    printf("Enter coupon: ");
    scanf("%s",user.coupon);
    if (strcmp(user.coupon,"SAVE10")==0) {
        discount_price=cost_before_discount*0.1;
        total_cost*=0.9;
        printf("Cost After discount = Rs %.2f",total_cost);
    }
    else if (strcmp(user.coupon,"SAVE20")==0) {
        discount_price=cost_before_discount*0.2;
        total_cost*=0.8;
        printf("Cost After discount = Rs %.2f",total_cost);
    }
    else {
        printf("Invalid Coupon Code\n");
    }
}


int payment() {
    printf("Select mode of payment: \n");
    printf("1. Cash\n");
    printf("2. Credit Card\n");
    printf("3. Debit Card\n");
    printf("4. UPI\n");
    printf("5. E-Wallet: ");
    scanf("%d",&user.mode_of_payment);
    if (user.mode_of_payment==1) {
        strcpy(select,"CASH");
    }
    if (user.mode_of_payment==2) {
        strcpy(select,"Credit Card");
    }
    if (user.mode_of_payment==3) {
        strcpy(select,"Debit Card");
    }
    if (user.mode_of_payment==4) {
        strcpy(select,"UPI");
    }
    if (user.mode_of_payment==5) {
        strcpy(select,"E-Wallet");
    }
}


int receipt() {
    printf("\n\n_______________________________________\n");
    printf("\t  DESERT TRAIL\n");
    printf("Customer name: %s\n",user.name);
    printf("Mobile no: %s\n",user.mob);
    printf("Quantity purchased: %d\n",quantity);
    printf("Mode of payment: %s\n",select);
    printf("Total cost before discount: Rs. %d\n",cost_before_discount);
    printf("Discount applied: Rs %.2f\n",discount_price);
    printf("Total cost after discount: Rs %.2f\n",total_cost);
    printf("_______________________________________\n");
}

int main() {
    printf("\t\tWELCOME TO DESERT TRAIL!\n\n");
    printf("Enter name: ");
    scanf("%s",user.name);
    while (mob_no!=0) {
        printf("Enter mobile no: ");
        scanf("%s",user.mob);
        if (strlen(user.mob)==10) {
            mob_no=0;
        }
        else {
            printf("Invalid mobile no!\n");
        }
    }
    printf("\n");
    user.dish=0;
    while (user.dish!=6) {
        input_user();
        printf("\n");
    }
    printf("Total quantity = %d\n",quantity);
    printf("Total total cost = Rs %.2f\n",total_cost);
    while (alright!=0) {
        printf("Do you have any coupon code Y/N: ");
        scanf("%s",discount);
        if (strcmp(discount,"Y")==0 || strcmp(discount,"y")==0) {
        coupon();
        alright=0;
        }
        else if (strcmp(discount,"N")==0 || strcmp(discount,"n")==0) {
            alright=0;
        }
        else {
            printf("Invalid input!\n");

        }
    }
    payment();
    receipt();
    return 0;
}

