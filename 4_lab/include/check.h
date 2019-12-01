#ifndef __CHECK_H__
#define __CHECK_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define CHECK_NULL(pointer, code_return) { if ((pointer) == NULL) return (code_return); }
#define CHECK_TRUE_CODE(cur_code, true_code, code_error) { if (cur_code != true_code) return code_error; }
#define CHECK_AFFILIATION(el, left_border, right_border, code_error) { if (el < left_border && el > right_border) return code_error; }

#define OK 0
#define SUCCESS 1

// menu define
#define ERROR_INPUT_MENU_ITEM 101 
#define ERROR_WRONG_MENU_ITEM 102
#define MAIN_EXIT 103

// select_option_stack define
#define ARRAY_TYPE_STACK 201
#define LIST_TYPE_STACK 202
#define EXIT_MENU 203
#define ERROR_INPUT_OPT_ITEM 204
#define ERROR_WRONG_OPT_ITEM 205

// push_el
#define STACK_OVERFLOW 301

void errprint(const int32_t code_error);

#endif