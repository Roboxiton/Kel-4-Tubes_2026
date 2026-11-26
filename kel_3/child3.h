#ifndef CHILD3_H_INCLUDED
#define CHILD3_H_INCLUDED

#include "../tipe_data.h"

#include <iostream>
using namespace std;

struct elm_parent3;
typedef struct elm_parent3 *adr_parent3;

typedef struct elm_child3 *adr_child3;

struct elm_child3 {
    info_child3 info;
    adr_child3 next;
};

adr_child3 alokasi_child3(info_child3 x);

void insert_last_child3(adr_parent3 &R, adr_child3 P);

void delete_first_child3(adr_parent3 &R, adr_child3 &P);
void delete_last_child3(adr_parent3 &R, adr_child3 &P);
void delete_child3(adr_parent3 &R, adr_child3 &P);

void print_list_child3(adr_parent3 R, bool all);
adr_child3 find_element_child3(adr_parent3 R, info_child3 x);


#endif // CHILD3_H_INCLUDED
