#include<stdio.h>
typedef struct bank_account{
     char name[64];
     int ac_num;

} bAcc;

int main(){
    bAcc acc1={"Saad",69696969};
    printf("Acc owner:%s\n",acc1.name);
    printf("Acc num:%d\n",acc1.ac_num);

}