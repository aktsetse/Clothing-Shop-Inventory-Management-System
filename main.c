#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Shop
{
    char shopName[30];
    unsigned long long int shopPhoneNumber;
};

struct Clothing
{
    unsigned int code;
    unsigned int year;
    struct Shop shopSelling; // Shop selling clothe (has a name & phone number).
    struct Price
    {
        char currencyUsed[10];
        float amountSelling;
    } price;
    union Size
    {
        int digit;
        char letter;
        char word[30];
    } size;
    int sizetype;
};

struct Shop shopArray[10];
struct Clothing clotheArray[15];
int shopCount = 2, clothesCount = 4;

void showShops(void);
void showDetails(int arrayIndex);
void showClothes(void);
void showClothesDetails(int arrayIndex);
void addClothing(void);

int main()
{
    struct Shop shop1 = { .shopName = "Excellence Boutique", .shopPhoneNumber = 233204676251 };
    struct Shop shop2 = { .shopName = "ST PHILIPS", .shopPhoneNumber = 233504168149 };

    shopArray[0] = shop1;
    shopArray[1] = shop2;

    struct Clothing clothes_1 = { .sizetype = 3, .size.letter = 'L', .size.word = "BLACK JEANS", .shopSelling = shop1, .code = 4356, .year = 2019, .price.currencyUsed = "USD", .price.amountSelling = 90 };
    struct Clothing clothes_2 = { .sizetype = 3, .size.letter = 'M', .size.word = "SWEAT PANTS", .shopSelling = shop1, .code = 4366, .year = 2020, .price.currencyUsed = "EUR", .price.amountSelling = 100 };
    struct Clothing clothes_3 = { .sizetype = 3, .size.letter = 'S', .size.word = "LACOSTE TOP", .shopSelling = shop1, .code = 4376, .year = 2021, .price.currencyUsed = "BPS", .price.amountSelling = 120 };
    struct Clothing clothes_4 = { .sizetype = 3, .size.letter = 'L', .size.word = "ARARE SHIRT", .shopSelling = shop2, .code = 5028, .year = 2021, .price.currencyUsed = "CFA", .price.amountSelling = 150 };

    clotheArray[0] = clothes_1;
    cl
