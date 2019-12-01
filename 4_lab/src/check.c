#include "include/check.h"

void errprint(const int32_t code_error)
{
    switch (code_error) {
        case ERROR_INPUT_MENU_ITEM:
            puts("Некорректый ввод пункта меню!");
            break;
        case ERROR_WRONG_MENU_ITEM:
            puts("Не существует данного пункта меню!");
            break;
    }
}