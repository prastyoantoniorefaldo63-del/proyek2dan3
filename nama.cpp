#include <iostream>
  using namespace std;
int main() {
string menu[5]={"Soto","Rawon", "pecel", "kopi", "teh"};
    int harga[5]{15000, 20000, 10000, 5000, 3000};
    int porsi[5];
    int total[5];
    int i;
    int gtotal= 0;
    for(int i=0;i<5;i++)
        { 
            cout<<"================================="<<endl;
            cout<<"menu   ";
            cout<<menu[i]<<endl;
            cout<<"harga  ";
            cout<<harga[i]<<endl;
            cout<<"porsi  ";
            cin>>porsi[i];
            total[i] = porsi[i] * harga[i];
            gtotal += total[i];
            cout << total[i] << endl;
            
            cout<<"================================="<<endl;

        }
        cout << "TOTAL SEMUA PESANAN: Rp" << gtotal << endl;
        system("pause");

    return 0;
    
}
