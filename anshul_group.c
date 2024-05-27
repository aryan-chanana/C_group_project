#include <stdio.h>
#include <string.h>

struct bill{
    char name[20];
    char mob[10];
    int qty;
    int product;
    int item1;
    int item2;
    int item3;
    int type1;
    int type2;
    int type3;
    int type4;
    int type5;
    int type6;
    int type7;
    int type8;
    int type9;
    int type10;
    int type11;
    int type12;
    int price1;
    //char tax[10];
    int colour;
    int colour1;
    int colour2;
    int colour3;
    int colour4;
    int colour5;
    int colour6;
    int colour7;
    int colour8;
    int colour9;
    int colour10;
    int colour11;
    int colour12;
    int colour13;
    int colour14;
    int colour15;
    int colour16;
    int colour17;
    int colour18;
    int colour19;
    int colour20;
    int colour21;
    int colour22;
    int colour23;
    int colour24;
    int colour25;
    int bestsellers1;
    char coupon[6];
    int mode_of_payment;
};

struct bill user;
float total_cost=0;
int cost_before_tax=0;
float cost_before_discount=0;
float tax_price=0;
float discount_price=0;
float cost=0;
int quantity=0;
int mob_no=1;
int alright=1;
char discount[5];
char select[20];

int input_user() {
    printf("Select: \n");
    printf("1. Men\n");
    printf("2. Women\n");
    printf("3. Kids Section\n");
    printf("4. None: ");
    scanf("%d",&user.product);
    if (user.product==1) {
        printf("Choose item for Men:\n");
        printf("1. Topwear\n");
        printf("2. Bottomwear\n");
        printf("3. Footwear\n");
        printf("4. Watches\n");

        scanf("%d",&user.item1);


        if (user.item1==1){
            printf("Choose type1:\n");
            printf("1. Tshirts\n");
            printf("2. Sweatshirts\n");
            printf("3. Blazers&Suits\n");
            scanf("%d",&user.type1);

            if(user.type1==1){
                printf("Choose colour1:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour1);
                if (user.colour1==1){
                    printf("Cost is Rs.800");
                    cost=800;
                 }
                else if (user.colour1==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour1==3){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour1==4){
                    printf("Cost is Rs.750");
                    cost=750;
                 }
                else if (user.colour1==5){
                    printf("Cost is Rs.600");
                    cost=600;
                 }
                else if (user.colour1==6){
                    printf("Cost is Rs.1500");
                    cost=1500;
                 }
            }
            else if(user.type1==2){
                printf("Choose colour2:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour2);


                if (user.colour2==1){
                    printf("Cost is Rs.700");
                    cost=700;
                }
                else if (user.colour2==2){
                    printf("Cost is Rs.900");
                    cost=900;
                }
                else if (user.colour2==3){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour2==4){
                    printf("Cost is Rs.779");
                    cost=779;
                }
                else if (user.colour2==5){
                    printf("Cost is Rs.650");
                    cost=650;
                }
                else if (user.colour2==6){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
            }
            else if(user.type1==3){
                printf("Choose colour3:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour3);

                if (user.colour3==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour3==2){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour3==3){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour3==4){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour3==5){
                    printf("Cost is Rs.3000");
                    cost=3000;
                }
                else if (user.colour3==6){
                    printf("Cost is Rs.3500");
                    cost=3500;
                }
             }
            }
        else if(user.item1==2){
            printf("Choose type2:\n");
            printf("1. Jeans\n");
            printf("2. Trousers\n");
            printf("3. Trackpants\n");
            scanf("%d",&user.type2);

            if(user.type2==1){
                printf("1. Choose colour4:\n");
                printf("2. Black\n");
                printf("3. Blue\n");
                printf("4. Grey\n");
                scanf("%d",&user.colour4);

                if (user.colour4==1){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour4==2){
                    printf("Cost is Rs.1900");
                    cost=1900;
                }
                else if (user.colour4==3){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
            }
            if(user.type2==2){
                printf("Choose colour5:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%d",&user.colour5);

                if (user.colour5==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour5==2){
                    printf("Cost is Rs.900");
                    cost=900;
                }
                else if (user.colour5==3){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
            }
            if(user.type2==3){
                printf("Choose colour6:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%s",&user.colour6);

                if (user.colour6==1){
                    printf("Cost is Rs.700");
                    cost=700;
                }
                else if (user.colour6==2){
                    printf("Cost is Rs.900");
                    cost=900;
                }
                else if (user.colour6==3){
                    printf("Cost is Rs.500");
                    cost=500;
                }
            }
            }
        else if(user.item1==3){
            printf("Choose type3:\n");
            printf("1. Shoes\n");
            printf("2. Sandals\n");
            printf("3. Flip Flop\n");
            scanf("%d",&user.type3);

            if(user.type3==1){
            printf("Choose colour7:\n");
            printf("1. Black\n");
            printf("2. Blue\n");
            printf("3. Red\n");
            printf("4. White\n");
            scanf("%d",&user.colour7);
                if (user.colour7==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour7==2){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour7==3){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour7==4){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
            }
            else if(user.type3==2){
                printf("Choose colour8:\n");
                printf(". Black\n");
                printf("2. Blue\n");
                printf("3. Red\n");
                printf("4. White\n");
                scanf("%d",&user.colour8);

                if (user.colour8==1){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour8==2){
                    printf("Cost is Rs.900");
                    cost=900;
                }
                else if (user.colour8==3){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour8==4){
                    printf("Cost is Rs.700");
                    cost=700;
                }
            }
            else if(user.type3==3){
                printf("Choose colour9:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Red\n");
                printf("4. White\n");
                scanf("%d",&user.colour9);

                if (user.colour9==1){
                    printf("Cost is Rs.250");
                    cost=250;
                }
                else if (user.colour9==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour9==3){
                    printf("Cost is Rs.300");
                    cost=300;
                }
                else if (user.colour9==4){
                    printf("Cost is Rs.550");
                    cost=550;
                }
            }
        }
        else if(user.item1==4){
            printf("Choose type4:\n");
            printf("1. Watches\n");
            printf("2. SmartWatches&FitnessBands\n");
            scanf("%d",&user.type4);

            if(user.type4=1){
                printf("Cost is Rs.5000");
                cost=5000;
            }
            else if(user.type4=2){
                printf("Cost is Rs.7500");
                cost=7500;
            }
            }
    }
    else if (user.product==2) {
        printf("Choose item for Women:\n");
        printf("1. Westernwear\n");
        printf("2. Ethnic\n");
        printf("3. Footwear\n");
        printf("4. Jwellery\n");

        scanf("%d",&user.item2);

        if(user.item2==1){
            printf("Choose type5:\n");
            printf("1. Dresses\n");
            printf("2. Tops & Tshirts\n");
            printf("3. Jeans & Jeggings\n");
            printf("4. Skirts\n");
            scanf("%d",&user.type5);

            if(user.type5==1){
                printf("Choose colour10:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour10);

                if (user.colour10==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour10==2){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour10==3){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour10==4){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour10==5){
                    printf("Cost is Rs.999");
                    cost=999;
                }
                else if (user.colour10==6){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
            }
            else if(user.type5==2){
                printf("Choose colour11:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour11);

                if (user.colour11==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour11==2){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour11==3){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour11==4){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour11==5){
                    printf("Cost is Rs.3000");
                    cost=3000;
                }
                else if (user.colour11==6){
                    printf("Cost is Rs.3500");
                    cost=3500;
                }
            }
            else if(user.type5==3){
                printf("Choose colour12:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%d",&user.colour12);

                if (user.colour12==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour12==2){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour12==3){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
            }
            else if(user.type5==4){
                printf("Choose colour13:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%d",&user.colour13);

                if (user.colour13==1){
                    printf("Cost is Rs.999");
                    cost=999;
                }
                else if (user.colour13==2){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour13==3){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
            }
        }
        else if(user.item2==2){
            printf("Choose type6:\n");
            printf("1. Kurtis\n");
            printf("2. Ethnic Dresses\n");
            printf("3. Lehnga Cholis\n");
            printf("4. Sarees & Blouses\n");
            scanf("%d",&user.type6);
            if(user.type6==1){
                printf("Choose colour14:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour14);

                if (user.colour14==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour14==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour14==3){
                    printf("Cost is Rs.999");
                    cost=999;
                }
                else if (user.colour14==4){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour14==5){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour14==6){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
            }
            else if(user.type6==2){
                printf("Choose colour15:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour15);

                if (user.colour15==1){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour15==2){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour15==3){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour15==4){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour15==5){
                    printf("Cost is Rs.3000");
                    cost=3000;
                }
                else if (user.colour15==6){
                    printf("Cost is Rs.3500");
                    cost=3500;
                }
            }
            else if(user.type6==3){
                printf("Choose colour16:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour16);

                if (user.colour16==1){
                    printf("Cost is Rs.10000");
                    cost=10000;
                }
                else if (user.colour16==2){
                    printf("Cost is Rs.5500");
                    cost=5500;
                }
                else if (user.colour16==3){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour16==4){
                    printf("Cost is Rs.5000");
                    cost=5000;
                }
                else if (user.colour16==5){
                    printf("Cost is Rs.3500");
                    cost=3500;
                }
                else if (user.colour16==6){
                    printf("Cost is Rs.4500");
                    cost=4500;
                }
            }
            else if(user.type6==4){
                printf("Choose colour17:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour17);

                if (user.colour17==1){
                    printf("Cost is Rs.5000");
                    cost=5000;
                }
                else if (user.colour17==2){
                    printf("Cost is Rs.5500");
                    cost=5500;
                }
                else if (user.colour17==3){
                    printf("Cost is Rs.2500");
                    cost=2500;
                }
                else if (user.colour17==4){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour17==5){
                    printf("Cost is Rs.3500");
                    cost=3500;
                }
                else if (user.colour17==6){
                    printf("Cost is Rs.4500");
                    cost=4500;
                }
        }
        }
        else if(user.item2==3){
            printf("Choose type7:\n");
            printf("1. Heels\n");
            printf("2. Shoes\n");
            printf("3. Flip Flops\n");
            scanf("%d",&user.type7);

            if(user.type7==1){
                printf("Choose bestsellers1:\n");
                printf("1. Pumps\n");
                printf("2. Sandals\n");
                printf("3. Peep Toes\n");
                printf("4. Heeled Boots\n");
                scanf("%d",&user.bestsellers1);

                if (user.bestsellers1==1){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.bestsellers1==2){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.bestsellers1==3){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.bestsellers1==4){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
            }
            else if(user.type7==2){
                printf("Choose colour18:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                printf("6. Smart Pink\n");
                scanf("%d",&user.colour18);

                if (user.colour18==1){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour18==2){
                    printf("Cost is Rs.550");
                    cost=5500;
                }
                else if (user.colour18==3){
                    printf("Cost is Rs.1500");
                    cost=1500;
                }
                else if (user.colour18==4){
                    printf("Cost is Rs.2000");
                    cost=2000;
                }
                else if (user.colour18==5){
                    printf("Cost is Rs.1000");
                    cost=1000;
                }
                else if (user.colour18==6){
                    printf("Cost is Rs.999");
                    cost=999;
                }
            }
            else if(user.type7==3){
                printf("Choose colour19:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                scanf("%d",&user.colour19);

                if (user.colour19==1){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour19==2){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour19==3){
                    printf("Cost is Rs.250");
                    cost=250;
                }
                else if (user.colour19==4){
                    printf("Cost is Rs.200");
                    cost=200;
                }
                else if (user.colour19==5){
                    printf("Cost is Rs.350");
                    cost=350;
                }
            }
        }
        else if(user.item2==4){
            printf("Choose type8:\n");
            printf("1. Earrings\n");
            printf("2. Bangles\n");
            printf("3. Rings\n");
            printf("4. Necklaces & Chains\n");
            scanf("%d",&user.type8);

            if(user.type8==1){
                printf("Cost is RS.200");
                cost=200;
            }
            else if(user.type8==2){
                printf("Cost is Rs.150");
                cost=150;
            }
            else if(user.type8==3){
                printf("Cost is Rs.100");
                cost=100;
            }
              else if(user.type8==4){
                printf("Cost is Rs.499");
                cost=499;
            }
    }
}
    else if (user.product==3) {
        printf("Choose item for Kids:\n");
        printf("1. Boy's Section\n");
        printf("2. Girl's Section\n");
        printf("3. Toys\n");
        scanf("%d",&user.item3);

        if(user.item3==1){
            printf("Choose type9:\n");
            printf("1. Shirts\n");
            printf("2. Jeans&Trousers\n");
            printf("3. Shorts&Capris\n");
            scanf("%d",&user.type9);

            if(user.type9==1){
                printf("Choose colour20:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                scanf("%d",&user.colour20);

                if (user.colour20==1){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour20==2){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour20==3){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour20==4){
                    printf("Cost is Rs.200");
                    cost=200;
                }
                else if (user.colour20==5){
                    printf("Cost is Rs.700");
                    cost=700;
                }
            }
            if(user.type9==2){
                printf("Choose colour21:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Red\n");
                printf("4. White\n");
                scanf("%d",&user.colour9);

                if (user.colour21==1){
                    printf("Cost is Rs.550");
                    cost=250;
                }
                else if (user.colour21==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour21==3){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour21==4){
                    printf("Cost is Rs.950");
                    cost=950;
                }
            }
            if(user.type9==3){
                printf("Choose colour22:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%d",&user.colour9);

                if (user.colour22==1){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour22==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour22==3){
                    printf("Cost is Rs.550");
                    cost=550;
                }
            }
        }
        if(user.item3==2){
            printf("Choose type10:\n");
            printf("1. Dresses,Frocks&Jumpsuits\n");
            printf("2. Skirts&Shorts\n");
            printf("3. Clothing Sets\n");
            scanf("%d",&user.type10);

            if(user.type10==1){
                printf("Choose colour23:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                scanf("%d",&user.colour23);

                if (user.colour23==1){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour23==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour23==3){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour23==4){
                    printf("Cost is Rs.900");
                    cost=900;
                }
                else if (user.colour23==5){
                    printf("Cost is Rs.700");
                    cost=700;
                }
            }
            if(user.type10==2){
                printf("Choose colour24:\n");
                printf("1. Black\n");
                printf("2. Blue\n");
                printf("3. Grey\n");
                scanf("%s",&user.colour24);

                if (user.colour24==1){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour24==2){
                    printf("Cost is Rs.700");
                    cost=700;
                }
                else if (user.colour24==3){
                    printf("Cost is Rs.500");
                    cost=500;
                }
        }
            if(user.type10==3){
                printf("Choose colour25:\n");
                printf("1. Red\n");
                printf("2. Yellow\n");
                printf("3. Black\n");
                printf("4. Blue\n");
                printf("5. Green\n");
                scanf("%d",&user.colour25);

                if (user.colour25==1){
                    printf("Cost is Rs.250");
                    cost=250;
                }
                else if (user.colour25==2){
                    printf("Cost is Rs.500");
                    cost=500;
                }
                else if (user.colour25==3){
                    printf("Cost is Rs.550");
                    cost=550;
                }
                else if (user.colour25==4){
                    printf("Cost is Rs.750");
                    cost=750;
                }
                else if (user.colour25==5){
                    printf("Cost is Rs.700");
                    cost=700;
                }
            }
        }
        if(user.item3==3){
            printf("Choose type12:\n");
            printf("1. Musical Toys\n");
            printf("2. Soft Toys\n");
            printf("3. Art & Crafts\n");
            printf("4. Dolls & DollHouses\n");
            scanf("%d",&user.type12);

            if(user.type12==1){
                printf("Cost is RS.500");
                cost=500;
            }
            else if(user.type12==2){
                printf("Cost is Rs.550");
                cost=550;
            }
            else if(user.type12==3){
                printf("Cost is Rs.250");
                cost=100;
            }
            else if(user.type12==4){
                printf("Cost is Rs.900");
                cost=900;
            }
    }
    }
    if (user.product!=4) {
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
        printf("Cost After discount = Rs %.2f\n",total_cost);
    }
    else if (strcmp(user.coupon,"SAVE20")==0) {
        discount_price=cost_before_discount*0.1;
        total_cost*=0.8;
        printf("Cost After discount = Rs %.2f\n",total_cost);
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
    printf("5. E-Wallet:\n ");
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
    printf("\n\n******************************************************\n");
    printf("\t  SKY HIGH SUPPLIES\n");
    printf("Customer name: %s\n",user.name);
    printf("Mobile no: %s\n",user.mob);
    printf("Quantity purchased: %d\n",quantity);
    printf("Mode of payment: %s\n",select);
    printf("Total cost before discount: Rs. %.2f\n",cost_before_discount);
    printf("Discount applied: Rs %.2f\n",discount_price);
    printf("Total cost after discount: Rs %.2f\n",total_cost);
    printf("******************************************************\n");
}


int main() {
    printf("\t\tWELCOME TO THE SKY HIGH SUPPLIES!!!!\n\n");
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
    user.product=0;
    while (user.product!=4) {
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
