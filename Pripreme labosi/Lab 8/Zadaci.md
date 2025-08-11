## 1. Zadatak

Napisati funkciju za izvlačenje dobitne kombinacije igre Loto 6/45 prototipa:

```c++
void IzvlacenjeLota_6_od_45(int* kombinacija)
```

koja u jednodimenzionalno polje od 6 članova pohranjuje izvučenu kombinaciju 6 brojeva u rasponu 1-45.

Inicijalna vrijednost generatora pseudoslučajnih brojeva (pozivom funkcije srand) se inicijalizira na pozivajućoj
razini (funkciji main) i ne treba je ponovno inicijalizirati.

Interval pseudoslučajnih brojeva prilagoditi traženom intervalu uz pomoć izraza koji koristi operaciju ostatka
cjelobrojnog dijeljenja (prikazan na predavanjima).

Primjer jedne izvučene kombinacije gdje je `seed = 1`, može biti na Linux sustavu (Edgar):

```
29·17·28·26·24·2·
```

na Windows sustavu:

```
42·18·35·41·45·20·
```

Primjer druge izvučene kombinacije gdje je `seed = 5`, može biti na linux sustavu (Edgar):

```
26·6·31·28·42·38·
```

na Windows sustavu:

```
10·29·16·15·31·21·
```

Važno: Za transformaciju pseudoslučajnog broja u broj iz željenog intervala koristiti operator %, inače nećete dobiti
jednak rezultat.

Važna napomena: Kao rješenje zadatka predaje se samo implementirana funkcija koja ne smije sadržavati naredbe za ispis
na standardni izlaz ili unos sa standardnog ulaza. Funkcija `main` i zaglavlja se ne predaju. Korištena zaglavlja:

```c++
#include <stdio.h>
#include <stdlib.h>
```

Program za poziv funkcije možete preuzeti ovdje

```c++
int main() {
    int arr[6], seed;
    scanf("%d", &seed);
    srand(seed);
    IzvlacenjeLota_6_od_45(arr);

    for (int j = 0; j < 6; j++)
        printf("%d ", arr[j]);
}
```

[Rješenje zadatka](1.c)

## 2. Zadatak

Potrebno je napisati funkciju `GenerirajTelefonskiBroj` koja za ulazne parametre prima:

- pokazivač `broj` na polje znakova tipa char

U funkciji `GenerirajTelefonskiBroj` potrebno je zamijeniti slovo `x` s pseudoslučajno generiranom znamenkom `[0-9]`.
Ukoliko polje sadrži neki drugi znak, potrebno je taj znak zamijeniti znakom `-`.

Inicijalna vrijednost generatora pseudoslučajnih brojeva (pozivom funkcije srand) se inicijalizira na pozivajućoj
razini (funkciji main) i ne treba je ponovno inicijalizirati.

Primjeri izvođenja funkcije koja koristi pseudoslučajno generirane brojeve:

- prva linija prikazuje vrijednost parametra `broj` koji ulazi u funkciju `GenerirajTelefonskiBroj`
- druga linija prikazuje vrijednost parametra `broj` na kraju izvođenja funkcije `GenerirajTelefonskiBroj`

Primjeri izvršavanja programa:

Primjer 1 (`seed: 111`):

Linux, Edgar:

```
x-x
1-7
```

Windows:

```
x-x
1-4
```

Primjer 2 (`seed: 222`):

Linux, Edgar:

```
xax
0-0
```

Windows:

```
xax
3-1
```

Primjer 3 (`seed: 333`):

Linux, Edgar:

```
xxx-xxx-xxxx
695-869-4325
```

Windows:

```
xxx-xxx-xxxx
661-888-3561
```

Važno: Za transformaciju pseudoslučajnog broja u broj iz željenog intervala koristiti operator %, inače nećete dobiti
jednak rezultat.

