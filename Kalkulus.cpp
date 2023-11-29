#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    //Opening Dari Program
    int pilih;
        cout << "==== Selamat datang diperhitungan kalkulus dengan menggunakan code c++ ====";
        cout << "\n------ Silahkan pilih ingin menggunakan perhitungan apa ------";
        cout << "\n1. Persamaan Kuadrat\n2. Turunan\n3. Aritmatika";
        cout << "\nSilahkan ketik angka untuk memilih perhitungan :";
        cin >> pilih;
    
    switch(pilih){
    
        case 1:
        //Persamaan Kuadrat
    float variabel_a, variabel_b, variabel_c, x1, x2, b2;
        cout << "\n\n====Persamaan Kuadrat====";
        cout << "\nax^2 + bx + c = 0";
        cout << "\n\nMasukan nilai variabel a: "; cin >> variabel_a;
        cout << "Masukan nilai variabel b: "; cin >> variabel_b;
        cout << "Masukan nilai variabel c: "; cin >> variabel_c;

        cout << "\nSistem menggunakan Rumus abc yaitu (-b +- sqrt b^2 - 4 * a * c) / 2 * a";
    
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

break;

        case 2:
    //Turunan
    int a, b, c, n, n1, hasil_a, hasil_b, n2, n3;

        cout << "\n\n==== Turunan ====";
        cout << "\nax^n + bx^n + c";
        cout << "\n\nMasukan nilai variabel a: "; cin >> a;
        cout << "Masukan nilai variabel b: "; cin >> b;
        cout << "Masukan nilai variabel c: "; cin >> c;
        cout << "Masukan nilai pangkat a: "; cin >> n;
        cout << "Masukan nilai pangkat b: "; cin >> n1;

        cout << "\nRumus Turunan yaitu n * ax^n-1 + n * bx^n-1 + c" << endl;
        cout << "Soal yang anda input :\n" << a << "x^" << n << " + " << b << "x^" << n1 << " + " << c << endl;
    //Rumus Penyelesaian
            hasil_a = n * a;
            hasil_b = n1 * b;
            n2 = n - 1;
            n3 = n1 - 1;

        cout << hasil_a << "x^" << n2 << " + " << hasil_b << "x^" << n3 << " + " << c;

break;

        case 3:
    //Aritmatika
    float Aa, Ab, hasilA;
    char aritmatika;

        cout << "\n\n==== Aritmatika ====";
        cout << "\nMasukan nilai a: "; cin >> Aa;
        cout << "Masukan nilai b: "; cin >> Ab;
        cout << "Masukan aritmatika (+, -, :, x): "; cin >> aritmatika;
        cout << "\n" << Aa << aritmatika << Ab << " = ";

        if(aritmatika == '+'){
            hasilA = Aa + Ab;
        cout << hasilA;
        }else if(aritmatika == '-'){
            hasilA = Aa - Ab;
        cout << hasilA;
        }else if(aritmatika == ':'){
            hasilA = Aa / Ab;
        cout << hasilA;
        }else if(aritmatika == 'x'){
            hasilA = Aa * Ab;
        cout << hasilA;
        }else{
        cout << "Eror!!!!!!!!";
        }

break;
        case 4:
    //Volume Bola
        cout << ">>>>>> Mencari volume bola <<<<<<";



    }
}