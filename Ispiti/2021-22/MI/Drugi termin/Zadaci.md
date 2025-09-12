## 1. Zadatak

S tipkovnice učitati 3 prirodna broja (ne morate provjeravati ispravnost unosa) koji predstavljaju redom:

- prvi član niza a1
- drugi član niza a2
- sumu članova niza maxSuma koja ne smije biti prekoračena.

Za sve i > 2, član niza ai izračunava se na sljedeći način:

- ako je indeks i člana neparan ai = ai-2*3
- ako je indeks i člana paran ai = ai-2*2

Potrebno je računati i ispisivati članove niza sve dok je suma (ispisanih) članova niza manja od maxSuma.

Primjeri izvršavanja programa:

```
Upisite·tri·prirodna·broja·>·1·2·10⏎
Rezultat:·1,·2,·3
```

```
Upisite·tri·prirodna·broja·>·3·5·50000⏎
Rezultat:·3,·5,·9,·10,·27,·20,·81,·40,·243,·80,·729,·160,·2187,·320,·6561,·640,·19683,·1280
```

```
Upisite·tri·prirodna·broja·>·20·30·10⏎
Rezultat:·
```

```
Upisite·tri·prirodna·broja·>·20·30·25⏎
Rezultat:·20
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](1.c)

## 2. Zadatak

Napisati program koji će učitavati članove cjelobrojnog polja dok se ne učita nula ili dok ne bude pohranjeno 10
brojeva. U prvom slučaju, nulu ne učitati u polje.

Ispisati srednju vrijednost i varijancu unesenog niza brojeva (varijanca je srednja vrijednost kvadrata razlike svakog
elementa od srednje vrijednosti svih elemenata).
$varijanca = \frac{\sum_{i=1}^{n}(x_i - \mu)^2} {n}$, pri čemu je srednja vrijednost

Realne brojeve ispisujte sa dva decimalna mjesta.

Primjeri:

1. Za unos:

```
3⏎
4⏎
5⏎
0⏎
```

treba ispisati $(\mu = 4.0, varijanca = \frac{(3-4)^2 + (4-4)^2 + (5-4)^2}{3})=\frac{2}{3}$:

```
4.00,·0.67
```

2. Za unos:

```
1·2·3·4·5·6·7·8·9·-10·11·12·13⏎
```

treba ispisati:

```
3.50,·26.25
```

3. Za unos:

```
0⏎
```

treba ispisati:

```
0.00,·0.00
```

Pazite na zareze i razmake.

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](2.c)

## 3. Zadatak

Čime u programskom odsječku treba zamijeniti oznaku `FORMAT`, kako bi se kao rezultat izvršavanja dobio točno sljedeći
ispis na zaslon:

```
0:A:0.20↵
165:D:0.25↵
5065:B:100.24↵
```

Programski odsječak:

```c++
int a = 65;
float x = 0.2f;
printf(FORMAT, a - 65, a, x);
printf(FORMAT, a + 100, a + 3, x + 0.045f);
printf(FORMAT, a + 5000, a + 1, x + 100.044f);
```

Napomena: format treba napisati potpuno točno, vodeći računa o prazninama i dvostrukim navodnicima. Npr. ako je točan
odgovor `%d %d`, tada se kao točan odgovor neće priznati `%d%d` ili `%d %d`.

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](3.c)

## 4. Zadatak

S tipkovnice učitati niz znakova (iz jednog retka) koji zajedno s eventualno učitanom oznakom novog reda sigurno neće
biti dulji od 20 znakova. Ako je u niz učitana i oznaka novog retka, izbaciti je iz učitanog niza.

Učitati cijeli broj te ako broj predstavlja ispravnu poziciju znaka u nizu, iz niza izbaciti znak na zadanoj poziciji.
Sva velika slova koja su se nalazila iza zadane pozicije pretvoriti u mala, a sve znamenke koje su se nalazile iza
zadane pozicije zamijeniti znakom 'X'.

Promijenjeni niz ispisati na zaslon.
Inače, ispisati poruku "Neispravna pozicija".
Smatra se da pozicije počinju od 1, tj. prvi znak u nizu (s indeksom nula) jest znak na poziciji 1.

Primjeri izvršavanja programa:

```
Upisite·niz·>·Ilica·10·Zagreb⏎
Upisite·poziciju·>·4⏎
Rezultat:·Ilia·XX·zagreb
```

```
Upisite·niz·>·Danteov·trg·4·Pula⏎
Upisite·poziciju·>·19⏎
Neispravna·pozicija
```

Učitavanje niza i pozicije te ispis rezultata napravite na način kako je prikazano u primjerima.

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](4.c)

## 5. Zadatak

Napisati odsječak programa označen sa `(*)` koji će izračunati ukupnu vrijednost artikala u skladištu opisanih sadržajem
strukture `artikli`.

```c++
#include <stdio.h>
#define MAX 10

int main(void) {
    struct {
        int sif_art;
        int kolicina; // količina artikla sa šifrom sif_art na skladištu
        float cijena; // cijena pojedinačnog artikla sa šifrom sif_art
    } artikli[MAX] = ...;  
    // izostavljena je inicijalizacija strukture u kojoj je inicijalizirano upravo MAX elemenata
    
    int i;
    float ukupna_cijena;
    // (*) IZRAČUN VRIJEDNOSTI VARIJABLE ukupna_cijena
    printf("%5.2f\n", ukupna_cijena);
    return 0;
}
```

Napomena: početak i završetak programa prikazan u tekstu zadatka nije potrebno pisati. Pretpostavite da su u
izostavljenom dijelu vezanim uz inicijalizaciju strukture ispravno popunjeni svi članovi polja `artikli`.

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](5.c)

## 6. Zadatak

Učitati vrijednost dimenzije kvadratne matrice `n` (dvodimenzijsko polje). Ako `n` nije prirodan broj, ponoviti
učitavanje.

Potom po retcima učitati vrijednosti članova ovog polja.

Nakon toga treba sve elemente sporedne dijagonale u retcima s neparnim indeksom retka zamijeniti jedinicama, a sve
elemente sporedne dijagonale u retcima s parnim indeksom retka zamijeniti nulama. Ostali elementi ostaju nepromijenjeni.

Nakon provedenog postupka treba ispisati izmijenjenu matricu. Zadatak treba riješiti bez upotrebe pomoćnog polja. Kod
ispisa strogo paziti na razmake i nove retke.

Primjeri izvršavanja programa:

```
Upisite·n·>·3⏎
3·2·1⏎
5·9·3⏎
1·2·3⏎
Rezultat:↵
··3··2··0↵
··5··1··3↵
··0··2··3↵
```

```
Upisite·n·>·4⏎
0·0·0·1⏎
1·2·3·0⏎
-5·-5·-5·-5⏎
1·2·3·0↵
Rezultat:↵
··0··0··0··0↵
··1··2··1··0↵
·-5··0·-5·-5↵
··1··2··3··0↵
```

```
Upisite·n·>·1⏎
-23⏎
Rezultat:↵
··0↵
```

```
Upisite·n·>·-1⏎
Upisite·n·>·1⏎
5⏎
Rezultat:↵
··0↵
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](6.c)