Napomena: Kao rješenje zadatka predaje se samo implementirana funkcija koja ne smije sadržavati naredbe za ispis na
standardni izlaz ili unos sa standardnog ulaza. Funkcija main i zaglavlja se ne predaju.

Korištena zaglavlja:

```c++
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
```

Program za poziv funkcije možete preuzeti ovdje

```c++
#define MAX_BROJ 100

int main()
{
  int seed;
  char broj[MAX_BROJ] = {'\0'};
  scanf("%d %s", &seed, broj);


  srand(seed);
  GenerirajTelefonskiBroj(broj);
  printf("%s", broj);


  return 0;
}
```

[Rješenje zadatka](2.c)

## 3. Zadatak

Napisati funkciju generirajSlucajniRedak prototipa:

```c++
void generirajSlucajniRedak(int n, int *mat)
```

koja kao parametre prima pokazivač na prvi element dvodimenzijskog polja cijelih brojeva (kvadratna matrica) i cijeli
broj `n` koji predstavlja broj redaka kvadratne matrice. Funkcija mora prvo slučajno izabrati redak koji će "
generirati", a zatim taj redak popuniti slučajno izabranim vrijednostima iz intervala [2, 8].

Inicijalna vrijednost generatora pseudoslučajnih brojeva (pozivom funkcije srand) se postavlja na pozivajućoj razini (
npr. u funkciji main) i nemojte ju ponovno postavljati.

Napomena: Interval pseudoslučajnih brojeva prilagoditi traženom intervalu uz pomoć izraza koji koristi operaciju ostatka
cjelobrojnog dijeljenja (prikazan na predavanjima).

Primjer izvođenja:

```
seed: 42

Prije poziva funkcije:
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

Nakon poziva funkcije: (ako testirate na operacijskom sustavu Linux ili sustavu Edgar)
4 5 6 2 3 5
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

Nakon poziva funkcije: (ako testirate na operacijskom sustavu Windows)
0 0 0 0 0 0
3 7 7 6 8 3
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
```

Napomena: Kao rješenje zadatka predaje se samo implementirana funkcija koja ne smije sadržavati naredbe za ispis na
standardni izlaz ili unos sa standardnog ulaza. Funkcija `main` i zaglavlja se ne predaju. Korištena zaglavlja:

```c++
#include <stdio.h>
#include <stdlib.h>
```

Program za poziv funkcije možete preuzeti ovdje

```c++
#define RAND_UPPER_BOUND 8
#define RAND_LOWER_BOUND 2

void print_mat(int n, int mat[n][n]) {
   for(int i=0; i < n; i++) {
      for(int j=0; j < n; j++){
         printf("%d ", mat[i][j]);
      }
      printf("\n");
   }
}


int compare_2d_arrays(int n, int mat1[n][n], int mat2[n][n]) {
   for(int i=0; i < n; i++) {
      for(int j=0; j < n; j++){
         if (mat1[i][j] != mat2[i][j]) {
            return 1;
         }
      }
   }


   return 0;
}


int main(void) {
   int seed;
   scanf("%d", &seed);


   int my_mat[6][6] = {0};
   int expected_mat[6][6] = {0};


   srand(seed);
   generirajSlucajniRedak(6, &my_mat[0][0]);
   srand(seed);
   generirajSlucajniREDAK(6, &expected_mat[0][0]);


   printf("Vas rezultat:\n");
   print_mat(6, my_mat);
   printf("------------------------\n");
   printf("Ocekivani rezultat:\n");
   print_mat(6, expected_mat);


   printf("------------------------\n");


   printf("Jednaki:");
   if (compare_2d_arrays(6, my_mat, expected_mat) == 0) {
      printf("DA");
   } else {
      printf("NE");
   }


   return 0;
}
```

[Rješenje zadatka](3.c)

## 4. Zadatak

Tekstna datoteka sadrži podatke o predmetima koje studenti moraju upisati ponovo.
Jedan redak te datoteke sadrži sljedeće vrijednosti odijeljene zarezom:

