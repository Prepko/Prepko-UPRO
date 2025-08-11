## 1. Zadatak

S tipkovnice učitati četveroznamenkasti broj (nije potrebno provjeravati ispravnost upisa). Ako je zbroj znamenke
tisućica i znamenke desetica jednak zbroju znamenke stotica i znamenke jedinica, potrebno je ispisati "Provjera je
uspješna!", a u suprotnom treba ispisati apsolutnu vrijednost razlike tih dviju suma.

Primjer izvršavanja programa:

```
Unesite·cetveroznamenkasti·broj·>·1441↵
Provjera·je·uspjesna!↵
Unesite·cetveroznamenkasti·broj·>·1234↵
Apsolutna·razlika·suma·je·2↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](1.c)

## 2. Zadatak

S tipkovnice učitati prirodni broj koji predstavlja količinu novca u kunama. Na zaslon ispisati kombinaciju kovanica od
5, 2 i 1 kune koje čine taj iznos. Kovanice je potrebno odabrati tako da je ukupan broj kovanica minimalan.

Primjer izvršavanja programa:

```
Upisite·iznos·u·kn·>·63↵
Kovanice:↵
12·x·5·kn↵
1·x·2·kn↵
1·x·1·kn↵
```

```
Upisite·iznos·u·kn·>·4↵
Kovanice:↵
2·x·2·kn↵
```

```
Upisite·iznos·u·kn·>·11↵
Kovanice:↵
2·x·5·kn↵
1·x·1·kn↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](2.c)

## 3. Zadatak

S tipkovnice učitati troznamenkasti prirodni broj. Na zaslon ispisati sumu parnih znamenki učitanog broja umanjenu za
sumu neparnih znamenki.

Primjer izvršavanja programa:

```
Upisite·troznamenkasti·prirodni·broj·>·678↵
Rezultat:·7↵
```

```
Upisite·troznamenkasti·prirodni·broj·>·521↵
Rezultat:·-4↵
```

```
Upisite·troznamenkasti·prirodni·broj·>·468↵
Rezultat:·18↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](3.c)

## 4. Zadatak

S tipkovnice učitati prirodan broj koji predstavlja broj dana (uneseni broj nije potrebno provjeravati). Potrebno je
pretvoriti zadani broj dana u odgovarajući broj godina, tjedana i dana. Zanemarite postojanje prijestupnih godina (
pretpostavite da svaka godina ima 365 dana).

Primjer izvršavanja programa:

```
Unesite·broj·dana·>·720↵
Unos·odgovara·razdoblju·od·1·godina·50·tjedana·i·5·dana↵
```

```
Unesite·broj·dana·>·24↵
Unos·odgovara·razdoblju·od·0·godina·3·tjedana·i·3·dana↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](4.c)

## 5. Zadatak

Napišite program koji učitava prirodni broj n. Program treba ispisati s kojim je od sljedećih brojeva broj n djeljiv: 2,
3, 5 i 7.

Oblik ispisa programa:

```
Broj·je·djeljiv·s·brojem·<broj>.
```

Ukoliko nije djeljiv niti sa jednim od brojeva, potrebno je ispisati:

```
Broj·nije·djeljiv·s·brojevima·2,·3,·5,·7.
```

Ukoliko broj nije prirodan broj, potrebno je ispisati:

```
Unesen·je·pogresan·broj!
```

Primjeri izvršavanja programa:

```
Unesite·broj·>·10↵
Broj·je·djeljiv·s·brojem·2.↵
Broj·je·djeljiv·s·brojem·5.↵
```

```
Unesite·broj·>·0↵
Unesen·je·pogresan·broj!
```

