## 1. Zadatak

Izračun dobitnog listića

Potrebno je napisati funkciju za obradu svih odigranih listića (pojednostavljene) igre Loto 6/45 u jednom izvlačenju.

1. Na početku programskog kôda kojeg ćete predati kao rješenje, izvan svih blokova, deklarirajte strukturu `listic`
   kojoj su članovi definirani na sljedeći način:
    - `serijski_broj` - cijeli broj tipa long
    - `odigrana_kombinacija` - jednodimenzionalno polje duljine 6 tipa int koje sadrži odigranu kombinaciju na listiću

   Pomoću strukture `listic`, u programskom kôdu kojeg ne morate predati kao rješenje ovog zadatka, bit će definirana i
   inicijalizirana eksterna varijabla `dobitni` vidljiva u cijelom modulu.

   Pomoću polja struktura `listic`, u programskom kôdu kojeg ne morate predati kao rješenje ovog zadatka, bit će
   definirana i inicijalizirana varijabla `igra`. U ovom polju će se pohraniti svi odigrani listići za jedno izvlačenje
   igre Loto 6/45. Tako definirano polje strukture će se kao parametar (putem pokazivača) predati funkciji za obradu.

2. Napišite funkciju `ObradaIgre` čiji prototip je:

```c++
void ObradaIgre (struct listic *svi_listici, int N, int *izvuceni_brojevi);
```

Parametri su definirani na slijedeći način:

- prvi parametar je pokazivač na polje strukture listic a koje sadrži sve odigrane listiće
- drugi parametar je broj odigranih listića, a
- treći parametar je pokazivač na jednodimenzionalno polje izvučenih brojeva u igri.

Funkciju za izvlačenje brojeva `IzvlacenjeLota_6_od_45` (koja je rješenje prethodnog zadatka) i main nije potrebno
predati. Polje nije potrebno sortirati, dobitni je onaj listić koji sadrži sve izvučene brojeve u izvučenom redoslijedu.
Postoji samo jedan dobitni listić.

U obradi je potrebno pronaći dobitni listić (sa svih 6 dobitnih brojeva u tom redoslijedu) iz polja ulaznih listića. Ako
postoji dobitni listić sa izvučenom kombinacijom, potrebno je pohraniti vrijednosti serijskog broja i odigranu dobitnu
kombinaciju u externu varijablu `dobitni` koju će glavni program iskoristiti za ispis. Ukoliko takav listić ne postoji u
`serijski_broj` varijable `dobitni` treba upisati vrijednost -1. U tom slučaju ispisat će se poruka `Nije izvucen
dobitni 6!!`. Ukoliko postoji, onda postoji samo jedan dobitni listić u ulaznim podacima.

Primjeri pomoću kojeg možete testirati funkciju:

U donjoj tablici su prikazani svi uplaćeni listići jedne igre (4 listića)

| serijski broj | kombinacije       |
|---------------|-------------------|
| 123456        | 8 35 25 15 30 10  |
| 654321        | 26 6 31 28 42 38  |
| 332245        | 6 15 45 5 25 10   |
| 569887        | 10 29 16 15 31 21 |

Izvučena kombinacija (sa pozivom parametra izvlačenja 5) je : 26 6 31 28 42 38 ( na sustavu Linux (Edgar) ) te je
dobitni listić 654321.

Izvučena kombinacija (sa pozivom parametra izvlačenja 5) je : 26 6 31 28 42 38 ( na sustavu Windows ) te je dobitni
listić 569887.

U donjoj tablici su prikazani svi uplaćeni listići druge igre (5 listića) na sustavu

| serijski broj | kombinacije     |
|---------------|-----------------|
| 58            | 12 44 35 22 8 3 |
| 98            | 11 5 9 4 3 2    |
| 99            | 1 2 3 4 5 6     |
| 100           | 6 5 4 3 2 1     |
| 10            | 3 8 45 14 7 18  |

Izvučena kombinacija (sa pozivom parametra izvlačenja 8) je : 32 10 13 45 37 29 ( na sustavu Linux (Edgar) ) odnosno 20
1 42 9 6 4 ( na sustavu Windows ) te nema dobitnog listića u ovoj igri.

Važna napomena: Kao rješenje zadatka predaju se zadana struktura i implementirana funkcija koja ne smije sadržavati
naredbe za ispis na standardni izlaz ili unos sa standardnog ulaza. Funkcija `main` i zaglavlja se ne predaju. Korištena
zaglavlja:

```c++
#include <stdio.h>
#include <stdlib.h>
```

Program za poziv funkcije možete preuzeti ovdje

