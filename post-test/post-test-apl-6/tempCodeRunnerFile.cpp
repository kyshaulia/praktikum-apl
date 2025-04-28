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

struct Login user = {"KeyshaKhoirunnisa", "2409106077"};
struct Login admin = {"Keysha", "077"};
int salah = 0;
int jumlahProduk = 4;

bool loginuser(Login* user, int* salah) {
    string username_input, password_input;
    *salah = 0;
    while (*salah <3) {
        cout << "username : ";
        cin >> username_input;
        cout << "password : ";
        cin >> password_input;

        if (username_input == user->nama && password_input == user->password) {
            cout << "Login Berhasil!" << endl;
            return true;
        } else {
            cout << "Login Gagal! Coba Lagi" << endl;
            (*salah)++;
        }      
    }
    cout << "Kesempatan Habis! Program Berhenti." << endl;
    return false;
}

bool loginadmin(Login* admin, int* salah) {
    string usn_admin_input, pw_admin_input;
    for (*salah = 0; *salah < 3; (*salah)++) {
        cout << "username admin : ";
        cin >> usn_admin_input;
        cout << "password admin : ";
        cin >> pw_admin_input;

        system("cls");

        if (usn_admin_input == admin->nama && pw_admin_input == admin->password) {
            cout << "Anda sebagai Admin!" << endl;
            return true;
        } 
        cout << "Anda bukan admin!" << endl;
    }
    cout << "Kesempatan Habis! Program Berhenti." << endl;
    return false;
}


void lihatproduk(produk produk[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Tidak ada produk yang tersedia" << endl;
        return;
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
        cout << "==============================" << endl;
    }
}

