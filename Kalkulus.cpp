#include<iostream>
#include<math.h>
using namespace std;

int main(){
    string input;
    opening:
    //Opening Dari Program
    int pilih;
    cout << "\n==========================================================================="<< endl;
    cout << "==== Selamat datang diperhitungan kalkulus dengan menggunakan code c++ ====";
    cout << "\n       ---- Silahkan pilih ingin menggunakan perhitungan apa ----";
    cout << "\n==========================================================================="<< endl << endl;
    cout << "\n1. Persamaan Kuadrat\n2. Turunan\n3. Aritmatika\n4. Integral";
    cout << "\nSilahkan ketik angka untuk memilih perhitungan : ";
    cin >> pilih;
    
    if(pilih == 1){
        //Pemfaktoran
    float variabel_a, variabel_b, variabel_c, x1, x2, b2;
    cout << "\n\n====> Persamaan Kuadrat <====";
    cout << "\nax^2 + bx + c = 0";
    cout << "\n\nMasukan nilai variabel a: "; cin >> variabel_a;
    cout << "Masukan nilai variabel b: "; cin >> variabel_b;
    cout << "Masukan nilai variabel c: "; cin >> variabel_c;

    cout << "\nSistem menggunakan Rumus abc yaitu:\n(-b +- sqrt b^2 - 4 * a * c) / 2 * a";
    
    //Rumus penyelesaian
    b2 = (variabel_b * variabel_b) - (4 * variabel_a * variabel_c);

    if(b2 > 0){
        cout << "\nAngka real dan berbeda";

        x1 = ((-variabel_b + sqrt(b2)) / 2 * variabel_a);
        x2 = ((-variabel_b - sqrt(b2)) / 2 * variabel_a);

            cout << "\nhasil x1 = " << x1; 
            cout << "\nhasil x2 = " << x2;
    }else if(b2==0){
        cout << "\nAngka real dan sama";
        
        x1 = x2 = ((-variabel_b + sqrt(b2)) / 2 * variabel_a);
            cout << "\nhasil x1 = " << x1; 
            cout << "\nhasil x2 = " << x2;
    }else{
        cout << "\nHasil dari perhitungan anda imajiner";
    }
        
        //Lanjut atau selesai
        cout << "\n\n==========================================================================="<< endl;
        cout << "\n=> Apakah mau mencoba lagi?(pilih[Yes or No]) : ";
    cin >> input;
    cout << endl;
    if(input == "yes" || input == "Yes"){
        goto opening;
    }else{
        return 0;
    }
    }
        else if (pilih == 2){
    //Turunan
    int a, b, c, n, n1, hasil_a, hasil_b, n2, n3, c1;

        cout << "\n\n====> Turunan <====";
            cout << "\nax^n + bx^n + c";
                cout << "\n\nMasukan nilai variabel a: "; cin >> a;
                    cout << "Masukan nilai variabel b: "; cin >> b;
                cout << "Masukan nilai variabel c: "; cin >> c;
            cout << "Masukan nilai pangkat a: "; cin >> n;
        cout << "Masukan nilai pangkat b: "; cin >> n1;

        cout << "\nRumus Turunan yaitu:\nn*ax^n-1 + n*bx^n-1 + c" << endl;
    cout << "Soal yang anda input :\n" << a << "x^" << n << " + " << b << "x^" << n1 << " + " << c << endl;
    //Rumus Penyelesaian
    hasil_a = n * a;
    hasil_b = n1 * b;
    n2 = n - 1;
    n3 = n1 - 1;
    c1 = c-c;

     cout << hasil_a << "x^" << n2 << " + " << hasil_b << "x^" << n3 << " + " << c1;

        //Lanjut atau selesai
        cout << "\n\n==========================================================================="<< endl;
        cout << "\n=> Apakah mau mencoba lagi?(pilih[Yes or No]) : ";
    cin >> input;
    cout << endl;
    if(input == "yes" || input == "Yes"){
        goto opening;
    }else{
        return 0;
    }
    }
    else if (pilih == 3){
       //Aritmatika
       float Aa, Ab, total;
       string aritmatika;

        cout << "\n\n====> Aritmatika <====\n";
        cout << "\nMasukan Nilai a: ";
            cin >> Aa;
        cout << "Masukan Nilai b: ";
            cin >> Ab;
        cout << "Pilih (+,-,/,*): ";
            cin >> aritmatika;
        
        //Rumus penyelesaian
        if(aritmatika == "+"){
            total = Aa + Ab;
        cout << Aa << " + " << Ab << " = " << total;
        }
        
        else if(aritmatika == "-"){
            total = Aa - Ab;
        cout << Aa << " - " << Ab << " = " << total;
            }
        
        else if(aritmatika == "/"){
            total = Aa / Ab;
        cout << Aa << " / " << Ab << " = " << total;
            }
        
        else if(aritmatika == "*"){
            total = Aa * Ab;
        cout << Aa << " * " << Ab << " = " << total;
            }
            
            else {
        cout << "Operator anda eror";
        }

        //Lanjut atau selesai
        cout << "\n\n==========================================================================="<< endl;
    cout << "\n=> Apakah mau mencoba lagi?(pilih[Yes or No]) : ";
        cin >> input;
    cout << endl;
            if(input == "yes" || input == "Yes"){
        goto opening;
            }else{
        return 0;
            }
        }
    else if(pilih == 4){
        //Integral
        float InA, InN, InHasil, bAtas, bBawah;
        string InPilih;

    cout << "\n\n====> Integral <====\n";
        cout << "\n1. Integral Tak Tentu\n2. Integral Tentu";
    cout << "\nMasukan angka [1,2]: ";
        cin >> InPilih;


        //Tak Tentu
        if(InPilih == "1"){
            cout << "]f(x) * dx";
        cout << "\nMasukan Nilai a: ";
            cin >> InA;
        cout << "Masukan nilai pangkat(n): ";
            cin >> InN;

                //Rumus Penyelesaian
            cout << "\n===================================================\n\n";
        cout << "Rumus yang digunakan : " << "(a/n+1)x^n+1 + c\n";
            cout << "(" << InA << "/" << InN << "+1)" << " x^" << InN << "+1 + c\n";
        cout << "(" << InA << "/" << InN+1 << ")x^" << InN+1 << " + c";
            cout << "\nLangkah Penyederhanaan :\n"; 
        cout << InA/(InN+1) << "x^" << InN+1 << " + c";

        }
            //Tentu
        else if(InPilih == "2"){
        cout << "\n===================================================\n\n";    
            cout << "\n](bAtas - bBawah) f(x) * dx";
        cout << "\nnMasukan Nilai a: ";
            cin >> InA;
        cout << "Masukan nilai pangkat(n): ";
            cin >> InN;
        cout << "Masukan nilai Batas Atas: ";
            cin >> bAtas;            
        cout << "Masukan nilai Batas Bawah: ";
            cin >> bBawah;  


                //Rumus Penyelesaian
        cout << "\n===================================================\n\n";
            cout << "Rumus yang digunakan : " << "(a/n+1)x^n+1 (bAtas - bBawah)]\n";
            cout << "(" << InA << "/" << InN << "+1)" << " x^" << InN << "+1 (" << bAtas << " - " << bBawah << ")\n";
        cout << "(" << InA << "/" << InN+1 << ")x^" << InN+1 << "(" << bAtas << " - " << bBawah << ")\n";

            //Memasukan batas batasnya
        cout << "Batas Atas = " << "(" << InA << "/" << InN+1 << ") " << bAtas << "^" << InN+1 << endl;
        cout << "Batas Bawah = " << "(" << InA << "/" << InN+1 << ") " << bBawah << "^" << InN+1 << endl;

            //Penyelesaian batas
        cout << "Penyelesaian =\n" << "(" << InA << "/" << InN+1 << ") " << bAtas << "^" << InN+1 << " - " << "(" << InA << "/" << InN+1 << ") " << bBawah << "^" << InN+1 << " = ";
        cout << (InA/(InN+1)) * pow(bAtas,(InN+1)) - (InA/(InN+1)) * pow(bBawah,(InN+1));     
        }
            //Lanjut atau selesai
        cout << "\n\n==========================================================================="<< endl;
        cout << "\n=> Apakah mau mencoba lagi?(pilih[Yes or No]) : ";
            cin >> input;
        cout << endl;
            if(input == "yes" || input == "Yes"){
                goto opening;
            }else{
        return 0;
        }
    }
    return 0;
}
