#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	a; // a adında integer tipinde bir değişken oluşturuyoruz.
	int b; // b adında integer tipinde bir değişken oluşturuyoruz.
	int rev; // rev adında integer tipinde bir değişken oluşturuyoruz.

	a = 0; // a değişkeninin değerini 0'a eşitliyoruz.
	b = size - 1; // b değişkeninin değerini size değişkeninin 1 eksiğine eşitliyoruz.
	while (a < size / 2) // Eğer a değişkeninin değeri size değişkeninin değerinin 2'ye bölümünden küçükse döngüye giriyoruz.
	{
		rev = tab[a]; // tab parametresinin a değerindeki indeksini rev değişkenine veriyoruz.
		tab[a] = tab[b]; // tab parametresinin b değerindeki indeksini tab parametresinin a değerindeki indekse veriyoruz.
		tab[b] = rev; // rev değişkeninin değerini tab parametresinin b değerindeki indekse veriyoruz.
		a++; // a değişkeninin değerini 1 arttırıyoruz.
		b--; // b değişkeninin değerini 1 azaltıyoruz.
	}
}

#include <stdio.h>
int main(void)
{
	int tab[]= {1,2,3,4};
    int size = 4;
    int i = 0;
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
}