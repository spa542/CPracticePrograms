#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char* colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

struct packed_stuff {
    unsigned int isOpaque:1;
    unsigned int color:3;
    unsigned int show_border:1;
    unsigned int borderColor:3;
    unsigned int lineStyle:2;
    unsigned int :6;
};

typedef struct packed_stuff Pack;

void show_settings(const Pack* p) {
    printf("Box is %s.\n", p->isOpaque == true ? "opaque" : "transparent");
    printf("The fil color is %s.\n", colors[p->color]);
    printf("Border %s.\n", p->show_border == true ? "shown" : "now shown");
    printf("The border color is %s.\n", colors[p->borderColor]);
    printf("The border style is ");

    switch(p->lineStyle) {
        case SOLID: printf("solid.\n"); break;
        case DOTTED: printf("dotted.\n"); break;
        case DASHED: printf("dashed.\n"); break;
        default: printf("unknown type.\n");
    }
}

int main() {

    Pack packed = {true, GREEN, true, YELLOW, DASHED};

    printf("Original Box Settings\n");
    show_settings(&packed);
    printf("Changed Box Settings\n");
    packed.isOpaque = false;
    packed.color = WHITE;
    packed.show_border = false;
    packed.borderColor = MAGENTA;
    packed.lineStyle = DOTTED;
    show_settings(&packed);
    
    return 0;
}
