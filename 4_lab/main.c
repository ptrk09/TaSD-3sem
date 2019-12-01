#include "include/check.h"
#include "include/menu.h"

int main(void)
{
    errprint(1);
    int32_t check = 0;
    check += 1;
    while (1) {
        check = main_menu();
        if (check != SUCCESS) {
            errprint(check);
        }
        if (check == MAIN_EXIT) {
            break;
        }
    }
    
    return OK;
}


