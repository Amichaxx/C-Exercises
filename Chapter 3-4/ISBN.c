#include<stdio.h>

int main(void){

    int GS1Prefix, GroupIdentifier, PublisherCode, ItemNumber, CheckDigit;
    printf("Enter your ISBN in the format xxx-x-xxx-xxxxx-x: ");
    scanf("%i-%i-%i-%i-%i", &GS1Prefix, &GroupIdentifier, &PublisherCode, &ItemNumber, &CheckDigit);
    printf("GS1 Prefix: %i\nGroup Identifier: %i\nPublisher Code: %i\nItem Number %i\nCheck Digit %i\n", GS1Prefix, GroupIdentifier, PublisherCode, ItemNumber, CheckDigit);
    return 0;
}