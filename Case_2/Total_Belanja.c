#include <stdio.h>

// Deklarasi fungsi konversi
void konversi(int Ribu, int Transaksi);

// Fungsi utama
int main()
{
    // Deklarasi variabel
    int Ribu;
    int Transaksi;

    printf("Tugas Personal Total Belanja\n");

    // Membaca input dari pengguna
    printf("Masukan Total Belanjaan Anda Berapa Ribu = ");
    scanf("%d", &Ribu);

    printf("Masukan Berapak Kali Transaksi Anda Dalam 1 Bulan = ");
    scanf("%d", &Transaksi);

    // Memanggil fungsi konversi
    konversi(Ribu, Transaksi);

    return 0;
}

// Fungsi konversi
void konversi(int Ribu, int Transaksi)
{
    // Deklarasi variabel Total_Belanja
    int Total_Belanja;

    // Menghitung total belanja berdasarkan kondisi
    if (Ribu < 200000)
    {
        Total_Belanja = Ribu;
    }
    // Saya tambahkan menjadi maksimal 550000 karena aneh apabila 550000 tidak terkena diskon
    else if (Ribu >= 200000 && Ribu < 550000)
    {
        if (Transaksi >= 4)
        {
            Total_Belanja = Ribu * 0.70;
        }
        else
        {
            Total_Belanja = Ribu * 0.90;
        }
    }
    //perhitungan diskon 550000 sampai dengan 1000000 = 20% dan bila 4 kali diskon 40%
    else if (Ribu >= 550000 && Ribu <= 1000000)
    {
        if (Transaksi >= 4)
        {
            Total_Belanja = Ribu * 0.60;
        }
        else
        {
            Total_Belanja = Ribu * 0.80;
        }
    }
    //perhitungan diskon 1000000 = 30% dan bila 4 kali diskon 50%
    else if (Ribu > 1000000)
    {
        if (Transaksi >= 4)
        {
            Total_Belanja = Ribu * 0.50;
        }
        else
        {
            Total_Belanja = Ribu * 0.70;
        }
    }

    /* Optional apabila maksud bapak diskon 20 persen dipisah dengan diskon sebelumnya, 
    cukup hapus code yang sama seperti di bawah pada bagian atas komentar ini, Terima Kasih.

    if (Transaksi >= 4)
    {
        Total_Belanja = Total_Belanja * 0.80;
    }

    */

    // Menampilkan total belanja
    printf("Jumlah Total Belanja Anda = %d Ribu Rupiah\n", Total_Belanja);
}