#include <stdbool.h>

int main(void)
{
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d\n", isFishTasty);      // Returns 0 (false)
    printf("%d", 10 > 9);             // Returns 1 (true) because 10 is greater than 9
    return 0;
}
