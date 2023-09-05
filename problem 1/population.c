#include <stdio.h>

int main(void)
{
    int start, end, years = 0;
    // TODO: Prompt for start size
    do
    {
        printf("Start size: ");
        scanf("%i", &start);
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        printf("End size: ");
        scanf("%i", &end);
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}