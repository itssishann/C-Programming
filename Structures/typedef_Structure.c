#include<stdio.h>
#include<string.h>
int main(){
   typedef struct Car{
        char name[15];
        int price;
    } letcar; // typedef with letcar ..
    struct Car car1;
    strcpy(car1.name,"XUV 700");
    car1.price=1000000;
    printf("%s\n",car1.name);
    printf("%d\n",car1.price);
    letcar car2; //using type def to add data in structure Name -> Car
    strcpy(car2.name,"Santro-1");
    car2.price=500000;
    printf("%s\n",car2.name);
    printf("%d\n",car2.price);
    return 0;
}