```c++
struct listic dobitni;

void IzvlacenjeLota_6_od_45(int* kombinacija) {
   /// kod sakriven jer je dio prethodnog zadatka
}

int main() {
   int n=0;
   
   //incijalizacija varijabli
   dobitni.serijski_broj = 0;
   for (int b = 0; b < 6; b++)
   dobitni.odigrana_kombinacija[b] = 0;
   struct listic igra[100];
   
   scanf("%d", &n); //učitaj broj listića u igri
   for (int z = 0; z < 100; z++) {
      igra[z].serijski_broj = 0;
      igra[z].odigrana_kombinacija[0] = 0;
      igra[z].odigrana_kombinacija[1] = 0;
      igra[z].odigrana_kombinacija[2] = 0;
      igra[z].odigrana_kombinacija[3] = 0;
      igra[z].odigrana_kombinacija[4] = 0;
      igra[z].odigrana_kombinacija[5] = 0;
   }
   
   for (int k = 0; k < n; k++) {
      scanf("%ld %d %d %d %d %d %d", &igra[k].serijski_broj, &igra[k].odigrana_kombinacija[0],
      &igra[k].odigrana_kombinacija[1], &igra[k].odigrana_kombinacija[2], &igra[k].odigrana_kombinacija[3],
      &igra[k].odigrana_kombinacija[4], &igra[k].odigrana_kombinacija[5];
   }
   
   //izvlačenje
   int izvucenakombinacija[6], seed=0;
   scanf("%d", &seed);
   srand(seed);
   IzvlacenjeLota_6_od_45(izvucenakombinacija);
   
   ObradaIgre(igra, n, izvucenakombinacija);
   
   if (dobitni.serijski_broj != -1) {
      printf("serijski broj dobitnog listica je: %ld\n", dobitni.serijski_broj);
      printf("dobitna kombinacija je:");
      for (int j = 0; j < 6; j++)
         printf(" %d", dobitni.odigrana_kombinacija[j]);
   } else
        printf("Nije izvucen dobitni 6!!\n");
}
```

[Rješenje](1.c)

## 2. Zadatak

1. Na početku programskog kôda kojeg ćete predati kao rješenje, izvan svih blokova, deklarirajte strukturu `dionica_s`
   kojoj su članovi definirani na sljedeći način:
    - `oznaka` - jedinstvena oznaka dionice tipa `char[]` koja se sastoji od maksimalno 5 znakova (potrebno je koristiti
      predefinirani makro `MAX_OZNAKA`)
    - `cijena` - broj tipa `float`
    - `naziv` - naziv dionice `char[]` koji se sastoji maksimalno 20 znakova (potrebno je koristiti predefinirani makro
      `MAX_NAZIV`)
2. Osim strukture `dionica_s`, potrebno je definirati strukturu `portfelj_s` kojoj su članovi definirani na sljedeći
   način:
    - `oznaka` - jedinstvena oznaka dionice tipa `char[]` koja se sastoji od maksimalno 5 znakova (potrebno je koristiti
      predefinirani makro `MAX_OZNAKA`)
    - `kolicina` - cijeli broj tipa int koji predstavlja koliko posjedujemo dionica s oznakom `oznaka`
3. Potrebno je napisati funkciju `IzracunajVrijednostPortfelja` čiji je prototip:

```c++
float IzracunajVrijednostPortfelja(struct dionica_s *dionice, int broj_dionica;
struct portfelj_s *moj_portfelj, int broj_dionica_u_mom_portfelju);
```

- funkcija mora vratiti ukupnu vrijednost svih dionica koje se nalaze u strukturi `portfelj_s`
- vrijednost jedne dionice računa se:
    - umnožak količine dionice koju posjedujemo u portfelju i vrijednosti dionice
- ako se u portfelju nalazi dionica koja se ne nalazi u listi svih dionica tada vrijednost te dionice ne treba uračunati
  u vrijednost portfelja

Primjer izvođenja programa:

```
Broj·dionica:·1↵
MSFT·10.00·Microsoft↵
Broj·dionica·u·mom·portfelju:·1↵
MSFT·20↵
Vrijednost·portfelja:·200.00
```

```
Broj·dionica:·3↵
MSFT·10.00·Microsoft↵
TSLA·20.00·Tesla↵
AMZN·30.00·Amazon↵
Broj·dionica·u·mom·portfelju:·2↵
MSFT·20↵
AMZN·20↵
Vrijednost·portfelja:·800.00
```

```
Broj·dionica:·3↵
MSFT·10.00·Microsoft↵
TSLA·20.00·Tesla↵
AMZN·30.00·Amazon↵
Broj·dionica·u·mom·portfelju:·2↵
GOOGL·20↵
AAPL·20↵
Vrijednost·portfelja:·0.00
```

Napomena 1: Glavna funkcija `main` će na standardni ulaz učitati podatke od dionicama i portfelju.

Napomena 2: Kao rješenje zadatka predaje se samo implementirana funkcija koja ne smije sadržavati naredbe za ispis na
standardni izlaz ili unos sa standardnog ulaza. Funkcija `main` i zaglavlja se ne predaju.

Korištena zaglavlja:

```c++
#include <stdio.h>  
#include <string.h>  
```

Program za poziv funkcije možete preuzeti ovdje

