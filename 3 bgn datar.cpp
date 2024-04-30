/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

    float LuasPersegi (double Sisi) {
    return pow(Sisi, 2);
    }
    
    float LuasPersegiPanjang (double Panjang, double Lebar){
    return Panjang * Lebar;
    }
    
    float LuasLingkaran (double JariJari){
    return pow(JariJari, 2);
    }

int main() {
    
    string BangunDatar;
    
    cout << " PROGRAM UNTUK MENGHITUNG LUAS BANGUN DATAR" << endl << endl;
    
    while (true){
    cout << " 1. LUAS PERSEGI" << endl;
    cout << " 2. LUAS PERSEGI PANJANG" << endl;
    cout << " 3. LUAS LINGKARAN" << endl;
    cout << " MASUKKAN BANGUN DATAR YANG INGIN ANDA HITUNG LUASNYA (1/2/3) : ";
    cin >> BangunDatar;
    cout << endl;
    
        if (BangunDatar == "1"){
        
            float Sisi;
        
            cout << " MENGHITUNG LUAS PERSEGI" << endl << endl;
        
            cout << " MASUKKAN PANJANG SISI PERSEGI : ";
            cin >> Sisi;
            cout << endl;

            float Luas = LuasPersegi (Sisi);

            cout << " LUAS PERSEGI DENGAN PANJANG SISI " << Sisi << " CM ADALAH " << Luas << " CM²"; 
            }
        
        else if (BangunDatar == "2"){
        
            float Panjang;
            float Lebar;
        
            cout << " MENGHITUNG LUAS PERSEGI PANJANG" << endl << endl;
        
            cout << " MASUKKAN PANJANG PERSEGI : ";
            cin >> Panjang;
            cout << endl;
        
            cout << " MASUKKAN LEBAR PERSEGI : ";
            cin >> Lebar;
            cout << endl;

            float Luas = LuasPersegiPanjang (Panjang, Lebar);

            cout << " LUAS PERSEGI PANJANG DENGAN PANJANG " << Panjang << " CM DAN LEBAR " << Lebar << " CM ADALAH " << Luas << " CM²"; 
            }
        
        else if (BangunDatar == "3"){
    
            int JariJari;
            
            cout << " MENGHITUNG LUAS LINGKARAN" << endl << endl;
        
            cout << " MASUKKAN JARI JARI LINGKARAN : ";
            cin >> JariJari;
            cout << endl;
        
                if(JariJari % 8 == 0){
                
                float luas = LuasLingkaran(JariJari) *22/7;
                cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                }
        
                else if(JariJari % 8 != 0){
                float luas = LuasLingkaran (JariJari) * 3.14;

                cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                }
        }
        
        else {
            
            cout << " MAAF, BANGUN DATAR YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
            continue;
        }
        
    cout << endl << endl;
       
    string Next;
    
    cout << " >> KETIK APA SAJA UNTUK MELANJUTKAN" << endl;
    cout << " >> KETIK 6 UNTUK BERHENTI" << endl;
    cout << " APAKAH ANDA INGIN MENGHITUNG LUAS BANGUN DATAR LAGI ? : ";
    cin >> Next;
    
        if(Next == "1"){
        break;
        }
        
        else{
        cout << endl << endl;
        continue;
        }
        
    }

    return 0;
}