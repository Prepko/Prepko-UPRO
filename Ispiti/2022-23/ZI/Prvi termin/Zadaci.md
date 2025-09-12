## 1. Zadatak

Napisati definiciju funkcije `zamijeniRetke` s prototipom

```c++
float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int indRed2);
```

Funkcija treba zamijeniti vrijednosti elemenata u recima s indeksima `indRed1` i `indRed2` dvodimenzionalnog polja
`polje` s `brRed` redaka i `brStup` stupaca čiji su elementi tipa `float`.

Funkcija preko imena treba vratiti razliku sume elemenata retka s manjim indeksom (prije izmjene) i sume elemenata retka
s većim indeksom retka.

Primjer:

Zadano polje uz vrijednosti parametara `indRed1=3` i `indRed2=0`:

```
7.250  2.500  3.125  4.750
5.250  6.000  7.500  8.000
9.000  0.250  9.250  2.500
5.500  2.250  3.125  4.250
```

treba promijeniti u:

```
5.500  2.250  3.125  4.250
5.250  6.000  7.500  8.000
9.000  0.250  9.250  2.500
7.250  2.500  3.125  4.750
```

pri čemu funkcija vraća vrijednost 2.5: (7.25 + 2.5 + 3.125 + 4.75) - (5.5 + 2.25 + 3.125 + 4.25) = 2.5

Napomena: ne treba predati glavni program, niti naredbe #include, potrebno je predati samo funkciju.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
float zamijeniRetke(float *p, int brRed, int brStup, int indRed1, int indRed2);

int main(void) {
    int brojRedaka, brojStupaca, indeksRetka1, indeksRetka2;
    printf("Upisi broj redaka i stupaca > ");
    scanf("%d %d", &brojRedaka, &brojStupaca);
    printf("Upisi indekse redaka za zamjenu > ");
    scanf("%d %d", &indeksRetka1, &indeksRetka2);
    float polje[brojRedaka][brojStupaca];
    printf("Upisi elemente matrice > \n");
    for (int i = 0; i < brojRedaka; ++i)
        for (int j = 0; j < brojStupaca; ++j)
            scanf("%f", &polje[i][j]);
    
    float razlikaSuma = /*ovdje ugraditi poziv funkcije */;
    
    for (int i = 0; i < brojRedaka; ++i) {
        for (int j = 0; j < brojStupaca; ++j) {
            printf("%8.3f ", polje[i][j]);
        }
        printf("\n");
    }
    printf("Razlika suma: %8.3f", razlikaSuma);
    
    return 0;
}
```

[Rješenje zadatka](1.c)

## 2. Zadatak

Napišite funkciju prototipa:

```c++
void danMjesec(int rbrDanGodina, int *dan, int *mjesec)
```

koja će za zadani redni broj dana u godini vratiti redni broj dana unutar mjeseca i redni broj mjeseca.

Pretpostavimo da godina nije prijestupna, tj. da veljača ima 28 dana. Dakle, broj dana po mjesecu je redom: 31, 28, 31,
30, 31, 30, 31, 31, 30, 31, 30 i 31.

Nije potrebno provjeravati je li `rbrDanGodina` ispravan, on će uvijek biti u intervalu [1, 365].

Na primjer:

- za `rbrDanGodina` = 10, funkcija treba vratiti `dan` 10 i `mjesec` 1
- za `rbrDanGodina` = 20, funkcija treba vratiti `dan` 20 i `mjesec` 1
- za `rbrDanGodina` = 30, funkcija treba vratiti `dan` 30 i `mjesec` 1
- za `rbrDanGodina` = 40, funkcija treba vratiti `dan` 9 i `mjesec` 2
- ...
- za `rbrDanGodina` = 200, funkcija treba vratiti `dan` 19 i `mjesec` 7
- ...

Napomena: ne treba predati glavni program niti naredbe `#include`, potrebno je predati samo funkciju.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
int main(void) {
    int i, dan, mjesec;
    for (i = 1; i < 366; i++) {
        // ovdje ugraditi poziv funkcije
        printf("rbrDanGodina = %3d -> dan: %2d, mjesec: %2d\n", i, dan, mjesec);
    }
    return 0;
}
```

[Rješenje zadatka](2.c)

## 3. Zadatak

Napisati funkciju s prototipom

```c++
bool capitalizeName(char *name)
```

koja sve riječi unesene u niz `name` promijeni tako da počinju velikim slovom, a ostatak riječi pretvori u mala slova.
Ako je name prazan niz, funkcija vraća false, inače true.

Osim slova, u `name` se mogu pojaviti samo još znakovi ' ' (space) i '-' (minus).

Primjeri:

Niz "pero peric" mijenja se u "Pero Peric", a rezultat funkcije je true

Niz "ana ANIC ivic" mijenja se u "Ana Anic Ivic", a rezultat funkcije je true

Niz "ana ivic-anic" mijenja se u "Ana Ivic-Anic", a rezultat funkcije je true

Prazan niz "" ostaje "", a rezultat funkcije je false

Napomena: ne treba predati glavni program, deklaraciju strukture niti naredbe #include, potrebno je predati samo
funkciju.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
// ostale potrebne naredbe #include
int main(void) {
    char name[128+1];
    printf("Unesite ime > ");
    fgets(name, 128, stdin);
    char *p;
    if (p = strchr(name, '\n')) *p = '\0';
        // ovdje ugraditi poziv funkcije i kontrolni ispis rezultata
    return 0;
}
```

