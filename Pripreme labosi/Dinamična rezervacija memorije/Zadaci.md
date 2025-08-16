## 1. Zadatak

Napišite program koji dinamički alocira memoriju za polje cijelih brojeva, a potom u polje s dinamički alociranom
memorijom umeće više novih elemenata na željenu poziciju i ažurira broj elemenata polja (parametar size).

U glavnom programu korisnik prvo unosi početnu veličinu polja i njegove elemente. Zatim program traži od korisnika da
unese broj elemenata koje želi dodatno umetnuti u to polje, te same elemente koje želi umetnuti. Nakon toga, korisnik
unosi poziciju od koje želi umetnuti nove elemente (elementi se unose od navedene pozicije redom). Umetanje elemenata
provodi se u glavnom programu.

Program također mora ispisati poruku o uspješnosti umetanja - "Elementi su uspješno umetnuti" ili "Neispravna pozicija"
u slučaju da korisnik želi umetnuti elemente na krivu poziciju. Nakon umetanja, potrebno je ispisati i ažurirano polje.

Primjeri izvršavanja programa:

```
Unesite·inicijalnu·velicinu·polja:·3↵  
Unesite·3·elementa:↵
10·20·30↵  
↵
Unesite·broj·elemenata·koje·zelite·umetnuti:·2↵
Unesite·poziciju·od·koje·zelite·umetnuti·elemente·(0·do·3):·1↵
Unesite·2·elementa·koja·zelite umetnuti:↵
1·2
Elementi·su·uspješno·umetnuti↵  
Polje·nakon·umetanja:·10·1·2·20·30↵  
```

```
Unesite·inicijalnu·velicinu·polja:·3↵  
Unesite·3·elementa:↵
10·20·30↵  
↵
Unesite·broj·elemenata·koje·zelite·umetnuti:·2↵
Unesite·poziciju·od·koje·zelite·umetnuti·elemente·(0·do·3):·5↵
Neispravna·pozicija!↵  
Polje·nakon·umetanja:·10·20·30↵  
```

Napomena: Osigurajte pravilnu alokaciju memorije i obratite pažnju na rubne slučajeve kao što su nevažeće pozicije.
Oslobodite dodijeljenu memorije kako biste izbjegli curenje memorije.

Napomena: Uočite da ako unesete neispravnu poziciju od koje želite umetnuti nove elemente, program ne traži unos novih
elemenata.

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](1.c)

## 2. Zadatak

Napišite program koji će učitavati riječ po riječ sve dok se ne učita riječ koja završava sa znakom '.'. Nakon unosa
zadnje riječi, potrebno je ispisati sve riječi u obliku jedne rečenice (sve riječi moraju biti odvojene razmakom).
Duljina jedne riječi bit će kraća od 20 znakova. Broj riječi u rečenici nije unaprijed poznat.

PRIMJER

ULAZ

```
Ovo↵
je↵
recenica.↵
```

IZLAZ

```
Ovo·je·recenica.·
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](2.c)

## 3. Zadatak

Napisati program koji korisniku omogućava upis bankovnih transakcija provedenih u posljednjih n dana, a potom ispisuje
te transakcije i trenutno stanje računa.

Program traži od korisnika da upiše broj dana za koje želi stvoriti ispis transakcija n, zatim da za svaki od tih dana (
počevši od najdaljeg) unese broj transakcija provedenih u tom danu.
Prilikom unosa broja transakcija u svakom danu potrebno je dinamički proširivati 1D polje popisTransakcija tipa
pokazivač na float, nakon čega korisnik upisuje iznose transakcija koji se spremaju pomoću polja popisTransakcija.

Nakon završetka unosa transakcija za sve dane, transakcije treba ispisati obrnutim redoslijedom, počevši od najnovijih
prema najstarijima.
Na kraju treba ispisati trenutno stanje računa koje je jednako zbroju svih transakcija u posljednjih n dana (transakcije
s pozitivnim predznakom predstavljaju uplate, a one s negativnim predznakom isplate).

Po završetku izvršavanja programa potrebno je osloboditi svu alociranu memoriju.

Primjer izvršavanja programa:

```
Unesite·broj·dana·za·koji·zelite·stvoriti·popis·transakcija:·2↵
Unesite·broj·transakcija·provedenih·prije·2·dana:·3↵
Transakcija·1·:·560.00↵
Transakcija·2·:·-3.99↵
Transakcija·3·:·-15.23↵
Unesite·broj·transakcija·provedenih·prije·1·dana:·2↵
Transakcija·1·:·-16.00↵
Transakcija·2·:·-0.30↵
↵
Popis·transakcija:↵
-0.30↵
-16.00↵
-15.23↵
-3.99↵
560.00↵
Stanje·racuna:·524.48↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](3.c)

## 4. Zadatak

Napišite program za praćenje portfelja dionica. Program treba omogućiti korisniku unos informacija o dionicama koje želi
pratiti. Za svaku dionicu treba zabilježiti sljedeće informacije:

- simbol - simbol dionice (npr., AAPL za Apple Inc.), znakovni niz max 10 znakova
- broj_dionica - količinu dionica koje korisnik posjeduje tipa int
- cijena - trenutnu cijenu dionice tipa `float`

