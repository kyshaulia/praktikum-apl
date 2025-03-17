# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>
using namespace std;


int main () {
    string username = "KeyshaKhoirunnisaAuliaKhotim";
    string password = "2409106077";
    string username_input , password_input;
    int salah = 0;

    const int max_produk = 50;
    string namaproduk[max_produk] = {"Gamis", "Gamis", "Tunik", "Tunik", "Rok"}; 
    string warnaproduk[max_produk] = {"Hitam", "Biru","Maroon","Hitam", "Cream"};
    string ukuranproduk[max_produk] = {"S/M/L/XL", "S/M/L/XL", "S/M/L/XL", "S/M/L/XL", "S/M/L/XL"};
    string bahanproduk[max_produk] = {"Katun", "Katun", "Babydoll", "Babydoll", "Linen"};
    int hargaproduk[max_produk] = {145000, 145000, 130000, 130000, 90000};
    int stokproduk[max_produk] = {50, 45, 50, 50, 90};
    int jumlahProduk = 5;

    system ("cls");
    for(salah = 0; salah < 3; salah++) {
        cout << "username : ";
        cin >> username_input;
        cout << "password : ";
        cin >> password_input;

        if (username_input == username && password_input == password) {
            cout << "Login Berhasil!" << endl;
            break;
        } cout << "Login Gagal! Coba Lagi" << endl;
    }
    if (salah == 3) {
        cout << "Kesempatan Habis! Program Berhenti.";
        return 0;
    }
    
    system ("cls");
    string validasi_user;
    string usn_admin = "Keysha";
    string pw_admin = "077";
    string usn_admin_input, pw_admin_input;
    cout << "Apakah anda admin? (y/n) : ";
    cin >> validasi_user;
    system ("cls");
    if (validasi_user == "y") {
        for (salah = 0; salah < 3; salah++) {
            cout << "username admin : ";
            cin >> usn_admin_input;
            cout << "password admin : ";
            cin >> pw_admin_input;
        
            if (usn_admin == usn_admin_input && pw_admin == pw_admin_input) {
                cout << "Anda sebagai Admin!" << endl;
                break;
            } cout << "Anda bukan admin!" << endl;
        }
        if (salah == 3) {
            cout << "Kesempatan Habis! Program Berhenti";
            return 0;
        }
        system ("cls");
        int pilihan ;
        do {
            cout << "===Manajemen Produk Baju Muslimah===" << endl;
            cout << "1. Lihat Produk" << endl;
            cout << "2. Tambah Produk" << endl;
            cout << "3. Update Produk" << endl;
            cout << "4. Hapus Produk" << endl;
            cout << "5. Kembali" << endl;
            cout << "Masukkan pilihan : ";
            cin >> pilihan;
            system ("cls");
            if (pilihan == 1) {
                if (jumlahProduk == 0) {
                    cout << "Tidak ada produk yang tersedia" << endl;
                    continue;
                }
                cout << "========Daftar Produk========" << endl;
                for (int i = 0; i < jumlahProduk; i++) {
                    cout << "Produk ke-" << i + 1 << endl;
                    cout << "Produk         : " << namaproduk[i] << endl;
                    cout << "Warna          : " << warnaproduk[i] << endl;
                    cout << "Ukuran         : " << ukuranproduk [i] << endl;
                    cout << "Harga          : Rp" << fixed << setprecision(0) << hargaproduk[i] << endl;
                    cout << "Bahan          : " << bahanproduk[i] << endl; 
                    cout << "Stok           : " << stokproduk[i] << " pcs" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get();
                system("cls");
            }
            else if (pilihan == 2) {
                if (jumlahProduk == 0) {
                    cout << "Tidak ada produk yang tersedia" << endl;
                    continue;
                }
                cout << "========Daftar Produk========" << endl;
                for (int i = 0; i < jumlahProduk; i++) {
                    cout << "Produk ke-" << i + 1 << endl;
                    cout << "Produk         : " << namaproduk[i] << endl;
                    cout << "Warna          : " << warnaproduk[i] << endl;
                    cout << "Ukuran         : " << ukuranproduk[i] << endl;
                    cout << "Harga          : Rp" << fixed << setprecision(0) << hargaproduk[i] << endl;
                    cout << "Bahan          : " << bahanproduk[i] << endl; 
                    cout << "Stok           : " << stokproduk[i] << " pcs\n" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 
                if (jumlahProduk >= max_produk) {
                    cout << "Penuh! Tidak bisa menambah produk baru!";
                    return jumlahProduk;
                }
                cout << "=========Tambah Produk=========" << endl;
                cout << "Masukkan nama produk   : ";
                cin >> namaproduk[jumlahProduk];
                cout << "Masukkan Warna         : ";
                cin >> warnaproduk[jumlahProduk];
                cout << "Masukkan Ukuran        : ";
                cin >> ukuranproduk[jumlahProduk];
                cout << "Masukkan Harga         : ";
                cin >> hargaproduk[jumlahProduk];
                cout << "Masukkan Bahan         : ";
                cin >> bahanproduk[jumlahProduk];
                cout << "Masukkan Stok          : ";
                cin >> stokproduk[jumlahProduk];
                
                jumlahProduk++;
                cout << "Produk berhasil ditambahkan!" << endl;
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get();
                system("cls");
            }
            else if (pilihan == 3) {
                if (jumlahProduk == 0) {
                    cout << "Tidak ada produk untuk di update";
                    continue;
                }
                cout << "========Daftar Produk========" << endl;
                for (int i = 0; i < jumlahProduk; i++) {
                    cout << "Produk ke-" << i + 1 << endl;
                    cout << "Produk         : " << namaproduk[i] << endl;
                    cout << "Warna          : " << warnaproduk[i] << endl;
                    cout << "Ukuran         : " << ukuranproduk[i] << endl;
                    cout << "Harga          : Rp" << fixed << setprecision(0) << hargaproduk[i] << endl;
                    cout << "Bahan          : " << bahanproduk[i] << endl; 
                    cout << "Stok           : " << stokproduk[i] << " pcs\n" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 

                int index;
                cout << "===============Update Produk=================" << endl;
                cout << "Masukkan nomor produk yang ingin di update : ";
                cin >> index;
                index--;

                if (index < 0 || index >= jumlahProduk) {
                    cout << "Produk tidak Ditemukan"<< endl;
                    continue;
                }

                cout << "Masukkan data baru untuk produk ini :" << endl;
                cout << "Produk         : " ;
                cin >> namaproduk[index];
                cout << "Warna          : " ;
                cin >> warnaproduk[index];
                cout << "Ukuran         : " ;
                cin >> ukuranproduk[index];
                cout << "Harga          : " ;
                cin >> hargaproduk[index];
                cout << "Bahan          : " ;
                cin >> bahanproduk[index];
                cout << "Stok           : " ;
                cin >> stokproduk[index];

                cout << "Produk berhasil diperbarui!\n" << endl;
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get();
                system("cls");
            }
            else if (pilihan == 4) {
                if (jumlahProduk == 0) {
                    cout << "Data masih kosong!" << endl;
                    continue;
                }
                cout << "========Daftar Produk========" << endl;
                for (int i = 0; i < jumlahProduk; i++) {
                    cout << "Produk ke-" << i + 1 << endl;
                    cout << "Produk         : " << namaproduk[i] << endl;
                    cout << "Warna          : " << warnaproduk[i] << endl;
                    cout << "Ukuran         : " << ukuranproduk[i] << endl;
                    cout << "Harga          : Rp" << fixed << setprecision(0) << hargaproduk[i] << endl;
                    cout << "Bahan          : " << bahanproduk[i] << endl; 
                    cout << "Stok           : " << stokproduk[i] << " pcs\n" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 

                int index;
                cout << "=================Hapus Produk==============" << endl;
                cout << "Masukkan nomor produk yang ingin dihapus : ";
                cin >> index;

                if (index < 0 || index >= jumlahProduk) {
                    cout << "Produk tidak Ditemukan"<< endl;
                    continue;
                }

                for (int i = index; i < jumlahProduk - 1; i++) {
                    namaproduk[i]= namaproduk[i+1];
                    warnaproduk[i]= warnaproduk[i+1];
                    ukuranproduk[i]= ukuranproduk[i+1];
                    hargaproduk[i]= hargaproduk[i+1];
                    bahanproduk[i]= bahanproduk[i+1];
                    stokproduk[i]= stokproduk[i+1];
                }
                jumlahProduk--;
                cout << "Produk berhasil dihapus!" << endl;
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get();
                system("cls");
            }
        } while (pilihan != 5);
        
    }else {
        string pilihan; 
        do {
            cout << "========Daftar Produk========" << endl;
            for (int i = 0; i < jumlahProduk; i++) {
                cout << "Produk ke-" << i + 1 << endl;
                cout << "Produk         : " << namaproduk[i] << endl;
                cout << "Warna          : " << warnaproduk[i] << endl;
                cout << "Ukuran         : " << ukuranproduk[i] << endl;
                cout << "Harga          : Rp" << fixed << setprecision(0) << hargaproduk[i] << endl;
                cout << "Bahan          : " << bahanproduk[i] << endl; 
                cout << "Stok           : " << stokproduk[i] << " pcs\n" << endl;
                continue;
            }
            cout << "Apakah anda ingin keluar? (y/n) : " ; 
            cin >> pilihan;
        } while (pilihan != "y");
    }
}