[Rješenje zadatka](3.c)

## 4. Zadatak

Iz tekstne datoteke s rezultatima ispita potrebno je u novu binarnu datoteku prepisati zapise o studentima koji su
ostvarili PRAG (= 80) ili više bodova. Zapis u tekstnoj datoteci se sastoji od imena (najviše 15 znakova, bez bjelina) i
broja bodova (cijeli broj), odvojeno bjelinom (white space). Zapis u binarnoj datoteci mora biti struktura definirana
niže u primjeru programa.

Napišite funkciju prototipa

```c++
int najstudenti(char *txtdat, char *bindat);
```

koja: * iz datoteke čije je ime zadano parametrom `txtdat` prepisuje zapise s brojem bodova PRAG ili više u datoteku
čije je ime zadano parametrom `bindat`, kako je već opisano u uvodu zadatka. U `bindat` zapisi trebaju biti u istom
poretku u kojem su u `txtdat`. * vraća broj prepisanih zapisa * ako ne može otvoriti datoteku `txtdat` ili `bindat`,
vraća -1.

Primjer programa koji poziva funkciju:

```c++
#include <stdio.h>
#define PRAG 80

struct rezultat {
    char ime[15 + 1];
    int bodovi;
};

int najstudenti(char *txtdat, char *bindat);

int main(void) {
    ...
    char ulazna[30 + 1], izlazna[30 + 1];
    scanf("%s %s", ulazna, izlazna);
    ...
    // ovdje ugraditi poziv funkcije
    ...
    return 0;
}
```

Napomena: ne treba predati glavni program, niti naredbe `#include`, potrebno je predati samo funkciju. U funkciji
obvezno
zatvoriti datoteke, jer inače načinjene promjene neće biti spremljene ni vidljive programu koji ispituje funkciju.

Tekstnu datoteke koja se koristi u zadatku možete pronaći pod [primjer.txt](primjer.txt)

[Rješenje zadatka](4.c)

## 5. Zadatak

Napisati definiciju funkcije `postaviBitove` s parametrima `pokNaBroj` i `n`. Prvi parametar, `pokNaBroj` je pokazivač
na objekt (npr. varijablu) tipa `unsigned short int`. Drugi parametar, `n` je tipa `int`. Funkcija u objektu na kojeg
pokazuje `pokNaBroj` treba `n` najmanje značajnih bitova postaviti na vrijednost 1.

