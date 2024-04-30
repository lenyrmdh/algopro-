/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int Code;
    int Amount;
    int Totaly = 0;
    
    int A = 100000;
    int B = 200000;
    int C = 300000;
    
    int Discount;
    
    string Ticket; 
    string Name;
    
    cout << ".-----------------------------------------------------. " << endl;
    cout << "         WELCOME TO KAI E-TICKETING SHOP                " << endl;
    cout << ".-----------------------------------------------------. " << endl << endl << endl; 
    cout << "           THE PRICELIST KAI TICKETING                  " << endl;
    cout << "-----------------------------------------------------   " << endl;
    cout << "|   CODE     |  CLASS OF |         PRICE            |   " << endl;
    cout << "-----------------------------------------------------   " << endl;
    cout << "| (CODE = 1) | EKONOMI   |       RP 100.000         |   " << endl;
    cout << "| (CODE = 2) | BISNIS    |       RP 200.000         |   " << endl;
    cout << "| (CODE = 3) | EKSEKUTIF |       RP 300.000         |   " << endl;
    cout << "-----------------------------------------------------   " << endl << endl << endl;
    cout << ".-----------------------------------------------------. " << endl;
    cout << "                LETS YOUR ORDER HERE                    " << endl;
    cout << ".-----------------------------------------------------. " << endl << endl << endl;
    
    
    cout << " ORDER NAME : ";
    cin >> Name;
    cout << endl;
    
    cout << " INPUT CODE KERETA : ";
    cin >> Code;
    cout << endl;
    
    cout << " INPUT AMOUNT OF TICKET : ";
    cin>> Amount;
    cout << endl << endl;
    
    switch(Code){
        case 1 :
        Ticket = "EKONOMI";
        Totaly += A * Amount;
        break;
        
        case 2 :
        Ticket = "BISNIS";
        Totaly += B * Amount;
        break;
        
        case 3 :
        Ticket = "EKSEKUTIF";
        Totaly += C * Amount;
        break;
        
    }
    
    cout << " YOU ORDERING " <<  Amount   <<  " TICKET WITH A TYPE TICKET "  << Ticket <<  ", TOTALY YOUR BILS OF TICKET RP " << Totaly << endl << endl;
    
    if (Totaly>= 500000){
    Discount = Totaly * 90 / 100;
    cout << " GRATS , YOU HAVE GOT A DISCOUNT OF 10% , AND YOU ONLY NEED TO PAY THE AMOUNT RP " << Discount;
    }
    else if (Totaly>= 300000){
    Discount = Totaly * 95 / 100;
    cout <<" GRATS , YOU HAVE GOT A DISCOUNT OF 5% , AND YOU ONLY NEED TO PAY THE AMOUNT RP " << Discount;
    }
    else if (Totaly>= 200000){
    Discount = Totaly * 98 / 100;
    cout << " GRATS , YOU HAVE GOT A DISCOUNT OF 2% , AND YOU ONLY NEED TO PAY THE AMOUNT RP " << Discount;
    }

    return 0;
}
