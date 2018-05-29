#include <stdio.h>

typedef enum{ sunday, monday, tuesday, wednesday, thursday, friday, saturday }week;

int main()
{
    week today;
    today = wednesday;
    printf("Day %d",today+1);
    return 0;
}
