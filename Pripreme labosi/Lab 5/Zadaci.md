## 1. Zadatak

Napisati funkciju za uvećanje osnovne plaće za iznos bonusa te istu konvertira u EUR sukladno fiksnom tečaju 7.53450.
Program se treba koristiti funkcijom PovecajKonvertiraj (tipa `int`) koja kao parametre prima:

- pokazivač na iznos osnovne plaće (u kunama) tipa `float` koji se koristi za izračun i vraćanje vrijednosti uvećane i
  konvertirane (u EUR) plaće,
- iznos bonusa (u kunama) tipa `int` za koji se osnovna plaća uvećava,
- pokazivač na postotak uvećanja plaće

Funkcija vraća vrijednost 1 ukoliko je povećanje značajno (veće ili jednako 10%) te prikazuje poruku:
`OBAVIJESTITI POREZNU!`. U protivnom funkcija vraća vrijednost 0.

Funkcija ne smije ništa ispisivati. Ne treba provjeravati ispravnost unosa.

Primjeri za testiranje funkcije:

```
Unesite·iznos·place:10000.00↵
Unesite·iznos·bonusa:555↵
Uvecana·placa:·1400.89·EUR·te·je·uvecanje·5.55·%↵
```

```
Unesite·iznos·place:10000.00↵
Unesite·iznos·bonusa:1000↵
Uvecana·placa:·1459.95·EUR·te·je·uvecanje·10.00·%↵
OBAVIJESTITI·POREZNU!↵
```

Napomena: potrebno je napisati samo traženu funkciju. `main()` funkciju nije potrebno pisati.

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](1.c)

## 2. Zadatak

Napisati funkciju getMinMax tipa `void` koja prima:

- pokazivač na jednodimenzionalno polje cjelobrojnih elemenata
- veličinu cjelobrojnog polja
- dva pokazivača na objekte tipa `int` (pokazivač na minimalnu vrijednost i pokazivač na maksimalnu vrijednost
  jednodimenzionalnog polja).

Funkcija treba naći najmanjeg i najvećeg člana ulaznog polja. Polje neće biti veće od 100 članova. Ne treba
provjeravati ispravnost unosa. Funkcija ne smije ništa ispisvati. Pogledajte primjere za dodatna pojašnjenja.

Primjeri pomoću kojih možete testirati funkcije:

```
Unesite·velicinu·polja:·10↵
Unesite·10·elemenata·u·polju:·-1·0·100·4·9·18·94·-35·10·20↵
Najmanji·element·u·polju:·-35↵
Najveci·element·u·polju:·100↵
```

```
Unesite·velicinu·polja:·5↵
Unesite·5·elemenata·u·polju:·-5·255·98·32·0↵
Najmanji·element·u·polju:·-5↵
Najveci·element·u·polju:·255↵
```

```
Unesite·velicinu·polja:·8↵
Unesite·8·elemenata·u·polju:·1·2·3·4·5·6·7·8↵
Najmanji·element·u·polju:·1↵
Najveci·element·u·polju:·8↵
```

Napomena: potrebno je napisati samo traženu funkciju. `main()` funkciju nije potrebno pisati.

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](2.c)

## 3. Zadatak

Napisati funkciju BrojSlovaZnamenaka (tipa `void`) koja kao parametre prima:

- niz znakova (string) imena `niz` maksimalne duljine od 100 znakova
- jedan pokazivač tipa `int` (parametar `brojSlova`) s vrijednosti `0`
- jedan pokazivač tipa `int` (parametar `brojZnamenaka`) s vrijednosti `0`

Funkcija treba:

- odrediti koliko ima slova u nizu znakova niz te vratiti rješenje koristeći pokazivač `brojSlova`
- odrediti koliko ima znamenaka u nizu znakova niz te vratiti rješenje koristeći pokazivač `brojZnamenaka`

Funkcija ne smije ništa ispisivati.

Primjeri pomoću kojih možete testirati funkciju:

```
Unesite·niz·znakova·>·abcdef123↵
6·3
```

```
Unesite·niz·znakova·>·ab1↵
2·1
```