void tambahproduk(produk produk[], int &jumlahProduk, const int max_produk) {
    if (jumlahProduk == 0) {
        cout << "Tidak ada produk yang tersedia" << endl;
        return;
    }
    lihatproduk(produk, jumlahProduk);
    cout << "Tekan enter untuk melanjutkan.." << endl;
    cin.ignore();
    cin.get(); 
    if (jumlahProduk >= max_produk) {
        cout << "Penuh! Tidak bisa menambah produk baru!";
        return;
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
}

void updateproduk(produk produk[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Tidak ada produk untuk di update";
        return;
    }
    int index;
    cout << "===============Update Produk=================" << endl;
    cout << "Masukkan nomor produk yang ingin di update : ";
    cin >> index;

    if (index < 1 || index > jumlahProduk) {
        cout << "Produk tidak Ditemukan"<< endl;
        return;
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

}

void hapusproduk(produk produk[], int &jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Data masih kosong!" << endl;
        return;
    }
    int index;
    cout << "=================Hapus Produk==============" << endl;
    cout << "Masukkan nomor produk yang ingin dihapus : ";
    cin >> index;

    if (index < 1 || index > jumlahProduk) {
        cout << "Produk tidak Ditemukan"<< endl;
        return;
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
        jumlahProduk--;
        cout << "Produk berhasil dihapus!" << endl;
    } else {
        cout << "Produk tidak dihapus!" << endl;
    }
}

void urutkanproduk(produk produk[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        cout << "Tidak ada produk untuk diurutkan!" << endl;
        return;
    }
    cout << "========Urutkan Produk========" << endl;
    cout << "1. Urutkan berdasarkan nama" << endl;
    cout << "2. Urutkan berdasarkan harga" << endl;
    cout << "3. Urutkan berdasarkan stok" << endl;
    cout << "4. Kembali" << endl;
    int pilihan;
    cout << "Masukkan pilihan : ";
    cin >> pilihan;

    produk temp;

    if (pilihan == 1) {
        for (int i = 0; i < jumlahProduk - 1; i++) {
            for (int j = 0; j < jumlahProduk - i - 1; j++) {
                if (produk[j].namabaju > produk[j+1].namabaju) {
                    temp = produk[j];
                    produk[j] = produk[j+1];
                    produk[j+1] = temp;
                }
            }
        }
        cout << "Produk berhasil diurutkan!" << endl;
    } else if (pilihan == 2) {
        for (int i = 0; i < jumlahProduk - 1; i++) {
            for (int j = 0; j < jumlahProduk - i - 1; j++) {
                if (produk[j].hargabaju > produk[j+1].hargabaju) {
                    temp = produk[j];
                    produk[j] = produk[j+1];
                    produk[j+1] = temp;
                }
            }
        }
        cout << "Produk berhasil diurutkan!" << endl;
    } else if (pilihan == 3) {
        for (int i = 0; i < jumlahProduk - 1; i++) {
            for (int j = 0; j < jumlahProduk - i - 1; j++) {
                if (produk[j].stokbaju > produk[j+1].stokbaju) {
                    temp = produk[j];
                    produk[j] = produk[j+1];
                    produk[j+1] = temp;
                }
            }
        }
        cout << "Produk berhasil diurutkan!" << endl;
    } else {
        return;
    }
} 

int main () {
    const int max_produk = 100;
    produk produk[max_produk];
    produk[0].namabaju = "Gamis";
    produk[0].warnabaju = "Hitam";
    produk[0].ukuranbaju.jenisukuran = "Medium";
    produk[0].bahanbaju = "Katun";
    produk[0].hargabaju = 145000;
    produk[0].stokbaju = 45;
    produk[1].namabaju = "Tunik";
    produk[1].warnabaju = "Hitam";
    produk[1].ukuranbaju.jenisukuran = "Medium";
    produk[1].bahanbaju = "BabyDoll";
    produk[1].hargabaju = 135000;
    produk[1].stokbaju = 50;
    produk[2].namabaju = "Abaya";
    produk[2].warnabaju = "Hitam";
    produk[2].ukuranbaju.jenisukuran = "Large";
    produk[2].bahanbaju = "Sutra";
    produk[2].hargabaju = 130000;
    produk[2].stokbaju = 50;
    produk[3].namabaju = "Rok";
    produk[3].warnabaju = "Khaki";
    produk[3].ukuranbaju.jenisukuran = "Large";
    produk[3].bahanbaju = "Linen";
    produk[3].hargabaju = 90000;
    produk[3].stokbaju = 60;

    system ("cls");
    string validasi_admin;
    cout << "Apakah anda admin? (y/n) : ";
    cin >> validasi_admin;

    system ("cls");
    if (validasi_admin == "y" || validasi_admin == "Y") {
        if (loginadmin(&admin, &salah)) {
            int pilihan ;
            do {
                cout << "===Manajemen Produk Baju Muslimah===" << endl;
                cout << "1. Lihat Produk" << endl;
                cout << "2. Tambah Produk" << endl;
                cout << "3. Update Produk" << endl;
                cout << "4. Hapus Produk" << endl;
                cout << "5. Urutkan Produk" << endl;
                cout << "6. Kembali" << endl;
                cout << "Masukkan pilihan : ";
                cin >> pilihan;
                system ("cls");

                if (pilihan == 1) {
                    lihatproduk(produk, jumlahProduk);
                    cout << "Tekan enter untuk melanjutkan.." << endl;
                    cin.ignore();
                    cin.get();
                    system("cls");
                }
                else if (pilihan == 2) {
                    tambahproduk(produk, jumlahProduk, max_produk);
                    cout << "Tekan enter untuk melanjutkan.." << endl;
                    cin.ignore();
                    cin.get();
                    system("cls");
                }
                else if (pilihan == 3) {
                    lihatproduk(produk, jumlahProduk);
                    updateproduk(produk, jumlahProduk);
                    cout << "Tekan enter untuk melanjutkan.." << endl;
                    cin.ignore();
                    cin.get();
                    system("cls");
                }
                else if (pilihan == 4) {
                    lihatproduk(produk, jumlahProduk);
                    hapusproduk(produk, jumlahProduk);
                    cout << "Tekan enter untuk melanjutkan.." << endl;
                    cin.ignore();
                    cin.get();
                    system("cls");
                }
                else if (pilihan == 5) {
                    system("cls");
                    urutkanproduk(produk, jumlahProduk);
                }
                else if (pilihan == 6) {
                    cout << "Terimakasih sudah menggunakan sistem ini!";
                } else {
                    cout << "Pilihan tidak valid!" << endl;
                }
                
            }while (pilihan != 6);
        }
        
    } else {
        string pilihan; 
        if (loginuser(&user, &salah)) {
            system ("cls");
            do {
                lihatproduk(produk, jumlahProduk);
                cout << "Apakah anda ingin keluar? (y/n) : " ; 
                cin >> pilihan;
            } while (pilihan != "y" && pilihan != "Y");
            cout << "Terimakasih sudah mengunjungi situs ini!" << endl;
            
        }else {
            return 0;
        }
    }
}
