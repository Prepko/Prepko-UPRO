## 1. Zadatak

Napišite funkciju s prototipom:

```c++
unsigned int checkPassword(char *password, int minLength, int minUppercase, int minLowercase, int minDigits, int minSpecialChars)
```

koja će za zadanu lozinku vratiti informaciju zadovoljava li lozinka zadane pragove.

Povratna informacija se konstruira na način da se u cijelom broju bez predznaka postavi bit na mjestu koje odgovara
prekršenom pravilu. S obzirom da ima pet pravila, koristi se samo pet najmanje značajnih bitova:

```
  ┏━━━━━━━━ minSpecialChars - ima li lozinka barem minSpecialChars nekog od sljedećih znakova: !@$%^&*+#
  ┃ ┏━━━━━━ minDigits       - ima li lozinka barem minDigits znamenki
  ┃ ┃ ┏━━━━ minLowercase    - ima li lozinka barem minLowercase malih slova engleske abecede
  ┃ ┃ ┃ ┏━━ minUppercase    - ima li lozinka barem minUppercase velikih slova engleske abecede
  ┃ ┃ ┃ ┃ ┏ minLength       - ima li lozinka barem minLength znakova
  ┃ ┃ ┃ ┃ ┃
* 0 0 0 0 0
```

Npr. ako su prekršena pravila minLength i minLowercase trebaju biti postavljeni bitovi `*00101`, odnosno treba vratiti
broj `5`. Primijetiti da, ako nije prekršeno niti jedno pravilo (lozinka je ispravna), funkcija vraća `0`.

Primjer 1: funkcija vraća 0 jer je lozinka ispravna:

```
8 3 3 1 1 AAAaaa1!
0
```

Primjer 2: funkcija vraća 21 jer su prekršena pravila (`minLength`, `minLowercase`, `minSpecialChars`) = 1 + 4 + 16:

```
10 3 10 1 10 AAAaaa1!
21
```