```
Unesite·niz·znakova·>·OvoJeUlazniNizS15Slova↵
20·2
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](3.c)

## 4. Zadatak

Napisati funkciju naziva `sumaPotencija`, tipa `void`, koja kao parametre prima redom:

- tri parametra tipa `int` (parametri `a`, `b` i `c`)
- jedan parametar tipa `int` (parametar `n`)
- jedan pokazivač na objekt tipa `int` (parametar `rez1`)
- jedan pokazivač na objekt tipa `int` (parametar `rez2`)

Funkcija treba:

- izračunati sumu `n`-tih potencija vrijednosti parametara `a`, `b` i `c` te rezultat vratiti preko pokazivača `rez1`
- izračunati `n`-tu potenciju sume vrijednosti parametara `a`, `b` i `c` te rezultat vratiti preko pokazivača `rez2`

Funkcija ne smije ništa ispisivati. Pretpostavite da parametar n nikada neće biti manji od nule i da će parametri `a`,
`b`, `c` uvijek biti pozitivni brojevi.

Primjer 1: Za `a` = 1, `b` = 2, `c` = 3, `n` = 2 u trenutku izlaska iz funkcije, `rez1` treba pokazivati na objekt čija
je vrijednost 14, a `rez2` treba pokazivati na objekt čija je vrijednost 36.

Primjer 2: Za `a` = 2, `b` = 4, `c` = 1, `n` = 3 u trenutku izlaska iz funkcije, `rez1` treba pokazivati na objekt čija
je vrijednost 73, a `rez2` treba pokazivati na objekt čija je vrijednost 343.

[Rješenje](4.c)

## 5. Zadatak

1. Napisati funkciju `ProvjeriPravokutnik` tipa `int` koja će provjeriti jesu li nasuprotni vrhovi pravokutnika
   valjani (jesu li duljine stranica pravokutnika `> 0`).
2. Napisati funkciju `IzracunajDuljinuStranice` tipa `int` koja treba izračunati duljinu stranice koristeći dvije točke
   na jednoj osi.
3. Napisati funkciju `IzracunajOpseg` tipa `int` koja treba izračunati opseg pravokutnika.
4. Napisati funkciju `IzracunajPovrsinu` tipa `int` koja treba izračunati površinu pravokutnika.
5. Napisati funkciju `IzracunajOpsegPovrsinu` tipa `void` čiji su parametri:

- pokazivač tipa `int` (parametar `opseg`)
- pokazivač tipa `int` (parametar `povrsina`)

Funkcija treba:

- učitati dva nasuprotna vrha s tipkovnice (pogledajte u primjerima način učitavanja)
    - prije učitavanja prve točke potrebno je ispisati: `Unesite·koordinate·za·tocku·1·>·`
    - prije učitavanja druge točke potrebno je ispisati: `Unesite·koordinate·za·tocku·2·>·`
- koristeći funkciju `ProvjeriPravokutnik` provjeriti valjanost pravokutnika s obzirom na zadane nasuprotne vrhove
    - ukoliko pravokutnik nije valjan, koristeći pokazivače `opseg` i `povrsina`, vratiti vrijednosti `-1` (pogledajte u
      primjerima)
- koristeći funkciju `IzracunajDuljinuStranice` izračunati duljinu stranica `a` i `b`
- koristeći funkciju `IzracunajOpseg` izračunati opseg pravokutnika
- koristeći funkciju `IzracunajPovrsinu` izračunati površinu pravokutnika
- koristeći pokazivač `opseg` potrebno je vratiti izračunatu vrijednost za opseg pravokutnika
- koristeći pokazivač `površina` potrebno je vratiti izračunatu vrijednost za površinu pravokutnika

Primjeri pomoću kojih možete testirati funkciju:

```
Unesite·koordinate·za·tocku·1·>·0·0↵
Unesite·koordinate·za·tocku·2·>·2·2↵
8·4
```

```
Unesite·koordinate·za·tocku·1·>·0·0↵
Unesite·koordinate·za·tocku·2·>·0·0↵
-1·-1
```

```
Unesite·koordinate·za·tocku·1·>·1·3↵
Unesite·koordinate·za·tocku·2·>·2·9↵
14·6
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](5.c)

## 6. Zadatak

Napisati funkciju naziva najmanjiElement tipa `int` koja kao parametre prima:

- niz tipa `int`
- broj elemenata niza tipa `int` (parametar `n`)
- pokazivač na objekt tipa `int` (parametar `koliko`), broj najmanjih elemenata niza

