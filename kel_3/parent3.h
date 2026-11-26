#ifndef PARENT3_H_INCLUDED
#define PARENT3_H_INCLUDED

#include "../tipe_data.h"
#include "child3.h"

#include <iostream>
using namespace std;

typedef struct elm_parent3 *adr_parent3;

struct elm_parent3 {
    info_parent3 info;
    adr_parent3 next;
    List_child3 child;
};

struct List_parent3 {
    adr_parent3 first;
};

void create_list_parent3(List_parent3 &L);
adr_parent3 alokasi_parent3(info_parent3 x);

void insert_last_parent3(List_parent3 &L, adr_parent3 P);

void delete_first_parent3(List_parent3 &L, adr_parent3 &P);
void delete_last_parent3(List_parent3 &L, adr_parent3 &P);
void delete_parent3(List_parent3 &L, adr_parent3 &P);

void print_list_parent3(List_parent3 L, bool all);
adr_parent3 find_element_parent3(List_parent3 L, info_parent3 x);

void add_child3(adr_parent3 &R, adr_child3 K);
void remove_child3(adr_parent3 &R, adr_child3 &K);

#endif // PARENT3_H_INCLUDED
