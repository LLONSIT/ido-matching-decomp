/*
* @file: as0libmld.c
* @brief: Contains a modified version of some libmld functions.
*/
#include "stdio.h"
#include "stdlib.h"

//External declaration
extern void call_name_and_line(int arg0);

void st_error(char* arg0, int arg1, int arg2, int arg3, int arg4);
void st_warning(char* arg0, int arg1, int arg2, int arg3, int arg4);
void st_printf_2(char* arg0, int arg1);
void st_printf_3(char* arg0, int arg1, char* arg2);
void st_internal(char* arg0, int arg1, int arg2, int arg3, int arg4);
int l_addr(int arg0);
int e_addr(int arg0);
int s_addr(int arg0);

void st_error(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    fprintf(stderr, "libmld--");
    call_name_and_line(1);
    fprintf(stderr, arg0, arg1, arg2, arg3, arg4);
    fprintf(stderr, "\n");
    exit(1);
}

void st_warning(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    fprintf(stderr, "\nlibmld--");
    call_name_and_line(2);
    fprintf(stderr, arg0, arg1, arg2, arg3, arg4);
    fprintf(stderr, "\n");
}

void st_printf_2(char* arg0, int arg1) {
    fprintf(stderr, arg0, arg1);
}

void st_printf_3(char* arg0, int arg1, char* arg2) {
    fprintf(stderr, arg0, arg1, arg2);
}

void st_internal(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    fprintf(stderr, "libmld--");
    call_name_and_line(0);
    fprintf(stderr, arg0, arg1, arg2, arg3, arg4);
    fprintf(stderr, "\n");
    exit(1);
}

int l_addr(int arg0) {
    return arg0;
}

int e_addr(int arg0) {
    return arg0;
}

int s_addr(int arg0) {
    return arg0;
}

