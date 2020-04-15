# URA-Homework-5
Fakultet elektrotehnike Tuzla - Uvod u racunarske algoritme


## Napomena

U svim problemima koji slijede nije dozvoljena upotreba komandi i funkcija koje dosad nisu
korištene na predavanjima ili vježbama. Dozvoljena je upotreba kontejnera iz standardne
biblioteke (​std::vector​ i ​std::list​)​, kao i C nizova.

## Zadatak

**a)** Napisati funkciju koja implementira rekurzivni backtracking algoritam za
generisanje i ispisivanje svih binarnih brojeva od n cifara.
**b)** Napisati rekurzivnu funkciju koja generiše i ispisuje binarne brojeve sa n cifara
gdje su prva i zadnja cifra jednake 1.
Napisati program koji sa proizvoljnim parametrima testira funkcije implementirane u
dijelu problema pod (a) i (b).

## Zadatak

Trgovac vraća kupcu odre​đeni iznos korišćenjem najmanjeg mogućeg broja novčanica i
novičića. Na raspolaganju su mu novčanice od 11, 5 i 1 KM. U ovom slučaju se može
primijeniti pohlepni algoritam koji u svakom koraku uzima najveći mogući apoen takav da
ukupna do tada izbrojana suma ne prelazi zadatu. Tj., izabere se najveća novčanica koja ne
prelazi ukupnu sumu, stavlja se na listu za vraćanje, oduzme se od ukupnog iznosa te se
postupak ponavlja sve dok se ne vrati određen iznos.
Napisati ​ _greedy_ ​algoritam za rješavanje ovog problema. Da li će ovakav algoritam uvijek
vraćati optimalnu kombinaciju novčanica?

## Zadatak

Napisati funkciju koja implementira rekurzivni backtracking algoritam za generisanje putanje
kojom bi se štakor trebao kretati da iza​đe iz labirinta.
Labirint je dat kao N * N binarna matrica blokova gdje je izvorni blok gornji lijevi blok, tj.
Labirint [0] [0] i odredišni blok je donji desni kraj tj. Labirint [N-1] [N-1]. Štakor počinje od
izvora i mora doći do odredišta. Štakor se može kretati samo u dva smjera: naprijed i dolje.


U matrici labirinta, 0 znači da je blok mrtav kraj, a 1 znači da se blok može koristiti na putu
od izvora do odredišta. Imajte na umu da je to jednostavna verzija tipičnog problema s
labirintom. Npr.,, složenija verzija može biti da se štakor može kretati u 4 smjera, a složenija
verzija može biti s ograničenim brojem poteza.
Slijedi primjer labirinta.
Slijedi prikaz binarne matrice gore navedenog labirinta.
{1, 0, 0, 0}
{1, 1, 0, 1}
{0, 1, 0, 0}
{1, 1, 1, 1}
Sljedeći je labirint s označenom putanjom rješenja.
Slijedi matrica rješenja (izlaz programa) za gornji ulaz (matricu).
{1, 0, 0, 0}
{1, 1, 0, 0}
{0, 1, 0, 0}
{0, 1, 1, 1}
Svi elementi matrice koji su uključeni u putanju su označeni sa “1”.
Napisati program koji sa proizvoljnim parametrima testira implementiranu funkciju.