Program treba imati 3 opcije rada te ovisno koji se broj unese ta će se opcija odraditi.

- Opcija 1. Unos nove dionice u portfelj: simbol, broj dionica i cijena
- Opcija 2. Ispis informacija o dionicama u portfelju u obliku: `Simbol: AAPL | Broj dionica: 10 | Cijena: 100.00`
- Opcija 3. Izlaz iz programa. Prije izlaza iz programa je potrebno ispisati ukupnu vrijednost portfelja u obliku:
  `Ukupna vrijednost portfelja iznosi: 1000.00`

Nakon završetka izvršavanja odabrane opcije, korisnika se ponovno pita koju opciju želi. Taj proces traje dok korisnik
ne odabere opciju 3. U slučaju da korisnik unese opciju koja nije jedna od ponuđene tri opcije, program treba ispisati
`Nepoznata opcija. Molimo odaberite ponovno.` te ponoviti opcije.

Korisnik započinje s praznim portfeljem te ne zna unaprijed koliko će dionica imati u svome portfelju.

Primjer izvršavanja programa:

Opcije:

```
1. Dodajte novu dionicu 
2. Ispis portfelja 
3. Izlaz 
Odaberite opciju: 1 
Unesite simbol dionice: AAPL 
Unesite kolicinu dionica koje posjedujete: 10 
Unesite trenutacnu cijenu dionice: 100.00 
Opcije: 
1. Dodajte novu dionicu 
2. Ispis portfelja 
3. Izlaz 
Odaberite opciju: 1 
Unesite simbol dionice: MSFT 
Unesite kolicinu dionica koje posjedujete: 5 
Unesite trenutacnu cijenu dionice: 200.00 
Opcije: 
1. Dodajte novu dionicu 
2. Ispis portfelja 
3. Izlaz 
Odaberite opciju: 2 
Simbol: AAPL | Broj dionica: 10 | Cijena: 100.00 
Simbol: MSFT| Broj dionica: 5 | Cijena: 200.00 
Opcije: 
1. Dodajte novu dionicu 
2. Ispis portfelja 
3. Izlaz 
Odaberite opciju: 4 
Nepoznata opcija. Molimo odaberite ponovno. 
Opcije: 
1. Dodajte novu dionicu 
2. Ispis portfelja 
3. Izlaz 
Odaberite opciju: 3 
Ukupna vrijednost portfelja iznosi: 2000.00
```

[Rješenje zadatka](4.c)

## 5. Zadatak

Deklarirana je struktura:

```c++
struct zapis_s{
    char ime[20+1];
    char prezime[20+1];
    char sifra[10+1];
};
```

Napisati program koji će na početku ispisati izbornik te ovisno o odabranoj opciji izvršiti odgovarajuću akciju:

```
(1)·Dodaj·novi·element·polja↵
(2)·Ispisi·sve·elemente·polja↵
(3)·Kraj/zavrsni·ispis↵
```

Nakon obavljanja akcije, korisnik može ponavljati odabir (iste ili neke druge opcije) dok ne odabere opciju 3.
U slučaju unosa nepostojeće opcije (npr. 4 ili 5.), program treba ispisati poruku "Krivi odabir, probaj ponovo...".

Na početku izvršavanja programa jednodimenzijsko polje čiji su elementi strukture 'zapis_s' nema nijednog elementa.
Konačni broj elemenata polja nije unaprijed poznat, pa memoriju za pohranu elemenata polja treba dinamički zauzimati.

Ako odabere opciju 1, od korisnika se očekuje unos imena, prezimena dok šifru ne unosi, nju je potrebno generirati. Radi
jednostavnosti smatrati da ime i prezime ne sadržavaju bjeline.

Šifru treba generirati pozivom funkcije genSifra prototipa:

```c++
void genSifra(struct zapis_s *pointer, int n);
```

Funkcija treba generirati i zapisati u član strukture "sifra" niz od 10 slučajno odabranih ASCII znakova (kombinacija
malih slova i znamenki od '0' do '9').
Za generiranje svakog od 10 znakova šifre treba koristiti po jedan poziv funkcije rand().
Ako je vrijednost koju rand() generira neparna, tada je tu istu vrijednost (od rand()) potrebno transformirati u malo
slovo.
Ako je vrijednost koju rand() generira parna tada je tu vrijednost potrebno transformirati u znamenku.
Generator niza pseudoslučajnih projeva inicijalizirati u glavnom programu tako da mu se kao sjeme zada vrijednost 5000.

Nakon odabira opcije 3, treba osloboditi dinamički zauzetu memoriju i završiti s izvršavanjem.

Primjer izvršavanja programa:

