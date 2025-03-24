# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>
using namespace std;

struct Login {
    string nama;
    string password;
};

struct ukuran {
    string jenisukuran;
};

struct produk {
    ukuran ukuranbaju;
    string namabaju;
    string warnabaju;
    string bahanbaju;
    int hargabaju;
    int stokbaju;
};

int main () {

    const int max_produk = 100;
    produk produk[max_produk];
    produk[0].namabaju = "Gamis";
    produk[0].warnabaju = "Hitam";
    produk[0].ukuranbaju.jenisukuran = "Small";
    produk[0].bahanbaju = "Katun";
    produk[0].hargabaju = 145000;
    produk[0].stokbaju = 45;

    struct Login user = {"KeyshaKhoirunnisa", "2409106077"};
    string username_input , password_input;
    int salah = 0;
    int jumlahProduk = 1;
    
    system ("cls");
    for(salah = 0; salah < 3; salah++) {
        cout << "username : ";
        cin >> username_input;
        cout << "password : ";
        cin >> password_input;

        if (username_input == user.nama && password_input == user.password) {
            cout << "Login Berhasil!" << endl;
            break;
        } cout << "Login Gagal! Coba Lagi" << endl;
    }
    if (salah == 3) {
        cout << "Kesempatan Habis! Program Berhenti.";
        return 0;
    }
    
    system ("cls");
    struct Login admin = {"Keysha", "077"};
    string validasi_admin;
    string usn_admin_input, pw_admin_input;
    cout << "Apakah anda admin? (y/n) : ";
    cin >> validasi_admin;
    system ("cls");
    if (validasi_admin == "y") {
        for (salah = 0; salah < 3; salah++) {
            cout << "username admin : ";
            cin >> usn_admin_input;
            cout << "password admin : ";
            cin >> pw_admin_input;
        
            if (admin.nama == usn_admin_input && admin.password == pw_admin_input) {
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
                    cout << "Produk         : " << produk[i].namabaju << endl;
                    cout << "Warna          : " << produk[i].warnabaju << endl;
                    cout << "Ukuran         : " << produk[i].ukuranbaju.jenisukuran << endl;
                    cout << "Harga          : Rp " << fixed << setprecision(0) << produk[i].hargabaju << endl;
                    cout << "Bahan          : " << produk[i].bahanbaju << endl; 
                    cout << "Stok           : " << produk[i].stokbaju << " pcs" << endl;
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
                    cout << "Produk         : " << produk[i].namabaju << endl;
                    cout << "Warna          : " << produk[i].warnabaju << endl;
                    cout << "Ukuran         : " << produk[i].ukuranbaju.jenisukuran << endl;
                    cout << "Harga          : Rp " << fixed << setprecision(0) << produk[i].hargabaju << endl;
                    cout << "Bahan          : " << produk[i].bahanbaju << endl; 
                    cout << "Stok           : " << produk[i].stokbaju << " pcs" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 
                if (jumlahProduk >= max_produk) {
                    cout << "Penuh! Tidak bisa menambah produk baru!";
                    return jumlahProduk;
                }
                cout << "=========Tambah Produk=========" << endl;
                cin.ignore();
                cout << "Masukkan nama produk   : ";
                getline(cin, produk[jumlahProduk].namabaju);
                cout << "Masukkan Warna         : ";
                getline(cin, produk[jumlahProduk].warnabaju);
                cout << "Masukkan Ukuran        : ";
                getline(cin, produk[jumlahProduk].ukuranbaju.jenisukuran);
                cout << "Masukkan Harga         : ";
                cin >> produk[jumlahProduk].hargabaju;
                cout << "Masukkan Bahan         : ";
                cin.ignore();
                getline(cin, produk[jumlahProduk].bahanbaju);
                cout << "Masukkan Stok          : ";
                cin >> produk[jumlahProduk].stokbaju;
                
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
                    cout << "Produk         : " << produk[i].namabaju << endl;
                    cout << "Warna          : " << produk[i].warnabaju << endl;
                    cout << "Ukuran         : " << produk[i].ukuranbaju.jenisukuran << endl;
                    cout << "Harga          : Rp " << fixed << setprecision(0) << produk[i].hargabaju << endl;
                    cout << "Bahan          : " << produk[i].bahanbaju << endl; 
                    cout << "Stok           : " << produk[i].stokbaju << " pcs" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 

                int index;
                cout << "===============Update Produk=================" << endl;
                cout << "Masukkan nomor produk yang ingin di update : ";
                cin >> index;

                if (index < 1 || index > jumlahProduk) {
                    cout << "Produk tidak Ditemukan"<< endl;
                    continue;
                }
                cout << "Masukkan data produk yang ingin di update :" << endl;
                cout << "Produk         : " << produk[index-1].namabaju << endl;
                cout << "Warna          : " << produk[index-1].warnabaju << endl;
                cout << "Ukuran         : " << produk[index-1].ukuranbaju.jenisukuran << endl;
                cout << "Harga          : " << produk[index-1].hargabaju << endl;
                cout << "Bahan          : " << produk[index-1].bahanbaju << endl;
                cout << "Stok           : " << produk[index-1].stokbaju << endl;

                cout << "Masukkan data baru:" << endl;
                cout << "Nama produk   : ";
                cin.ignore();
                getline(cin, produk[index-1].namabaju);
                cout << "Warna         : ";
                getline(cin, produk[index-1].warnabaju);
                cout << "Ukuran        : ";
                getline(cin, produk[index-1].ukuranbaju.jenisukuran);
                cout << "Harga         : ";
                cin >> produk[index-1].hargabaju;
                cout << "Bahan         : ";
                cin.ignore();
                getline(cin, produk[index-1].bahanbaju);
                cout << "Stok          : ";
                cin >> produk[index-1].stokbaju;
                cout << "Produk berhasil diupdate!" << endl;

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
                    cout << "Produk         : " << produk[i].namabaju << endl;
                    cout << "Warna          : " << produk[i].warnabaju << endl;
                    cout << "Ukuran         : " << produk[i].ukuranbaju.jenisukuran << endl;
                    cout << "Harga          : Rp " << fixed << setprecision(0) << produk[i].hargabaju << endl;
                    cout << "Bahan          : " << produk[i].bahanbaju << endl; 
                    cout << "Stok           : " << produk[i].stokbaju << " pcs" << endl;
                }
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get(); 

                int index;
                cout << "=================Hapus Produk==============" << endl;
                cout << "Masukkan nomor produk yang ingin dihapus : ";
                cin >> index;

                if (index < 1 || index > jumlahProduk) {
                    cout << "Produk tidak Ditemukan"<< endl;
                    continue;
                }
                cout << "Data produk yang akan dihapus:" << endl;  
                cout << "Produk         : " << produk[index - 1].namabaju << endl;              
                cout << "Warna          : " << produk[index - 1].warnabaju << endl;
                cout << "Ukuran         : " << produk[index - 1].ukuranbaju.jenisukuran << endl;
                cout << "Harga          : Rp " << fixed << setprecision(0) << produk[index - 1].hargabaju << endl;
                cout << "Bahan          : " << produk[index - 1].bahanbaju << endl;
                cout << "Stok           : " << produk[index - 1].stokbaju << " pcs" << endl;

                string konfirmasi;
                cout << "Apakah anda yakin ingin menghapus data ini? : ";
                cin >> konfirmasi;

                if (konfirmasi == "y" || konfirmasi == "Y"){
                    for (int i = index - 1; i < jumlahProduk - 1; i++){
                        produk[i] = produk[i+1];
                    }
                }
                jumlahProduk--;
                cout << "Produk berhasil dihapus!" << endl;
                cout << "Tekan enter untuk melanjutkan.." << endl;
                cin.ignore();
                cin.get();
                system("cls");
            }else if (pilihan == 5) {
                cout << "Terimakasih sudah menggunakan sistem ini!";
            }
        } while (pilihan != 5);
        
    }else {
        string pilihan; 
        do {
            cout << "========Daftar Produk========" << endl;
            for (int i = 0; i < jumlahProduk; i++) {
                cout << "Produk ke-" << i + 1 << endl;
                cout << "Produk         : " << produk[i].namabaju << endl;
                cout << "Warna          : " << produk[i].warnabaju << endl;
                cout << "Ukuran         : " << produk[i].ukuranbaju.jenisukuran << endl;
                cout << "Harga          : Rp " << fixed << setprecision(0) << produk[i].hargabaju << endl;
                cout << "Bahan          : " << produk[i].bahanbaju << endl; 
                cout << "Stok           : " << produk[i].stokbaju << " pcs" << endl;
            }
            cout << "Apakah anda ingin keluar? (y/n) : " ; 
            cin >> pilihan;
        } while (pilihan != "y");
    }
}