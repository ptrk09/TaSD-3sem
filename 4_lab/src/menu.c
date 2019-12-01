#include <stdio.h>
#include "include/menu.h"
#include "../include/check.h"
#include "../include/stack_list.h"
#include "../include/stack_array.h"

int32_t push_el(const int32_t type_stack) {
    int32_t check = 0;
    switch (type_stack) {
        case ARRAY_TYPE_STACK:
            check = push_arrstack();
            break;
        case LIST_TYPE_STACK:
            //check = stack_list_push();
            break;
    }
    return SUCCESS;
}

static void print_menu_stack_op6n(const int32_t type_stack) {
    fprintf(stdout, "\n\t1  -  Добавить элемент в стек.\n");
    fprintf(stdout, "\t2  -  Удалить элемент из стека.\n");
    fprintf(stdout, "\t3  -  Вывести всё содержимое стека.\n");
    fprintf(stdout, "\t4  -  Узнать состояние стека.\n");
    fprintf(stdout, "\t5  -  Узнать время операций двух разных реализаций стека.\n");
    fprintf(stdout, "\t0  -  Выход.\n");
    fprintf(stdout, "\n\tВведите ваш выбор: ");
}

static int32_t select_option_stack(const int32_t type_stack) {
    int32_t check = 0, menu_item = 0;

    print_menu_stack_op6n(type_stack);
    check = fscanf(stdin, "%d", &menu_item);
    CHECK_TRUE_CODE(check, 1, ERROR_INPUT_OPT_ITEM);
    CHECK_AFFILIATION(menu_item, 0, 5, ERROR_WRONG_OPT_ITEM);

    switch (menu_item) {
        case 1:
            check = push_el(type_stack);
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            return SUCCESS;
            break;
    }
    
    return SUCCESS;
}

static void print_select_type_stack(void) {
    puts("MENU\n");
    puts("\nВыберите вариант реализации стека:\n");
    puts("1  -  Реализация стека в виде массива.");
    puts("2  -  Реализация стека в виде списка.");
    puts("0  -  Выход из программы.\n");

    fprintf(stdout, "Введите ваш выбор: ");
}


int32_t main_menu() {
    int32_t check = 0, menu_item = 0;

    print_select_type_stack();
    check = fscanf(stdin, "%d", &menu_item);
    CHECK_TRUE_CODE(check, 1, ERROR_INPUT_MENU_ITEM);
    CHECK_AFFILIATION(menu_item, 0, 2, ERROR_WRONG_MENU_ITEM);

    if (menu_item) {
        while (check != EXIT_MENU) {
            check = select_option_stack(menu_item);
            errprint(check);
        }
    } else {
        return MAIN_EXIT;
    }

    return SUCCESS;
}