Napomena: Potrebno je predati samo kod tražene funkcije (i eventualne #include naredbe), bez naredbe `#include<stdio.h>`
i glavnog programa.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>

int main()
{
int minLength, minUppercase, minLowercase, minDigits, minSpecialChars;
char password[100];

    printf("Unesite minLength, minUppercase, minLowercase, minDigits, minSpecialChars: ");
    scanf("%d %d %d %d %d", &minLength, &minUppercase, &minLowercase, &minDigits, &minSpecialChars);
    printf("Unesite lozinku: ");
    scanf("%s", password);
    
    printf("%d", /*pozvati funkciju checkPassword*/ ); 
    return 0;
}
```

[Rješenje zadatka](1.c)

## 2. Zadatak

Napišite funkciju `slucajniClan` koja u zadanom dvodimenzijskom cjelobrojnom polju s `m` redaka i `n` stupaca na
slučajni način odabire jedan član polja. Odabir člana obavlja se tako da se prvo na slučajni način odredi njegov indeks
retka, a zatim na slučajni način odredi njegov indeks stupca. Funkcija kao rezultat treba vratiti pokazivač na odabrani
član.

U glavnom programu s tipkovnice učitajte broj redaka i broj stupaca polja, članove polja i sjeme za generator
pseudoslučajnih brojeva te tim sjemenom inicijalizirajte generator. Pozovite funkciju `slucajniClan` koja će odrediti
pokazivač na slučajno odabrani član polja. Zatim pomoću dobivenog pokazivača izračunajte sumu članova retka i sumu
članova stupca u kojem se taj član nalazi. Na zaslon ispišite dobivene sume (za ispis koristite konverzijske
specifikacije `%d`).

Napomene:

- u funkciji nije dopušteno definirati pomoćna polja ili koristiti vlastite globalne ili statičke varijable
- za transformaciju pseudoslučajnih brojeva u indekse retka i stupca koristite izraz s operatorom ostatka cjelobrojnog
  dijeljenja
- u prilogu se nalazi program koji trebate kopirati (copy-paste) u svoju radnu okolinu ili editor te u njemu obaviti
  potrebne dopune na mjestima koja su označena komentarima. U Edgar kao rješenje predajte cijeli program (ne samo
  funkciju).

- Primjer izvršavanja programa:

```
Upisite·broj·redaka·i·stupaca·>·3·4↵
Upisite·clanove·polja·>·1·5·3·-21·2·-5·5·1·-5·6·-19·10↵
Upisite·sjeme·18↵
suma·retka·=·3↵
suma·stupca·=·-11↵
```

Objašnjenje primjera: ako se generator inicijalizira sjemenom 18, tada će funkcija u dvodimenzijskom polju `polje`

```
 1   5    3  -21
 2  -5    5    1
-5   6  -19   10
```

na slučajan način odabrati prvo indeks retka 1 i zatim indeks stupca 2 te će u glavni program vratiti pokazivač na član
`polje[1][2]`. U glavnom programu ispisuju se suma članova retka (2 + -5 + 5 + 1) i suma članova stupca (3 + 5 + -19) u
kojima se nalazi taj član.

Program koji treba dopuniti i predati kao rješenje

```c++
#include <stdio.h>
#include <stdlib.h>

/* OVDJE trebate napisati definiciju funkcije slucajniClan */

int main(void) {
/* ucitavanje dimenzija polja */
int m, n;
printf("Upisite broj redaka i stupaca > ");
scanf("%d %d", &m, &n);

/* ucitavanje clanova polja */
int polje[m][n];
printf("Upisite clanove polja > ");
for (int i = 0; i < m; ++i)
for (int j = 0; j < n; ++j)
scanf("%d", &polje[i][j]);

/* ucitavanje sjemena za generator u varijablu sjeme */
unsigned int sjeme;
printf("Upisite sjeme > ");

/* OVDJE trebate ucitati vrijednost za varijablu sjeme */

/* OVDJE trebate varijablom sjeme inicijalizirati generator */

/* OVDJE trebate napisati definiciju varijable u koju
ce se pohraniti rezultat funkcije */

/* OVDJE trebate pozvati funkciju slucajniClan */

/* OVDJE trebate izracunati sumu retka i sumu stupca */

/* OVDJE trebate na zaslon ispisati rezultat */

return 0;
}
```

[Rješenje zadatka](2.c)

## 3. Zadatak

Zadano je polje cijelih brojeva u kojem želimo prebrojiti brojeve koji su djeljivi s 3, ali želimo to napraviti tako da
računamo "u ratama", dio po dio polja. U tu svrhu, potrebno je napraviti funkciju:

```c++
int brojiDjelj3Kumulativno(int *p, int n, int delta)
```

koja za zadano polja cijelih brojeva `p` duljine `n` pretražuje `delta` članova polja i vraća kumulativni broj (ukupan,
zbirni) pronađenih brojeva djeljivih s 3. Naime, funkcija mora znati nastaviti pretraživati od člana polja gdje je stala
kod posljednjeg poziva.

Na primjer, ako izvršimo sljedeći programski kod koji uzastopno poziva funkciju brojiDjelj3Kumulativno:

```c++
int p[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
```

ispisat će se:

```
1  // jer su pregledani {2, 3, 4, 5} i nađen je 1 broj djeljiv s 3
3  // jer su pregledani {6, 7, 8, 9} gdje su 2 broja djeljiva s 3, kumulativno 1+2=3
3  // jer su pregledani {10, 11} gdje je nema brojeva djeljivih s 3, ostaje kumulativno 3
```

Funkcija ne smije pretraživati izvan granica polja!

Napomena: Potrebno je predati samo kod tražene funkcije (i eventualne #include naredbe), bez naredbe `#include<stdio.h>`
i glavnog programa.

Primjer glavnog programa za testiranje funkcije izvan Edgara

```c++
#include <stdio.h>
int main(void)
{
int p[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
return 0;
}
```

[Rješenje zadatka](3.c)

## 4. Zadatak

Pripremljeni program od korisnika prvo traži upisivanje imena ulazne i izlazne datoteke (najviše 20 znakova). Ulazna
datoteka je binarna, a sadrži zapise tipa

```c++
struct zapis_s {
    char naziv[10 + 1];
    int sifra;
};
```

Po učitavanju imena datoteka program poziva funkciju čija je definicija (programsko rješenje) ispitna zadaća, a prototip
joj je

```c++
void parnepar(char* ulazdat, char* izlazdat);
```

Funkcija treba stvoriti tekstnu datoteku imena `izlazdat` prepisujući zapise iz ulazne (binarne) datoteke `ulazdat` od
početka prema kraju. Pritom:

- pri nailasku na zapis sa šifrom koja je paran broj u tekstnu datoteku treba upisati prvo zapis neposredno prethodan
  trenutačnom, a onda i trenutačni
- pri nailasku na neparnu šifru u tekstnu datoteku treba upisati prvo trenutačni, a onda sljedeći zapis iz ulazne
  datoteke
- ako prethodni ili sljedeći zapisi ne postoje, u tekstnu datoteku treba prepisati samo trenutačni zapis
- u svakom retku tekstne datoteke treba biti samo jedan zapis; prvo naziv, a onda šifra, odvojeni razmakom.
- ako je ulazna datoteka prazna, treba stvoriti praznu izlaznu datoteku.

Program će na kraju usporediti novostvorenu datoteku s pravilnom i ispisati odgovarajuću poruku, odnosno smjernicu ako
rezultat nije točan (u primjerima).

Primjeri: na raspolaganju su dvije ulazne datoteke primjer1.bin i primjer2.bin (i njihovi .txt izvornici) s po 10 zapisa
u kojima su šifre, redom, od 0 do 9 (u primjer1.bin) i od 1 do 10 (u primjer2.bin). Dostupne su i ispravne izlazne
datoteke primjer1izlaz.txt i primjer2izlaz.txt pa se time funkcija može ispitati u obje granične situacije.

Predajete samo funkciju.

```c++
Primjer glavnog programa za testiranje funkcije izvan Edgara

#include <stdio.h>

struct zapis_s {
char naziv[10 + 1];
int sifra;
};

int main(void) {
FILE* tokTocna = NULL, *tokStud = NULL;
char ulazna[20 + 1], izlazna[20 + 1];

    printf("ime ulazne i izlazne datoteke > ");
    scanf("%s %s", ulazna, izlazna);
   
    /* OVDJE pozvati funkciju parnepar */    
       
    //Usporedba stvorene datoteke 'izlazna' s pripremljenim izlaznim
    //datotekama (samo za primjere i testove). Ocjenjivanje i ispis poruka.

    return 0;
}
```

Tekstne datoteke koje se koriste u zadatku možete pronaći pod 
[primjer1.bin](primjer1.bin), [primjer1.txt](primjer1.txt), [primjer1izlaz.txt](primjer1izlaz.txt), 
[primjer2.bin](primjer2.bin), [primjer2.txt](primjer2.txt), [primjer2izlaz.txt](primjer2izlaz.txt)

[Rješenje zadatka](4.c)