Funkcija računa najmanji element niza te broj njegovih ponavljanja u nizu. Funkcija preko povratne vrijednosti treba
vratiti vrijednost najmanjeg elementa niza, a preko ulaznog parametra `koliko` broj njegovih ponavljanja.

Napisati glavni program koji s tipkovnice učitava broj elemenata niza te potom i elemente niza te poziva funkciju
najmanjiElement i ispisuje njezine rezultate prema predlošku niže.

Funkcija ne smije ništa ispisivati.

Primjeri izvršavanja programa:

```
Unesi·velicinu·niza·>·3↵
Unesi·elemente·niza·>·5·-1·2↵
Najmanji·element·-1·s·1·ponavljanja.
```

```
Unesi·velicinu·niza·>·4↵
Unesi·elemente·niza·>·1·5·2·1↵
Najmanji·element·1·s·2·ponavljanja.
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](6.c)

## 7. Zadatak

Napisati funkciju naziva anagram tipa `_Bool` koja kao parametre prima:

- dva parametra tipa niz znakova (string) (parametri `s1` i `s2`), dvije ulazne riječi
- pokazivač na objekt tipa `int` (parametar `isti`), brojač podudarajućih znakova

Funkcija provjerava jesu li dvije zadane riječi anagrami. Anagram je lingvistička igra ili fenomen u kojem se
preuređivanjem slova jedne riječi ili fraze dobiva nova riječ ili fraza, pri čemu se koriste sva originalna slova bez
dodavanja ili izostavljanja (npr. trava-vrata-vatra).

Funkcija preko vrijednosti treba vratiti:

- 1 - ukoliko su ulazne riječi anagrami
- 0 - ukoliko ulazne riječi nisu anagrami

Funkcija također preko ulaznog parametra `isti` vraća broj znakova u kojima se dvije riječi podudaraju.

Napisati glavni program koji s tipkovnice učitava dvije riječi (svaka maksimalne duljine 20 znakova), te ispisuje jesu
li riječi anagrami te u koliko se znakova podudaraju. Funkcija treba biti case-sensitive (znakovi 'a' i 'A' nisu
podudarajući znakovi).

Funkcija ne smije ništa ispisivati.

Primjeri izvršavanja programa:

```
Unesi·dvije·rijeci·>·trava·vatra↵
Anagrami.↵
Broj·podudaranja:·5
```

```
Unesi·dvije·rijeci·>·cat·Act↵
Nisu·anagrami.↵
Broj·podudaranja:·2
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](7.c)

## 8. Zadatak

Napisati funkciju naziva IzracunajRezultantu tipa `void`, koja kao parametre prima:

- dva pokazivača tipa `float`, (parametri `sila1` i `sila2`), koji predstavljaju veličine dviju sila u Newtonima,
- jedan pokazivač tipa `float` (parametar `kut`), koji predstavlja kut između sila u stupnjevima,
- jedan pokazivač tipa `float` (parametar `rezultanta`), koji će spremiti izračunatu rezultantnu silu.

Funkcija računa rezultantnu silu prema formuli:

$F_R=\sqrt{F_1^2+F_2^2+2\cdot F_1\cdot F_2\cdot\cos(\theta)}$

Napisati glavni program koji:

- s tipkovnice učitava veličine sila te kut između njih
- poziva funkciju IzracunajRezultantu
- ispisuje izračunatu rezultantnu silu za unesene vrijednosti s točno dvije decimale.
  Primjeri izrvšavanja programa:

```
Unesite·prvu·silu·(u·Newtonima):·10↵
Unesite·drugu·silu·(u·Newtonima):·15↵
Unesite·kut·između·sila·(u·stupnjevima):·90↵
Rezultanta·sila·iznosi:·18.03·N↵
```

```
Unesite·prvu·silu·(u·Newtonima):·25↵
Unesite·drugu·silu·(u·Newtonima):·25↵
Unesite·kut·između·sila·(u·stupnjevima):·0↵
Rezultanta·sila·iznosi:·50.00·N↵
```