Funkcija je tipa `int` i preko imena vraća broj bitova koje je u zadanom objektu iz vrijednosti 0 promijenila u
vrijednost 1.
Napomena: u funkciji nije dopušteno koristiti polja (array).

Primjer 1. Ako se funkciji zada pokazivač na varijablu koja sadrži vrijednost 550 (binarno 0000001000100110), a kao
parametar `n` zada se 7, funkcija treba sadržaj varijable promijeniti u 639 (binarno 0000001001111111) te preko imena
vratiti 4.

Primjer 2. Ako se funkciji zada pokazivač na varijablu koja sadrži vrijednost 0 (binarno 0000000000000000), a kao
parametar `n` zada se 16, funkcija treba sadržaj varijable promijeniti u 65535 (binarno 1111111111111111) te preko imena
vratiti 16.

Primjer 3. Ako se funkciji zada pokazivač na varijablu koja sadrži vrijednost 65535 (binarno 1111111111111111), a kao
parametar `n` zada se 8, funkcija sadržaj varijable neće promijeniti, a preko imena će vratiti 0.

Napomena: ne treba pisati glavni program, niti naredbe `#include`, potrebno je napisati samo definiciju funkcije
`postaviBitove`, odnosno dio programskog koda koji se u dolje prikazanom modulu nalazi između `/* POCETAK DEFINICIJE */`
i `/* KRAJ DEFINICIJE */`.

Primjer programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
/* POCETAK DEFINICIJE */
//ovdje napisati definiciju funkcije postaviBitove
/* KRAJ DEFINICIJE */

int main(void) {
    unsigned short int objekt;
    int n, rez;
    scanf("%hu %d", &objekt, &n);
    // ovdje ugraditi poziv funkcije
    printf("Nova vrijednost objekta=%u\nBroj postavljenih bitova=%d", objekt, rez);
    return 0;
}
```

[Rješenje zadatka](5.c)

## 6. Zadatak

Deklarirana je struktura

```c++
struct point_s {
    int x;
    int y;
};
```

Napisati funkciju s prototipom

```c++
void generate(struct point_s *s, int n, int lb, int ub);
```

koja će u polju s generirati n točaka sa slučajnim koordinatama u intervalu [lb, ub]. Pretpostaviti da je polje s
korektno dimenzionirano u pozivajućem programu.

Napomene:

- Ne treba pisati glavni program, deklaraciju strukture niti naredbe `#include`, potrebno je napisati samo funkcije.
- Funkcija `generate` ne smije sadržavati inicijalizaciju generatora slučajnih brojeva. Skaliranje na zadani interval
  obavezno napraviti operatorom %.
- Za svaku točku, prvo generirati koordinatu x, a zatim koordinatu y.
- Točke generirati redom, od točke s indeksom 0 do točke s indeksom n-1.

Primjeri (Linux, seed 0):

Funkcija izgenerira 5 točaka sa intervala [0, 5]:

```
1·4↵
3·1↵
5·1↵
4·0↵
3·1↵
```

odnosno 10 točaka sa intervala [5, 15]:

```
11·15↵
11·7↵
6·9↵
5·11↵
8·6↵
13·12↵
10·8↵
12·9↵
14·15↵
7·5↵
```

Primjeri (Windows, seed 0):

Funkcija izgenerira 5 točaka sa intervala [0, 5]:

```
2·3↵
4·1↵
5·1↵
1·5↵
4·0↵
```

odnosno 10 točaka sa intervala [5, 15]:

```
10·13↵
13·11↵
5·10↵
10·5↵
5·15↵
6·11↵
10·8↵
14·11↵
5·9↵
7·11↵
10·11↵
```

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
// ostale potrebne #include naredbe
// definicija funkcije generate
int main(void) {
    int i, n, lb, ub;
    // ovdje inicijalizirati generator slučajnih brojeva
    printf("Unesite n, lb, ub > ");
    scanf("%d %d %d", &n, &lb, &ub);
    // ovdje definirati VLA polje točaka, pozvati funkciju i ispisati rezultate
}
```

[Rješenje zadatka](6.c)
