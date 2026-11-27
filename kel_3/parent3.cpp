#include "parent3.h"
#include "child3.h"

void create_list_parent3(List_parent3 &L) {
    L.first = NULL;
}
adr_parent3 alokasi_parent3(info_parent3 x) {
    adr_parent3 p = new elm_parent3;
    p->info.id = x.id;
    p->info.nama_penumpang = x.nama_penumpang;
    p->info.nomor_kursi = x.nomor_kursi;
    p->info.kelas = x.kelas;
    p->next = NULL;
    p->child = NULL;
    return p;
}

void insert_last_parent3(List_parent3 &L, adr_parent3 P) {

}

void delete_first_parent3(List_parent3 &L, adr_parent3 &P) {

}
void delete_last_parent3(List_parent3 &L, adr_parent3 &P) {

}
void delete_parent3(List_parent3 &L, adr_parent3 &P) {

}

void print_list_parent3(List_parent3 L, bool all) {

}
adr_parent3 find_element_parent3(List_parent3 L, info_parent3 x) {
    adr_parent3 p = L.first;

    return p;
}

void add_child3(adr_parent3 &R, adr_child3 K) {

}
void remove_child3(adr_parent3 &R, adr_child3 &K) {

}