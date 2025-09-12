## 1. Zadatak

U programskom odsječku je definirano:

```c++
struct s {
    char c;
    int a[3];
};
struct s p[5] = {
    {'A', {1, 2, 3}},
    {'B', {4, 5, 6}},
    {'C', {7, 8, 9}},
    {'D', {11, 12, 14}}
};
```

Bez korištenja pomoćnih varijabli napisati izraz (dio naredbe) kojim se referencira element koji sadrži vrijednost 8.

[Rješenje zadatka](1.c)

## 2. Zadatak

Učitati vrijednosti za broj redaka `m` i broj stupaca `n` dvodimenzijskog polja cijelih brojeva (tj. matrice) pri čemu m
i n moraju biti prirodni brojevi. Ako neki od njih nije prirodan broj, ponoviti učitavanje toga broja.

Potom po retcima učitati vrijednosti članova polja.

Nakon toga treba sve nenegativne elemente polja koji imaju neparni indeks retka zamijeniti jedinicama, a sve nenegativne
elemente polja koji imaju parni indeks retka zamijeniti nulama. Negativni elementi polja ostaju nepromijenjeni.

Nakon provedenog postupka treba ispisati novu matricu.
Zadatak treba riješiti bez upotrebe pomoćnog polja.
Kod ispisa strogo paziti na razmake i nove retke.

Primjeri izvršavanja programa:

```
Unesite·m·>·4↵
Unesite·n·>·4↵
0·0·0·1↵
1·2·3·0↵
-5·-5·-5·-5↵
1·2·3·0↵
Rezultat:↵
··0··0··0··0↵
··1··1··1··1↵
·-5·-5·-5·-5↵
··1··1··1··1↵
```

```
Unesite·m·>·1↵
Unesite·n·>·1↵
-23↵
Rezultat:↵
-23↵
```

```
Unesite·m·>·-1↵
Unesite·m·>·3↵
Unesite·n·>·-3↵
Unesite·n·>·1↵
-2↵
1↵
5↵
Rezultat:↵
·-2↵
··1↵
··0↵
```

[Rješenje zadatka](2.c)

## 3. Zadatak

S tipkovnice učitati niz znakova iz jednog retka. Niz znakova ne smije biti dulji od 10 znakova, uključujući oznaku
novog retka (ako bude učitana). Oznaku novog retka, ako postoji, ukloniti iz niza. Sva početna i završna mala slova u
riječima u nizu pretvoriti u velika. Učitava se barem jedna riječ. Riječ može minimalno sadržavati jedan znak. Ispisati
novi sadržaj niza.

Pretpostaviti da su riječi međusobno odvojene upravo jednom prazninom i da sadrže samo slova.

Primjeri izvršavanja programa:

```
Unesite·niz·znakova·>·n↵
Rezultat:·N
```

```
Unesite·niz·znakova·>·niz↵
Rezultat:·NiZ
```

```
Unesite·niz·znakova·>·i·ovo·je·niz↵
Rezultat:·I·OvO·JE·N
```

Učitavanje i ispisivanje niza napravite na način kako je prikazano u primjerima.

[Rješenje zadatka](3.c)

## 4. Zadatak

Napisati program koji će učitavati duljinu cjelobrojnog polja sve dok duljina ne bude u intervalu `[5, 10]`.
Potom definirati cjelobrojno polje zadane veličine te učitati s tipkovnice njegove članove.
Zamijeniti najveći i najmanji element polja te ispisati polje.
Ako postoji više najvećih odnosno najmanjih elemenata, uzeti onog s najmanjim indeksom.

Na primjer, za sljedeći unos:

```
Unesite·duljinu·polja·>·3↵
Unesite·duljinu·polja·>·4↵
Unesite·duljinu·polja·>·5↵
1·1·3·5·5↵
```

treba ispisati:

```
Rezultat:·5,·1,·3,·1,·5
```

Pazite na zareze i razmake.

[Rješenje zadatka](4.c)

## 5. Zadatak

Odrediti sadržaj registra u kojeg je pohranjen broj 90.75 prema standardu IEEE 754, standardnoj preciznosti. Sadržaj
registra izraziti u heksadekadskom brojevnom sustavu.

Na primjer, za zadani broj `-2` točan odgovor je `C0000000`.

[Rješenje zadatka](5.c)

## 6. Zadatak

S tipkovnice učitati prirodni broj (ne morate provjeravati ispravnost unosa) koji predstavlja prvi član niza a1.
Potom računati i ispisivati članove niza definiranog na sljedeći način:

ako je ai paran, ai+1 = ai / 2
ako je ai neparan, ai+1 = 3 * ai + 1
Članove niza ispisivati sve dok se član niza vrijednosti 1 u ispisu ne pojavi treći put.

Primjeri izvršavanja programa:

```
Unesite·prirodni·broj·>·5↵
Rezultat:·5,·16,·8,·4,·2,·1,·4,·2,·1,·4,·2,·1
```

```
Unesite·prirodni·broj·>·10000↵
Rezultat:·10000,·5000,·2500,·1250,·625,·1876,·938,·469,·1408,·704,·352,·176,·88,·44,·22,·11,·34,·17,·52,·26,·13,·40,·20,·10,·5,·16,·8,·4,·2, 1,·4,·2,·1,·4,·2,·1
```

```
Unesite·prirodni·broj·>·1↵
Rezultat:·1,·4,·2,·1,·4,·2,·1
```

[Rješenje zadatka](6.c)
