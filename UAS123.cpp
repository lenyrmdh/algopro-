/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int tahunLahir, tahunSekarang, umur;
    
    char nilai;
    int angka,nilaiakhir;
    float tugas,uts,uas,nilai_akhir;
    
    int nominal;
 
    string Menu, ulang;
    string Perhitungan;
    string Pilihan, Jenis;
    
    // About me
    do{
    cout << "\033[2J\033[1;1H";    
    cout << " .ig// @lenirmdh. " << endl ;
    cout << "  20230801208 " << endl;
    cout << endl;
    
    // Menu Perhitungan   
    while(true){
    cout << "============= *PILIHAN* =============" << endl ;
    cout << "  1. MENGHITUNG UMUR                 " << endl ;
    cout << "  2. MENGKONVERSI NILAI KE HURUF     " << endl ;
    cout << "  3. MENGHITUNG UANG PECAHAN         " << endl ;
    cout << "  4. EXIT                            " << endl ;
    
    cout << endl;
    cout << " TENTUKAN OPERASI HITUNG PILIHANMU : ";
    cin  >> Menu;
    
    if(Menu=="1"){
        Perhitungan="MENGHITUNG UMUR";
        break;
        }
    
        else if(Menu=="2"){
        Perhitungan="MENGKONVERSI NILAI KE HURUF";
        break;
        }
    
        else if(Menu=="3"){
        Perhitungan="MENGHITUNG UANG PECAHAN";
        break;
        }
        
        else if(Menu=="4"){
        Perhitungan="EXIT";
        break;
        }
        
        else{
        continue;
        }
        
    }
    
    cout << " ANDA MEMILIH UNTUK " <<  Perhitungan << endl << endl;
    
    // Tampilan Menu 1
    while(true){
    if(Menu == "1"){
       Perhitungan = " MENGHITUNG UMUR " ;
       cout << " ====== *MENENTUKAN UMUR BERDASARKAN TAHUN LAHIR* ======" << endl ;
       cout << "========================================================" << endl ;
       
       cout << " MASUKAN TAHUN LAHIR KAMU = ";
       cin  >> tahunLahir;
    
       cout << " MASUKAN TAHUN SEKARANG   = ";
       cin  >> tahunSekarang;
    
       umur = tahunSekarang - tahunLahir ;
    
       cout << " UMUR KAMU SEKARANG " << umur << " TAHUN :)" ; 
       break; 
    }
     
     // Tampilan menu 2
    if(Menu == "2"){
       Perhitungan = " MENGKONVERSI NILAI ANGKA KE HURUF " ; 
       cout << " ===== *MENGHITUNG NILAI AKHIR MAHASISWA* ====="<<endl;
       cout << " =============================================="<<endl;
 
       cout << " MASUKAN NILAI MAHASISWA" << endl;
       
       cout << " NILAI TUGAS = ";
       cin  >> tugas;
  
       cout << " NILAI UTS   = ";
       cin  >> uts;
 
       cout << " NILAI UAS   = ";
       cin  >> uas;

  
      nilai_akhir=((tugas*0.3)+(uts*0.3)+(uas*0.4));
 
      if(nilai_akhir>=80&&nilai_akhir<=100){
      nilai ='A';
      }
      else if (nilai_akhir>60&&nilai_akhir<=79){
      nilai ='B';
      }
      else if (nilai_akhir>40&&nilai_akhir<=59 ){
      nilai ='C';
      }
      else if (nilai_akhir>20&&nilai_akhir<=39){
      nilai ='D';
      }
      else if (nilai_akhir>=0&&nilai_akhir<=19){
      nilai ='E';
      }

      cout << endl; 
      cout << " NILAI AKHIR          = "<<nilai_akhir<<endl;
      cout << " PREDIKAT             = "<<nilai<<endl;
  
      if (nilai_akhir<40){
      cout << " TIDAK LULUS";
      } else  {
      cout << " LULUS" ;
      } 
       break;
    } 
    
    // Tampilan menu 3
    if(Menu == "3"){
       Perhitungan = " MENGHITUNG UANG PECAHAN " ;
       cout << " MASUKKAN JUMLAH NOMINAL RUPIAH = ";
       cin  >> nominal;

       int seratusribu = nominal / 100000;
       nominal %= 100000;

       int limapuluhribu = nominal / 50000;
       nominal %= 50000;

       int duapuluhribu = nominal / 20000;
       nominal %= 20000;

       int sepuluhribu = nominal / 10000;
       nominal %= 10000;

       int limaribu = nominal / 5000;
       nominal %= 5000;

       int duaribu = nominal / 2000;
       nominal %= 2000;

       int seribu = nominal / 1000;
       nominal %= 1000;

       int limaratus = nominal / 500;
       nominal %= 500;

       int seratus = nominal / 100;
       nominal %= 100;

       int limapuluh = nominal / 50;
       nominal %= 50;

       int duapuluhlima = nominal / 25;
       nominal %= 25;

       int sepuluh = nominal / 10;
       nominal %= 10;

       int lima = nominal / 5;
       nominal %= 5;

       int satu = nominal;

      cout << " ==== *PECAHAN YANG DIPERLUKAN* ==== " << endl;
      cout << " =================================== " << endl;
      
      cout << " Rp100,000  = " << seratusribu    << " lembar" << endl;
      cout << " Rp50,000   = " << limapuluhribu  << " lembar" << endl;
      cout << " Rp20,000   = " << duapuluhribu   << " lembar" << endl;
      cout << " Rp10,000   = " << sepuluhribu    << " lembar" << endl;
      cout << " Rp5,000    = " << limaribu       << " lembar" << endl;
      cout << " Rp2,000    = " << duaribu        << " lembar" << endl;
      cout << " Rp1,000    = " << seribu         << " lembar" << endl;
      cout << " Rp500      = " << limaratus      << " koin  " << endl;
      cout << " Rp100      = " << seratus        << " koin  " << endl;
      cout << " Rp50       = " << limapuluh      << " koin  " << endl;
      cout << " Rp25       = " << duapuluhlima   << " koin  " << endl;
      cout << " Rp10       = " << sepuluh        << " koin  " << endl;
      cout << " Rp5        = " << lima           << " koin  " << endl;
      cout << " Rp1        = " << satu           << " koin  " << endl;
      break; 
    }
    
    if(Menu == "4"){
       break;
    }
}
    
    cout << endl << endl ;
    cout << " MAU BERHITUNG LAGI [y/n] = ";
    cin  >> ulang;
    
    }while(ulang == "y");


    return 0;
}