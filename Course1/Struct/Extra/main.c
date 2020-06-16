#include<stdio.h>
#include<stdlib.h>

struct Item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item* item) {

    item->itemName = (char*)malloc(sizeof(char) * 50);
    char temp;

    printf("Enter the name of the item: ");
    scanf("%[^\n]", item->itemName);
    scanf("%c", &temp);
    printf("Enter the quantity of that item: ");
    scanf("%d", &item->quantity);
    scanf("%c", &temp);
    printf("Enter the price of the item: ");
    scanf("%f", &item->price);
    item->amount = item->quantity * item->price;
}

void printItem(struct Item* item) {
    printf("Item Name: %s\n", item->itemName);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %f\n", item->price);
    printf("Amount: %f\n", item->amount);
}

int main() {

    struct Item it;
    struct Item* ip = &it;

    readItem(ip);
    printItem(ip);

    free(ip->itemName);

    return 0;
}