```
(1)·Dodaj·novi·element·polja↵
(2)·Ispisi·sve·elemente·polja↵
(3)·Kraj/zavrsni·ispis↵
----------↵
==>·Unesi·odabir:·1↵
Upisi·ime·i·prezime·>·Petar·Peric↵
↵
Generirana·Sifra:·0jr8r48p8j↵
----------↵
==>·Unesi·odabir:·1↵
Upisi·ime i·prezime·>·Ante·Antic↵
↵
Generirana·Sifra:·0vzrl8hl8f↵
----------↵
==>·Unesi·odabir:·2↵
Elementi·polja:↵
[Ime:·Petar]·[Prezime:·Peric]·[Sifra:·0jr8r48p8j]↵
[Ime:·Ante]·[Prezime:·Antic]·[Sifra:·0vzrl8hl8f]↵
----------↵
==>·Unesi·odabir:·5↵
Krivi·odabir,·probaj·ponovo...↵
----------↵
==>·Unesi·odabir:·3↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](5.c)

## 6. Zadatak

Potrebno je napisati program za stvaranje telefonskog imenika korisnika.
Deklariran je sljedeći tip podatka koji će se koristiti za rad s podacima o kontaktima iz telefonskog imenika:

```c++
typedef struct {
    char ime[50];
    char prezime[50];
    char brojTelefona[15];
} kontakt_s;
```

Za generiranje novih kontakata potrebno je napisati funkciju stvoriKontakt. Funkcija kao parametre prima nizove znakova:
ime, prezime i broj telefona, zatim stvara novi Kontakt koristeći dinamičku alokaciju memorije, te vraća pokazivač na
stvorenu strukturu.

Prototip funkcije stvoriKontakt je:

```c++
kontakt_s *stvoriKontakt(char *ime, char *prezime, char *brojTelefona)
```

Potrebno je napisati i glavni program (main) u kojem se traži od korisnika da upiše broj novih kontakata koje želi
stvoriti, a zatim da i unese podatke na temelju kojih će se stvoriti novi kontakti koristeći funkciju stvoriKontakt.
Također, potrebno je stvoriti 1D polje "imenik" tipa pokazivač na Kontakt, veličine broja kontakata koje je zadao
korisnik. Prilikom svakog poziva funkcije stvoriKontakt, pokazivač koji funkcija vrati potrebno je spremiti u polje "
imenik". Nakon završetka unosa potrebno je ispisati sve kontakte iz imenika redoslijedom kojim su uneseni.

Na kraju, program treba osloboditi svu alociranu memoriju.

Primjer izvršavanja:

```
Unesite·broj·novih·kontakta·>·3↵
Unesite·ime·kontakta·1·>·Ana·Marija↵
Unesite·prezime·kontakta·1·>·Anić↵
Unesite·broj·telefona·kontakta·1·>·092/2345678↵
Unesite·ime·kontakta·2·>·Ivan↵
Unesite·prezime·kontakta·2·>·Ivić↵
Unesite·broj·telefona·kontakta·2·>·091/1234567↵
Unesite·ime·kontakta·3·>·Marko↵
Unesite·prezime·kontakta·3·>·Markić↵
Unesite·broj·telefona·kontakta·3·>·093/3456789↵
↵
Ispis·imenika:↵
Kontakt·1:·Ana·Anic,·092/2345678↵
Kontakt·2:·Ivan·Ivic,·091/1234567↵
Kontakt·3:·Marko·Markic,·093/3456789↵
```

Napomena: Znak `↵` ukazuje da na tom mjestu treba "ispisati skok u novi red" ili pritisnuti tipku Enter (odnosno
Return), a znak `·` da na tom mjestu treba ispisati prazninu (space).

[Rješenje zadatka](6.c)

## 7. Zadatak

Tekstna datoteka sadrži podatke o natjecateljima hackathona. Svaki redak datoteke sadrži sljedeće podatke odvojene
razmakom:

- Identifikator natjecatelja (cijeli broj).
- Dob natjecatelja (cijeli broj).
- Naziv vještine (niz znakova, bez bjelina).
- Godine iskustva (cijeli broj).

Zapisi datoteke odgovaraju strukturi hackathonCompetitor_s:

```c++
struct hackathonCompetitor_s {
    int idCompetitor;
    int age;
    char skillName[20 + 1];
    int experienceYears;
};
```

Potrebno je iz tekstne datoteke competitors.txt čitati podatke o natjecateljima i spremati ih u niz struktura
hackathonCompetitor.

Zatim prebrojati koliko ima natjecatelja s istom vještinom:

- Naziv vještine (niz znakova).
- Broj natjecatelja za tu vještinu (cijeli broj).

Zapisi odgovaraju strukturi skillNameCount_s:

```c++
struct skillNameCount_s {
    char skillName[20 + 1];
    int count;
};
```

Za svaku vještinu ispisati broj natjecatelja. Zapise poredati po broju natjecatelja silazno.

Primjer ispisa:

```
Broj·natjecatelja·za·vjestinu·C:·6↵
Broj·natjecatelja·za·vjestinu·Scala:·5↵
```

Napomene:

- Ne treba predati deklaracije strukture, niti naredbe #include.
- U prilogu je tekstna datoteka [competitors_example.txt](competitors_example.txt) pomoću koje možete testirati
  ponašanje izvan Edgara.
  Pri testiranju samo za ime datoteke (argument funkcije fopen) upišite competitors_example.txt umjesto competitors.txt.

[Rješenje zadatka](7.c)