```
Unesite·broj·>·1↵
Broj·nije·djeljiv·s·brojevima·2,·3,·5,·7.
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](5.c)

## 6. Zadatak

Vrijednost pH je broj koji služi kao mjera kiselosti vodenih otopina te može poprimiti vrijednosti iz intervala [0, 14].
Ako je pH vrijednost manja od 7 kažemo da je otopina kisela. Ako je vrijednost veća od 7 onda je otopina lužnata. Ako je
pH vrijednost jednaka 7 otopina je neutralna.

Napišite program koji će s tipkovnice pročitati cijeli broj (zanemarite realne brojeve) koji predstavlja pH vrijednost i
koji će ispisati je li otopina kisela, neutralna ili lužnata. U slučaju unosa broja izvan dozvoljenog intervala,
ispišite "KRIVI UNOS".

Primjeri izvršavanja:

```
Unesite·pH·vrijednost·otopine·>·3↵
Otopina·je·kisela.
```

```
Unesite·pH·vrijednost·otopine·>·7↵
Otopina·je·neutralna.
```

```
Unesite·pH·vrijednost·otopine·>·11↵
Otopina·je·luznata.
```

```
Unesite·pH·vrijednost·otopine·>·17↵
KRIVI·UNOS
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](6.c)

## 7. Zadatak

Ivica vas je zamolio da napišete program koji će izgenerirati jednostavnu brojalicu "eci peci pec eci peci pec
eci ..." (primijetite da se iste tri riječi ponavljaju u istom redoslijedu). Napišite program koji će pročitati cijeli
broj n s tipkovnice te će ispisati prvih n riječi brojalice. U slučaju unosa broja, koji je manji ili jednak nula
ispišite "KRIVI UNOS".

Primjeri izvršavanja:

```
Unesite·broj·rijeci·brojalice·>·1↵
eci·
```

```
Unesite·broj·rijeci·brojalice·>·3↵
eci·peci·pec·
```

```
Unesite·broj·rijeci·brojalice·>·7↵
eci·peci·pec·eci·peci·pec·eci·
```

```
Unesite·broj·rijeci·brojalice·>·-5↵
KRIVI·UNOS
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](7.c)

## 8. Zadatak

S tipkovnice učitati neparan cijeli broj `n`. Ako je učitan paran broj, ispisati poruku `Neispravan·unos!` i prekinuti s
izvršavanjem programa.

Za učitani broj `n`, potrebno je ispisati niz znakova `*`, gdje konačni ispis predstavlja uzorak dijamanta. Broj `n`
predstavlja najveću duljinu niza `*`, koji se nalazi na sredini ispisa.

Primjeri izvršavanja programa:

```
Unesite·broj·>·1↵
*↵
```

```
Unesite·broj·>·3↵
·*↵
***↵
·*↵
```

```
Unesite·broj·>·8↵
Neispravan·unos!
```

```
Unesite·broj·>·9↵
....*↵
...***↵
..*****↵
.*******↵
*********↵
.*******↵
..*****↵
...***↵
....*↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](8.c)

## 9. Zadatak

Napišite program koji učitava dva prirodna broja `a` i `b` iz intervala `[1, 1000]`. Broj `a` predstavlja najmanju
vrijednost, a broj `b` predstavlja najveću vrijednost niza prirodnih brojeva [a, b].

Program treba ispisati koliki je zbroj svakog trećeg prirodnog broja u intervalu `[a, b]`. Oblik ispisa je sljedeći:

```
Zbroj·svakog·trećeg·broja·iznosi:·<zbroj>
```

Ukoliko broj `a` ili broj `b` ne pripada intervalu `[1, 1000]`, potrebno je ispisati sljedeću poruku:

```
Brojevi·moraju·biti·u·intervalu·[1,·1000].
```

U slučaju da se dogodi da je broj `a` veći ili jednak broju `b`, program treba ispisati:

```
Prvi broj mora biti manji od drugog broja.
```

Primjeri izvršavanja programa:

```
Upisite·dva·prirodna·broja·iz·intervala·[1,·1000]·>·1·10↵
Zbroj·svakog·treceg·broja·iznosi:·18
```

```
Upisite·dva·prirodna·broja·iz·intervala·[1,·1000]·>·0·20↵
Brojevi·moraju·biti·u·intervalu·[1,·1000].
```

```
Upisite·dva·prirodna·broja·iz·intervala·[1,·1000]·>·10·1↵
Prvi·broj·mora·biti·manji·od·drugog·broja.
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](9.c)

