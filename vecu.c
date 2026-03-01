#include <stdio.h>
#include <stdlib.h>

#define SPEED_LIMIT 100

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./vecu <current_speed>\n");
        return 1;
    }

    int current_speed = atoi(argv[1]);

    printf("Entered Speed Limit : %d km/h\n", SPEED_LIMIT);
    printf("Current Speed       : %d km/h\n", current_speed);

    if (current_speed > SPEED_LIMIT)
        printf("Alert               : Overspeed Detected!\n");
    else
        printf("Alert               : Within Safe Limit\n");

    return 0;
}