#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct customerdetails{
    char name[999];
    unsigned long long mobilenumber;
}det;

char *timeslotchoose(int n);
int payableamount();
void address();

int n=0;int quantity=0;
unsigned long long amount=0;
int house_number; int street_number; 
int main(){
    int n,m;
    char temp[100];
    printf("                              !WELCOME TO MAIT STORE!                 \n");
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
    printf(" MILK-[001]                SUGAR-[002]          COFFEE-[003]  \n");
    printf(" VEGETABLE MASALA-[004]    BREAD-[005]          POHA-[006]    \n");
    printf(" MUSTARD-OIL-[007]         HAIR OIL-[010]       TEA-[011]     \n");
    printf("--------------------------------------------------------------\n");
    amount=payableamount();
    int timeslot;
    char chtime;
    printf("--------------------------------\n");
    printf("\tSELECT THE TIME SLOT:\n");
    printf("  09:00 A.M  to 12:00 P.M. - (1)\n");
    printf("  12:00 P.M. to 03:00 P.M. - (2)\n");
    printf("  03:00 A.M  to 06:00 P.M. - (3)\n");
    printf("  06:00 A.M  to 09:00 P.M. - (3)\n");
    printf("ENTER:");
    scanf("%d",&timeslot);
    printf("--------------------------------\n");
    chtime=timeslotchoose(timeslot);
    printf("PRINTING YOUR BILL:\n");
    printf("CUSTOMER NAME: %s\n",customer.name);
    printf("MOBILE NUMBER: %llu\n",customer.mobilenumber);
    printf("ADDRESS:\n");
    address();
    printf("PAYABLE AMOUNT= %llu\n",amount);
    printf("IT WILL BE DELIVERD AT YOUR DOOR-STEP BETWEEN %c",chtime);
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
            tempstr="03:00 A.M  to 06:00 P.M.";
            return tempstr;
            break;
        }
        case 4:{
            tempstr="06:00 A.M  to 09:00 P.M.";
            return tempstr;
            break;
        }
    }
}

int payableamount(){
        int choose=1;
    // printf("ENTER PRODUCT CODE:");
    // scanf("%d",&n);
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
            case(010):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(130*quantity);
                printf("PRESS '1' FOR ADDING MORE ITEMS\n");
                printf("PRESS '2' FOR CONTINUING TO BILLING COUNTER\n");
                printf("ENTER:");
                scanf("%d",&choose);
                continue;
            }
            case(011):{
                printf("ENTER QUANTITY:");
                scanf("%d",&quantity);
                amount=amount+(130*quantity);
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

void address(){
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
    printf("ADRESS: %d,%d,",house_number,street_number);
    puts(add);
}