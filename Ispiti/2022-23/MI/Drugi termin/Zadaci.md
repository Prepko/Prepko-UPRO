## 1. Zadatak

Učitati n. Ako n u kontekstu problema nije ispravan, ispisati poruku `Neispravan n`.

Izračunati

$\sum_{i=1}^{n}\frac{1}{T_i}$

gdje je

$T_i = \sum_{j=1}^{i}j$

Ispisati rješenje s 9 decimala iza decimalne točke. Koristiti dvostruku preciznost.

Primjeri izvršavanja programa

```
Unesite n > 20⏎
1.904761905
```

```
Unesite n > -6⏎
Neispravan n
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](1.c)

## 2. Zadatak

Učitavati broj članova polja n, koji mora biti prirodni broj, sve dok se ne učita ispravna vrijednost. Učitati n članova
jednodimenzijskog cjelobrojnog polja. Presložiti polje tako da na početku polja budu svi neparni pa onda svi parni, u
međusobnom poretku u kojem su bili u inicijalnom polju. Ispisati modificirano polje.

Dopušteno je koristiti pomoćna polja.

Važno: Program mora završiti s

```c++
for (i = 0; i < n; i = i + 1) {
    printf("%d ", polje[i]);
}
return 0;
```

Primjeri izvršavanja programa:

```
Unesite·n:·3⏎
Unesite·clanove·polja:·1·2·5⏎
Modificirano polje:·1·5·2·
```

```
Unesite·n:·0⏎
Unesite·n:·1⏎
Unesite·clanove·polja:·12⏎
Modificirano polje:·12·
```

```
Unesite·n:·3⏎
Unesite·clanove·polja:·7·5·3⏎
Modificirano polje:·7·5·3·
```

```
Unesite·n:·4⏎
Unesite·clanove·polja:·4·2·8·18⏎
Modificirano polje:·4·2·8·18·
```

```
Unesite·n:·7⏎
Unesite·clanove·polja:·-23·8·15·3·9·5·10⏎
Modificirano polje:·-23·15·3·9·5·8·10·
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](2.c)

## 3. Zadatak

Učitati vrijednosti za broj redaka i stupaca `m` kvadratne matrice (tj. dvodimenzijskog polja cijelih brojeva). Ne treba
provjeravati je li upisana vrijednost ispravna.

Potom učitati vrijednosti članova cjelobrojnog polja po retcima.

Poredati (sortirati) članove polja na glavnoj dijagonali matrice od manjih prema većim. Ispisati sadržaj sortirane
matrice.

Primjeri izvršavanja programa (obratite pozornost da u drugom primjeru ima i negativnih brojeva):

```
Unesite·m·>·2⏎
4·3⏎
2·1⏎
Ispis:↵  
···1···3↵
···2···4↵
```

```
Unesite·m·>·3⏎
3·-1·4⏎
5·-3·-2⏎
2·1·-1⏎
Ispis:↵
··-3··-1···4↵
···5··-1··-2↵
···2···1···3↵
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](3.c)

## 4. Zadatak

Putem tipkovnice učitati niz ASCII znakova (string) duljine najviše 30 znakova. Znak za prelazak u novi red (new line,
NL), ako je učitan, izostaviti iz daljnje obrade. Ispisati redni broj (brojeći od nula) znakova čiji su ASCII kodovi
najmanji i najveći u učitanom nizu. Ako više znakova ima isti najmanji ili najveći ASCII kod, odabrati zadnji (
najdesniji) najmanjeg i prvi (najljeviji) najvećeg ASCII koda. Na kraju ispisati redom znakove od odabranog znaka
najmanjeg do odabranog znaka najvećeg ASCII koda, uključujući rubne (odabrane).

Primjeri izvršavanja:

```
Upisite·niz·>·!123·ABC·abc!⏎
imin·=·8,·imax·=·11↵
·abc
```

```
Upisite·niz·>·!abc·123·ABC!⏎
imin·=·8,·imax·=·3↵
·321·c
```

```
Upisite·niz·>·!cba·CBA·210!⏎
imin·=·8,·imax·=·1↵
·ABC·abc
```

Napomena:

- znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red"
- znak `⏎` da je pritisnuta tipku Enter (odnosno Return) od strane korisnika
- znak `·` da na tom treba ispisati prazninu (space)

[Rješenje zadatka](4.c)

## 5. Zadatak

Zadan je program koji broji koliko je puta učitan svaki broj iz zadanog intervala.
Upišite dio kôda koji nedostaje označen slovima XXXXXXXXXXXXXXXXXXXXXXXXXX, a odnosi se na polje koje se koristi za
određivanje frekvencije pojavljivanja brojeva.
Naravno, kôd mora raditi i ako se promjene granice intervala, tj. ako se promjene vrijednosti simboličkih konstanti
`D_GR` i `G_GR`.

```c++
#include <stdio.h>
#define D_GR 1137 // donja granica intervala
#define G_GR 1164 // gornja granica intervala

int main(void) {
    int broj;
    XXXXXXXXXXXXXXXXXXXXXXXXXX
    /* ucitavanje brojeva i inkrementiranje odgovarajucih brojaca */
    do {
        printf("Upisite broj u intervalu [%d, %d] > ", D_GR, G_GR);
        scanf("%d", &broj);
        if (broj >= D_GR && broj <= G_GR) {
            brojac[broj - D_GR] = brojac[broj - D_GR] + 1;
        }
    } while (broj >= D_GR && broj <= G_GR);
        printf("\n");
        /* ispis sadrzaja onih brojaca koji su veci od nule */
        int i;
        for (i = D_GR; i <= G_GR; i = i + 1) {
            if (brojac[i - D_GR] > 0) {
                printf("Broj %d se pojavio %d puta\n", i, brojac[i - D_GR]);
            }
        }
    return 0;
}
```

[Rješenje zadatka](5.c)

## 6. Zadatak

Napisati logički izraz u kojem se ne koristi logička operacija `!` (odnosno `NOT`) i koji je ekvivalentan (tj.
izračunava jednaki rezultat) sljedećem logičkom izrazu:

```c++
!(z >= x3 && z <= x2 || z > x1 && z < x4)
```

[Rješenje zadatka](6.c)
