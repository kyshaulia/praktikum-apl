#include <iostream>
using namespace std;

int main() {
    string username = "KeyshaKhoirunnisaAuliaKhotim";
    string password = "2409106077";
    string username_input;
    string password_input;
    int salah = 0;

    while (salah < 3) {
        cout << "Masukkan username : ";
        cin >> username_input;
        cout << "Masukkan password : ";
        cin >> password_input;

        if (username_input == username) {
            if (password_input == password) {
                cout << "Login Berhasil!";
                break;
            }          
        }
        cout << "\nLogin Gagal! Coba lagi\n";
        salah++;

    }

    if (salah == 3) {
        cout << "Kesempatan Habis! Program Berhenti.";
        return 0;
    }

    int pilihan;
    do {
        cout << "\n===Menu Utama===\n";
        cout << "1. Konversi Uang\n";
        cout << "2. Konversi Jarak\n";
        cout << "3. Konversi Waktu\n";
        cout << "4. Log Out\n";
        cout << "Masukkan pilihan : ";
        cin >> pilihan ;
        
        if (!(pilihan >= 1 or pilihan <= 4)) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }
        if (pilihan == 1) {
            int pilihan_uang;
            double nilai, hasil;
            double USD_Rate = 15500.0, EUR_Rate = 17000.0;
            do {
                cout << "\n===Konversi Uang===\n";
                cout << "1. Rupiah ke Dolar AS\n";
                cout << "2. Rupiah ke Euro\n";
                cout << "3. Dolar AS ke Rupiah\n";
                cout << "4. Dolar AS ke Euro\n";
                cout << "5. Euro ke Rupiah\n";
                cout << "6. Euro ke Dolar AS\n";
                cout << "7. Kembali\n";
                cout << "Pilihan : ";
                cin >> pilihan_uang;
                if (pilihan_uang == 1) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / USD_Rate;
                    cout << hasil;
                } 
                else if (pilihan_uang == 2) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / EUR_Rate;
                    cout << hasil;
                } 
                else if (pilihan_uang == 3) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * USD_Rate;
                    cout << hasil;
                } 
                else if (pilihan_uang == 4) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * (USD_Rate / EUR_Rate);
                    cout << hasil;
                } 
                else if (pilihan_uang == 5) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * EUR_Rate;
                    cout << hasil;
                } 
                else if (pilihan_uang == 6) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * (EUR_Rate / USD_Rate);
                    cout << hasil;
                } 
                else if (pilihan_uang == 7) {
                    cout << "Keluar";
                    break;
                } 
                else {
                    cout << "Pilihan tidak valid! Coba Lagi\n";
                    continue;
                }
            } while (pilihan_uang != 7);
        }
        if (pilihan == 2) {
            int pilihan_jarak;
            double nilai, hasil;
            do {
                cout << "\n=== Konversi Jarak ===\n";
                cout << "1. Km ke Meter\n";
                cout << "2. Km ke Cm\n";
                cout << "3. Meter ke Km\n";
                cout << "4. Meter ke Cm\n";
                cout << "5. Cm ke Km\n";
                cout << "6. Cm ke Meter\n";
                cout << "7. Kembali\n";
                cout << "Pilihan : ";
                cin >> pilihan_jarak;

                if (pilihan_jarak == 1) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 1000;
                    cout << hasil, "m\n";
                } 
                else if (pilihan_jarak == 2) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 100000;
                    cout << hasil << "cm\n";
                } 
                else if (pilihan_jarak == 3) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 1000;
                    cout << hasil << "km\n";
                } 
                else if (pilihan_jarak == 4) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 100;
                    cout << hasil << "cm\n";
                } 
                else if (pilihan_jarak == 5) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 100000;
                    cout << hasil << "km\n";
                } 
                else if (pilihan_jarak == 6) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 100;
                    cout << hasil << "m\n";
                } 
                else if (pilihan_jarak == 7) {
                    break;
                } 
                else {
                    cout << "Pilihan tidak valid!";
                    continue;
                }
            } while (pilihan_jarak != 7);
        }
        if (pilihan ==3) {
            int pilihan_waktu;
            double nilai, hasil;
            do {
                cout << "\n=== Konversi Waktu ===\n";
                cout << "1. Jam ke Menit\n";
                cout << "2. Jam ke Detik\n";
                cout << "3. Menit ke Jam\n";
                cout << "4. Menit ke Detik\n";
                cout << "5. Detik ke Jam\n";
                cout << "6. Detik ke Menit\n";
                cout << "7. Kembali\n";
                cout << "Pilihan : ";
                cin >> pilihan_waktu;

                if (pilihan_waktu == 1) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 60;
                    cout << hasil << "menit";
                } else if (pilihan_waktu == 2) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 3600;
                    cout << hasil << "detik";
                } else if (pilihan_waktu == 3) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 60;
                    cout << hasil << "jam";
                } else if (pilihan_waktu == 4) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai * 60;
                    cout << hasil << "detik";
                } else if (pilihan_waktu == 5) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 3600;
                    cout << hasil << "jam";
                } else if (pilihan_waktu == 6) {
                    cout << "Masukkan nilai : ";
                    cin >> nilai;
                    hasil = nilai / 60;
                    cout << hasil << "menit";
                } else if (pilihan_waktu == 7) {
                    break;
                } else {
                    cout << "Pilihan tidak valid!";
                    continue;
                }
            } while (pilihan_waktu != 7);
        }
        if (pilihan == 4) {
            cout << "Logout berhasil\n";
        }        
        
    } while (pilihan !=4);
    return 0;
}