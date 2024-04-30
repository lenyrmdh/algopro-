/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
    #include <map>
    #include <iomanip>

    using namespace std;
    
    void displayMenu() 
     {
    
    cout<<"Nama: Leny Ramadhani (20230801208)";
    cout << endl;
    cout<<"PRAKTIKUM TENGAH SEMESTER";
    cout << endl;
    cout << endl;
    
    // Daftar Menu Dan Harga
    cout << "Daftar Makanan:" << endl;
    cout << "( Kode: MIGR) - MIE GORENG     : Rp. 25,000" << endl;
    cout << "( Kode: NSGR) - NASI GORENG    : Rp. 22,000" << endl;
    cout << "( Kode: STAY) - SOTO AYAM      : Rp. 20,000" << endl;

    cout << "Takaran Level:" << endl;
    cout << "( Kode: SP)  - Sangat Pedas     : gratis sesuai seleramu" << endl;
    cout << "( Kode: PS)  - Pedas            : gratis sesuai seleramu" << endl;
    cout << "( Kode: TP)  - Tidak Pedas      : gratis sesuai seleramu" << endl;

    cout << "Daftar Minuman:" << endl;
    cout << "( Kode: JM)  - Jus Mangga       : Rp. 10,000" << endl;
    cout << "( Kode: AP)  - Air Putih        : Rp. 1,000" << endl;
    cout << "( Kode: KP)  - Kopi             : Rp. 5,000" << endl;

    cout << "Jenis Minuman:" << endl;
    cout << "( Kode: DG)  - Dingin           : gratis sesuai selaramu" << endl;
    cout << "( Kode: PN)  - Panas            : gratis sesuai seleramu" << endl;
    cout << "( Kode: HT)  - Hangat           : gratis sesuai selaramu" << endl;
}

int main() {
    map<string, int> menuPrices = {
        {"MIGR", 25000},
        {"NSGR", 22000},
        {"STAY", 20000},
        {"SP", 0},
        {"PS", 0},
        {"TP", 0},
        {"JM", 10000},
        {"AP", 1000},
        {"KP", 5000},
        {"DG", 0},
        {"PN", 0},
        {"HT", 0}
    };

        displayMenu();

        // Input 
        string kodeMakanan, takaranLevel, kodeMinuman, namaPesanan, jenisMinuman;
        int quantity; int nominal;

        cout << "\nMasukkan kode makanan: ";
        cin >>kodeMakanan;
        cout << "Masukkan takaran level (SP/PS/TP): ";
        cin >> takaranLevel;
        cout << "Masukkan jumlah pesanan: ";
        cin >> quantity;
        cout << "Masukkan kode minuman: ";
        cin >> kodeMinuman;
        cout << "Masukkan jenis minuman : (DG/PN/HT): ";
        cin >> jenisMinuman;
        cout << "Masukan nama pesanan :";
        cin >> namaPesanan;
        cout << "Masukan jumlah pesanan :";
        cin >> quantity;
        cout << "Masukan nominal :";
        cin >> nominal;

         //  Total Harga
        int totalPrice = quantity * (menuPrices[kodeMakanan] + menuPrices[takaranLevel] + menuPrices[kodeMinuman] + menuPrices[jenisMinuman]);

        // Ringkasan Pesanan
        cout << "\n--- Pesanan ---" << endl;
        cout << "Masukan nama pesanan: " << namaPesanan<< endl;
        cout << "Makanan: " << kodeMakanan << " (x" << quantity << ") - Rp. " << menuPrices[kodeMakanan] * quantity << endl;
        cout << "Pedas  : " << takaranLevel << " (x" << quantity << ") - Rp. " << menuPrices[takaranLevel] * quantity << endl;
        cout << "Minuman: " << kodeMinuman << " (x" << quantity << ") - Rp. " << menuPrices[kodeMinuman] * quantity << endl;
        cout << "Dingin: " << jenisMinuman << " (" << jenisMinuman << ") - Rp. " << menuPrices[jenisMinuman] + menuPrices[jenisMinuman] << endl;
        cout << "Total Pemesanan: Rp." << totalPrice << endl;
        cout << "Kembalian: Rp." << nominal-totalPrice<< endl;
    

    return 0;
}