- šifru studenta
- ime i prezime studenta (najviše 30 znakova)
- šifru predmeta (prirodni broj)
- naziv predmeta (najviše 40 znakova)
- ECTS bodove predmeta (cijeli broj)

Primjer sadržaja datoteke:

```
11,Sandra Nišević,49,Etika u računarstvu,2
22,Dalibor Vranić,20,Digitalna forenzika,5
7,Anđela Grgurić,6,Računalne mreže,8
```

Potrebno je napisati program koji će s tipkovnice učitati niz znakova (ne dulji od 30 znakova) koji predstavlja ime i
prezime studenta.
Potom je potrebno u datoteci pronaći i na zaslon ispisati predmete koje taj student treba upisati ponovo.
Predmete ispisujte redoslijedom kojim se pojavljuju u datoteci.
Dodatno je potrebno izračunati i na zaslon ispisati ukupan iznos kojeg student treba platiti kao školarinu za predmete
koje upisuje ponovno.
Školarina se računa kao umnožak ukupnog broja ECTS bodova koje student upisuje ponovno i cijene jednog ECTS boda koja
iznosi 20 EUR.

Primjeri izvršavanja programa:

```
Upisite·ime·i·prezime·studenta·>·Roko·Halapir↵
Upisati·ponovo:·↵
-------------------------------------------↵
··25·········Upravljanje·projektima····7↵
··26·········Automatizacija·sustava····9↵
··42···Razvoj·open·source·projekata····8↵
-------------------------------------------↵
Ukupno·EUR:··························480
```

```
Upisite·ime·i·prezime·studenta·>·Anita·Matic↵
Upisati·ponovo:·↵
-------------------------------------------↵
-------------------------------------------↵
Ukupno·EUR:····························0
```

Tekstnu datoteku koja se koristi u zadatku možete pronaći pod [predmetiPonovo.txt](predmetiPonovo.txt).

[Rješenje zadatka](4.c)

## 5. Zadatak

Tekstna datoteka sadrži podatke o predmetima koje studenti moraju upisati ponovo.
Jedan redak te datoteke sadrži sljedeće vrijednosti odijeljene znakom #:

- šifru studenta
- ime i prezime studenta (najviše 30 znakova)
- šifru predmeta (prirodni broj)
- naziv predmeta (najviše 30 znakova)
- ECTS bodove predmeta (cijeli broj)

Primjer sadržaja datoteke:

```
1#Vlado Orbanic#46#Vizualizacija podataka#9
21#Fran Antonic#25#Upravljanje projektima#6
```

Potrebno je napisati program koji će s tipkovnice učitati niz znakova (ne dulji od 30 znakova) koji predstavlja naziv
predmeta.
Potom je potrebno u datoteci pronaći i na zaslon ispisati studente koji taj predmet trebaju upisati ponovo.
Dodatno je potrebno izračunati i na zaslon ispisati ukupan broj studenata koji upisuju predmet ponovno.

Primjeri izvršavanja programa:

```
Upisite·naziv·predmeta·>·Upravljanje·projektima↵
Upisati·ponovo:↵
-----------------------------------↵
··10···················Roko·Halapir↵
··21···················Fran·Antonic↵
··11·················Sandra·Nisevic↵
-----------------------------------↵
Ukupno·studenata:·················3
```

```
Upisite·naziv·predmeta·>·Matematicka·analiza↵
Nema·studenata·za·ponovni·upis.↵
```

