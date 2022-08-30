#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    struct bank{
        char user_name[50];
        int bank_no;
        int balance;
        };//if you write the below statement here also it wont matter its the same ;

        struct bank c_1[100],c_2[100];
        printf("enter the number of users: \n");
        scanf("%d",&n);
        printf("enter the data in the form(name,bankno(3digigts),balance):/n");
        for(i=0;i<n;i++){

        scanf("%s",c_1[i].user_name);
        scanf("%d",&c_1[i].bank_no);
        scanf("%d",&c_1[i].balance);
        printf("enter the details of next user:\n");

}
printf("/n displaying the information:/n");
for(i=0;i<n;i++){
    printf(" \n NAME:%s \n",c_1[i].user_name);
    printf("BANK NUMBER :%d \n",c_1[i].bank_no);
    printf("BALANCE:%d ",c_1[i].balance);

}
        


}