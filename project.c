#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct customerdetails{
    char name[999];
    unsigned long long mobilenumber;
}det;

char *timeslotchoose(int n);
int payableamount();

int n=0;int quantity=0;
unsigned long long amount=0;

int main(){
    int n,m;
    char temp[100];
    printf("\t\t\t\t!WELCOME TO MAIT STORE!                 \n");
    det customer;
    printf("ENTER YOUR NAME:");
    scanf("%s",temp);
    strcpy(customer.name,temp);
    printf("ENTER YOUR MOBILE NUMBER:");
    scanf("%llu",&(customer.mobilenumber));
    FILE *fptr;
    fptr=fopen("customerdetails.txt","w");
    fprintf(fptr,"%s\n",customer.name);
    fprintf(fptr,"%llu\n",customer.mobilenumber);
    fclose(fptr);
    printf("    DISPLAYING THE GROCERY ITEMS WITH THEIR ITEM-CODE       \n");
    printf("--------------------------------------------------------------\n");
    printf(" MILK (@60)-[001]                 SUGAR (@40)-[002]           COFFEE (@100)-[003]  \n");
    printf(" VEGETABLE MASALA (@30)-[004]     BREAD (@45)-[005]           POHA (@70)-[006]     \n");
    printf(" MUSTARD-OIL (@130)-[007]         HAIR OIL (@200)-[111]       TEA (@400)-[101]     \n");
    printf("--------------------------------------------------------------\n");
    amount=payableamount();
    int house_number;
    int street_number;
    char add[1000];
    printf("ENTER YOUR HOUSE NUMBER:");
    scanf("%d",&house_number);
    printf("ENTER YOUR STREET NUMBER:");
    scanf("%d",&street_number);
    printf("ENTER REST OF THE ADDRESS:");
    fflush(stdin);
    fgets(add,1000,stdin);
    int timeslot;
    printf("--------------------------------\n");
    printf("\tSELECT THE TIME SLOT:\n");
    printf("  09:00 A.M  to 12:00 P.M. - (1)\n");
    printf("  12:00 P.M. to 03:00 P.M. - (2)\n");
    printf("  03:00 A.M  to 06:00 P.M. - (3)\n");
    printf("  06:00 A.M  to 09:00 P.M. - (3)\n");
    printf("ENTER:");
    scanf("%d",&timeslot);
    printf("--------------------------------\n");
    char str[999];
    strcpy(str,timeslotchoose(timeslot));
    printf("\n\n\t\t !YOUR BILL!\n");
    printf("----------------------------------------------------\n");
    // printf("PRINTING YOUR BILL:\n");
    printf("CUSTOMER NAME:\t%s\n",customer.name);
    printf("MOBILE NUMBER:\t%llu\n",customer.mobilenumber);
    printf("PAYABLE AMOUNT=\t%llu\n",amount);
    printf("IT WILL BE DELIVERD AT YOUR DOOR-STEP BETWEEN ");
    puts(str);
    printf("At address: %d,%d,",house_number,street_number);
    puts(add);
    printf("-----------------------------------------------------\n");
    return 0;
}    

char *timeslotchoose(int n){
    char *tempstr;
    switch(n){
        case 1:{
            tempstr="09:00 A.M  to 12:00 P.M.";
            return tempstr;
            break;
        }
        case 2:{
            tempstr="12:00 P.M. to 03:00 P.M.";
            return tempstr;
            break;
        }
        case 3:{
            tempstr="03:00 P.M  to 06:00 P.M.";
            return tempstr;
            break;
        }
        case 4:{
            tempstr="06:00 P.M  to 09:00 P.M.";
            return tempstr;
            break;
        }
    }
}

int payableamount(){
    int choose=1;
    while(choose==1){
        printf("ENTER PRODUCT CODE:");
        scanf("%d",&n);
        switch(n){
            case(001):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(60*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(002):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(40*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }    
            case(003):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(100*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(004):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(30*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(005):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(45*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(006):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(70*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(007):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(130*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(111):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(200*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(101):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(400*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            default:{
                printf("INVALID ENTRY!");
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
        }
    }
    return amount;
}