Tekstnu datoteku koja se koristi u zadatku možete pronaći pod [predmetiPonovos#.txt](predmetiPonovos%23.txt).

[Rješenje zadatka](5.c)

## 6. Zadatak

Tekstna datoteka sadrži podatke o nominacijama filmova za nagradu Oscar.
Jedan redak te datoteke sadrži sljedeće vrijednosti odijeljene znakom ;:

- šifru kategorije
- naziv kategorije (najviše 30 znakova)
- godinu nominacije
- šifru filma (prirodni broj)
- naslov filma (najviše 50 znakova)

Primjer sadržaja datoteke:

```
47;VISUAL EFFECTS;2019;624;Solo: A Star Wars Story
70;ANIMATED FEATURE FILM;2018;652;The Breadwinner
47;VISUAL EFFECTS;2021;688;The Midnight Sky
```

Temeljem sadržaja tekstne datoteke treba generirati novu binarnu datoteku čiji zapis sadrži sljedeće podatke:

- šifru kategorije (odgovara rednom broju zapisa u binarnoj datoteci, zapis za kategoriju sa šifrom 1 je prvi zapis u
  datoteci itd.)
- naziv kategorije
- ukupan broj nominacija u toj kategoriji bez obzira na godinu nominacije

Zapisi binarne datoteke odgovaraju sljedećoj strukturi:

```c++
struct oscar_s {
int sifKategorija;
char nazivKategorija[30+1];
short ukNominacija;
};
```

Binarnu datoteku generirati pomoću funkcije s prototipom:

```c++
void odrediBrojNominacija (const char* imeDatTxt, const char* imeDatBin)
```

Funkcija iz tekstne datoteke s imenom zadanim parametrom imeDatTxt čita podatke o nominacijama filmova te stvara i
ažurira binarnu datoteku s imenom zadanim parametrom imeDatBin.
Binarna datoteka na početku ne postoji.

Primjer tekstne datoteke možete pronaći u zadatku (pod [oscarNominacije.txt](oscarNominacije.txt)), a sadržaj binarne
datoteke temeljem te datoteke ispisan na ekran izgleda ovako:

```
Naziv·txt·datoteke·>·oscarNominacije.txt↵
Naziv·bin·datoteke·>·nominacije.bin↵
Sadrzaj·bin·datoteke:↵
·16··········SHORT·FILM·(Animated)·····1↵
·17···················BEST·PICTURE·····1↵
·25·········MUSIC·(Original·Score)·····2↵
·28··············PRODUCTION·DESIGN·····2↵
·41···················SOUND·MIXING·····1↵
·47·················VISUAL·EFFECTS·····2↵
·57··················SOUND·EDITING·····1↵
·59·················COSTUME·DESIGN·····2↵
·70··········ANIMATED·FEATURE·FILM·····5↵
·90··········MUSIC·(Original·Song)·····3↵
```

U funkciji obvezno zatvorite tokove, jer inače načinjene promjene neće biti spremljene ni vidljive programu koji testira
funkciju.

Napomene:

- ne treba predati glavni program, deklaracije strukture, niti naredbe #include, potrebno je predati samo funkciju.
- u prilogu je tekstna datoteka pomoću koje možete testirati ponašanje vlastite funkcije izvan Edgara.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct oscar_s {
   int sifKategorija;
   char nazivKategorija[30+1];
   short ukNominacija;
};

void odrediBrojNominacija (const char* imeDatTxt, const char* imeDatBin);

int main(void) {
    char nazTxtDat[128+1];
    char nazBinDat[128+1];
    printf("Naziv txt datoteke > ");
    scanf("%s%*c", nazTxtDat);
    printf("Naziv bin datoteke > ");
    scanf("%s%*c", nazBinDat);
   
    //poziv odrediBrojNominacija

    struct oscar_s oscar;
    FILE *fBin = fopen(nazBinDat, "rb");
    printf("Sadrzaj bin datoteke:\n");
    while (fread(&oscar, sizeof(oscar), 1, fBin) > 0) {
        if (oscar.sifKategorija != 0)
            printf("%3d %30s %5d\n", oscar.sifKategorija, oscar.nazivKategorija, oscar.ukNominacija);
    }
    fclose(fBin);
    return 0;
}
```

[Rješenje zadatka](6.c)
