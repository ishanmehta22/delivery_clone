#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void entry(int a);
typedef struct customerdetails{
    int mobilenumber;
    char name[999];
    int housenumber;
    int streetnumber;
    char add[999];
}det;
int main(){
    int n,m;
    printf("!WELCOME TO ABC STORE!\n");
    printf("1-new customer.\n");
    printf("2-already registered customer.\n");
    printf("ENTER:");
    scanf("%d",&n);
    entry(n);

}
void entry(int a){
    int mobile;
    switch(a){
        case 1:{
            char temp[999],tempp[999];
            det customer;
            FILE *fptr;
            fptr=fopen("customerdetails.txt","w");
            printf("ENTER YOUR MOBILE NUMBER:");
            scanf("%d",&customer.mobilenumber);
            fprintf(fptr,"1-MOBILE NUMBER =%d\n",customer.mobilenumber);
            printf("ENTER YOUR NAME:");
            scanf("%s",temp);
            strcpy(customer.name,temp);
            fprintf(fptr,"NAME=%s\n",customer.name);
            printf("ENTER ADDRESS\n");
            printf("ENTER YOUR HOUSE NUMBER:");
            scanf("%d",&customer.housenumber);
            fprintf(fptr,"address:%d,",customer.housenumber);
            printf("ENTER YOUR STREET NUMBER:");
            scanf("%d",&customer.streetnumber);
            fprintf(fptr,"%d,",customer.streetnumber);
            printf("ENTER YOUR REMAINING ADDRESS:");
            fgets(tempp,999,stdin);
            strcpy(customer.add,tempp);
            fprintf(fptr,"%d.\n",customer.add);
        }
    }
}