```
Unesite·prvu·silu·(u·Newtonima):·40↵
Unesite·drugu·silu·(u·Newtonima):·10↵
Unesite·kut·između·sila·(u·stupnjevima):·180↵
Rezultanta·sila·iznosi:·30.00·N↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](8.c)

## 9. Zadatak

Napisati funkciju naziva PomicniProsjek tipa `void` koja kao parametre prima:

- pokazivač na niz tipa `double` (parametar `ulaz`) koji predstavlja ulazni niz,
- pokazivač na niz tipa `double` (parametar `izlaz`) u kojem se spremaju rezultati filtriranja,
- pokazivač na int (parametar `n`) koji označava broj elemenata ulaznog niza,
- pokazivač na int (parametar `prozor`) koji označava veličinu prozora filtra.

Pomični prosjek se računa prema formuli:

$SMA_k=\frac{1}{k}\sum_{i=n-k+1}^{n}p_i\quad$

Napisati glavni program koji:

- Učitava ulazni niz i veličinu prozora k od korisnika.
- Poziva funkciju PomicniProsjek za izračun pomičnog prosjeka.
- Ispisuje ulazni niz i filtrirani niz s točno dvije decimale.

Primjeri izrvšavanja programa:

```
Unesite·broj·elemenata·ulaznog·niza:·4↵
Unesite·elemente·ulaznog·niza:↵
1·2·3·4↵
Unesite·velicinu·prozora:·4↵
Ulazni·niz:·1.00·2.00·3.00·4.00↵
Filtrirani·niz:·1.00·1.50·2.00·2.50↵
```

```
Unesite·broj·elemenata·ulaznog·niza:·6↵
Unesite·elemente·ulaznog·niza:↵
10·20·30·40·50·60↵
Unesite·velicinu·prozora:·3↵
Ulazni·niz:·10.00·20.00·30.00·40.00·50.00·60.00↵
Filtrirani·niz:·10.00·15.00·20.00·30.00·40.00·50.00↵
```

```
Unesite·broj·elemenata·ulaznog·niza:·5↵
Unesite·elemente·ulaznog·niza:↵
5·10·15·20·25↵
Unesite·velicinu·prozora:·2↵
Ulazni·niz:·5.00·10.00·15.00·20.00·25.00↵
Filtrirani·niz:·5.00·7.50·12.50·17.50·22.50↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](9.c)

## 10. Zadatak

Napisati funkciju naziva Ekstrem tipa `_Bool`, koja učitava koeficijente kvadratne funkcije (počevši od najveće
potencije). Funkcija treba odrediti koordinate (x,y) ekstrema kvadratne funkcije preko pokazivača. Funkcija prima:

- dva pokazivača na objekt tipa `float` (parametar `x` i parametar `y`)

Funkcija preko vrijednosti treba vratiti:

- 1 - ukoliko je ekstrem minimum funkcije
- 0 - ukoliko je ekstrem maksimum funkcije

Napisati glavni program koji ispisuje vrstu ekstrema te određene koordinate. Primjeri izvršavanja programa:

```
Upisite·koeficijente·kvadratne·funkcije·>·1·-5·6↵
Funkcija·ima·minimum·u·(2.50,·-0.25)↵
```

```
Upisite·koeficijente·kvadratne·funkcije·>·-1·0·0↵
Funkcija·ima·maksimum·u·(0.00,·0.00)↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](10.c)

## 11. Zadatak

Napisati funkciju naziva ProvjeriLozinku tipa `int` koja kao parametre prima:

- parametar tipa `char` (parametar `password`)
- tri pokazivača tipa `int` (parametri `brVelikih`, `brBrojeva`, `brSpec`) Funkcija prebrojava koliko u upisanoj lozinci
  ima velikih slova, brojeva te specijalnih znakova. Radi jednostavnosti pretpostavite da se od specijalnih znakova mogu
  pojaviti samo !?*#. Funkcija preko vrijednosti treba vratiti broj znakova u zadanoj lozinci.

Napisati glavni program koji s tipkovnice učitava lozinku (maksimalne duljine 10 znakova), te ispisuje je li lozinka
ispravna. Lozinka je ispravna ukoliko:

- sadrži točno 10 znakova
- sadrži barem 2 velika slova
- sadrži barem 2 broja
- sadrži barem 1 specijalni znak

Ukoliko lozinka nije ispravna, ispisuje koji zahtjev nije zadovoljen.

Primjeri izvršavanja programa:

```
Upisite·lozinku·>·1LozinkA9?↵
Lozinka·je·ispravna!↵
```

```
Upisite·lozinku·>·Lozinka↵
Lozinka·je·prekratka!↵
```

```
Upisite·lozinku·>·#Dobarpass↵
Nema·dovoljno·velikih·slova!↵
Nema·dovoljno·brojeva!↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje](11.c)
