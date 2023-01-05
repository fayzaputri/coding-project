#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>
#include <string>

#define First(L) ((L).First)
#define info(P) P->info
#define next(P) P->next
#define nil NULL

using namespace std;

struct infotype
{
    string Artis;
    string Judul;
    string Genre;
    int playtime;
};

typedef struct element *adr;

struct element
{
    infotype info;
    adr next;
};

struct listLagu
{
    adr First;
};

void create_List_1301213169(listLagu &L);
void createElemen_1301213169(infotype laguBaru, adr &pLagu);
void insertFirst_1301213169(listLagu &L, adr pLagu);
void deleteLast_1301213169(listLagu &L, adr &pLagu);
void showSemuaLagu_1301213169(listLagu L);

#endif // CSLL_H_INCLUDED