```c++
#define MAX_DIONICA                 100
#define MAX_DIONICA_U_PORTFELJU     20
#define MAX_NAZIV                   20
#define MAX_OZNAKA                  5

int main () {
    int broj_dionica;
    printf ("Broj dionica: ");
    scanf ("%d", &broj_dionica);

    struct dionica_s dionice[MAX_DIONICA + 1];
    for (int i = 0; i < broj_dionica; i++) {
        scanf ("%s", dionice[i].oznaka);
        scanf ("%f", &dionice[i].cijena);
        scanf ("%s", dionice[i].naziv);
    }
    
    int broj_dionica_u_mom_portfelju;
    printf ("Broj dionica u mom portfelju: ");
    scanf ("%d", &broj_dionica_u_mom_portfelju);
    
    struct portfelj_s moj_portfelj[MAX_DIONICA_U_PORTFELJU + 1];
    for (int i = 0; i < broj_dionica_u_mom_portfelju; i++) {
        scanf ("%s", moj_portfelj[i].oznaka);
        scanf ("%d", &moj_portfelj[i].kolicina);
    }
    
    float ukupna_vrijednost = IzracunajVrijednostPortfelja (dionice, broj_dionica, moj_portfelj, broj_dionica_u_mom_portfelju);
    printf ("Vrijednost portfelja: %.2f", ukupna_vrijednost);
    
    return 0;
}
```

[Rješenje](2.c)

## 3. Zadatak

Napišite funkciju `nadiNajveciOpseg` prototipa

```c++
void nadiNajveciOpseg(int n, struct pravokutnik* pravokutnici)
```

Parametar `n` predstavlja broj elemenata u polju `pravokutnici`. Vaša funkcija treba od danih pravokutnika odrediti onaj
s najvećim opsegom i treba vratiti rezultat preko eksterne statičke varijable pod nazivom `rjesenje` (ova varijabla je
već definirana tako da ju ne morate vi definirati). Navedna statička varijabla je u kodu definirana ovako:

```c++
struct pravokutnik rjesenje;
```

U slučaju da više pravokutnika ima maksimalan opseg, odaberite onaj koji se u polju pojavljuje ranije (onaj koji ima
manji indeks).

Također deklarirajte i strukturu pravokutnik koja definira `pravokutnik` u kartezijevom koordinatnom sustavu preko dvije
nasuprotne (nesusjedne) točke pravokutnika (pretpostavlja se da su stranice pravokutnika paralelne s x i y osi).
Struktura treba imati sljedeće članove:

- `x1`: x koordinata prve točke
- `y1`: y koordinata prve točke
- `x2`: x koordinata druge točke
- `y2`: y koordinata druge točke

Primjer izvođenja:

```
Pravokutnik 1: (0, 0) - (1, 1)
Pravokutnik 2: (16, 15) - (0, 1)
Pravokutnik 3: (-1, -2) - (0, 1)

Maksimalan opseg:
(16, 15) - (0, 1)
```

Napomena: Kao rješenje zadatka predaje se samo implementirana funkcija koja ne smije sadržavati naredbe za ispis na
standardni izlaz ili unos sa standardnog ulaza i deklaracija zadane strukture. Funkcija main i zaglavlja se ne predaju.
Korištena zaglavlja:

```c++
#include <stdio.h>
#include <string.h>
```

Program za poziv funkcije možete preuzeti ovdje

```c++
#define MAX_SEKVENCI        50
#define MAX_PRAVOKUTNIKA    25

struct pravokutnik rjesenje;

int main() {
    int broj_pravokutnika;
    printf("Broj pravokutnika: ");
    scanf("%d", &broj_pravokutnika);
    
    struct pravokutnik pravokutnici[MAX_PRAVOKUTNIKA];
    printf("Unesite koordinate nasuprotnih točaka pravokutnika:\n");
    for (int i=0; i < broj_pravokutnika; i++) {
        scanf("%d", &pravokutnici[i].x1);
        scanf("%d", &pravokutnici[i].y1);
        scanf("%d", &pravokutnici[i].x2);
        scanf("%d", &pravokutnici[i].y2);
    }
    
    nadiNajveciOpseg(broj_pravokutnika, pravokutnici);
    
    printf("Rjesenje:\n");
    printf("(%d, %d) - (%d, %d)\n", rjesenje.x1, rjesenje.y1, rjesenje.x2, rjesenje.y2);
    
    return 0;
}
```

[Rješenje](3.c)

## 4. Zadatak

Deklarirana je struktura

```c++
struct person_s {
    int code;
    char name[128];
    float salary;
};
```

Napisati funkciju s prototipom

```c++
bool capitalizeName(struct person_s *person)
```

koja sve riječi unesene u član name promijeni tako da počinju velikim slovom, a ostatak riječi pretvara u mala slova.
Ako je name prazan niz, funkcija vraća false, inače true.

Osim slova, u name se mogu pojaviti samo još znakovi ' ' (space) i '-' (minus).

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
// ostale potrebne #include naredbe
struct person_s {
    int code;
    char name[128];
    float salary;
};

int main(void) {
    struct person_s s;
    printf("Unesite ime > ");
    fgets(s.name, 128, stdin);
    char *p;
    if (p = strchr(s.name, '\n')) *p = '\n';
    // ovdje ugraditi poziv funkcije i kontrolni ispis rezultata
    return 0;
}
```

[Rješenje](4.c)
