#include<stdio.h>
#include<stdlib.h>

int main() {
    enum Companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

    enum Companies one = XEROX;
    enum Companies two = GOOGLE;
    enum Companies three = EBAY;

    printf("Companies in order of assigned... %d %d %d\n", one, two, three);
}
