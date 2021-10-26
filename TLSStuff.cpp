//Program Penampil Jadwal Kuliah Kuartal 2

#include <iostream>

using namespace std;

int main()
{
    int kuartal;
    cout<<"Program Penampil Jadwal Kuliah\n";
    cout<<"Keterangan : \n";
    cout<<"1. Kuartal 1\n";
    cout<<"2. Kuartal 2\n";
    cout<<"Masukkan kuartal ke- : ";
    cin>>kuartal;
    
    switch(kuartal)
    {
        case 1:
    cout<<"                              JADWAL KULIAH KUARTAL 1\n";
    cout<<"                        ------------------------------------\n";
    cout<<"\n              Matkul"<<"\t\t\t                        Jam\n";
    cout<<"------------------------------------"<<"\t\t\t-------------------\n";
    cout<<"              \nSenin\n";
    cout<<"Fisika Mekanika Klasik"<<"\t\t\t\t\t 07.15 - 09.45\n";
    cout<<"Bahasa Indonesia dan Penulisan Ilmiah"<<"\t\t\t 10.00 - 12.30\n";
    cout<<"\nSelasa\n";
    cout<<"TLS\n";
    cout<<"\nRabu\n";
    cout<<"Kalkulus Variabel Tunggal"<<"\t\t\t\t 07.15 - 09.45\n";
    cout<<"Matematika Diskrit"<<"\t\t\t\t\t 10.00 - 12.30\n";
    cout<<"Fisika Mekanika Klasik"<<"\t\t\t\t\t 13.00 - 15.30\n";
    cout<<"\nKamis\n";
    cout<<"Matematika Diskrit"<<"\t\t\t\t\t 07.15 - 09.45\n";
    cout<<"Kalkulus Variabel Tunggal"<<"\t\t\t\t 10.00 - 12.30\n";
    cout<<"\nJumat\n";
    cout<<"Pemrograman Dasar"<<"\t\t\t\t\t 07.15 - 09.45\n";
    break;
    
        case 2: 
            cout<<"                              JADWAL KULIAH KUARTAL 2\n";
    cout<<"                        ------------------------------------\n";
    cout<<"\n              Matkul"<<"\t\t\t                        Jam\n";
    cout<<"------------------------------------"<<"\t\t\t-------------------\n";
    cout<<"              \nSenin\n";
    cout<<"Fisika Fluida, Gelombang, dan Kalor"<<"\t\t\t 07.15 - 09.45\n";
    cout<<"Bahasa Indonesia dan Penulisan Ilmiah"<<"\t\t\t 10.00 - 12.30\n";
    cout<<"Teori Vektor dan Matriks"<<"\t\t\t\t 13.00 - 15.30\n";
    cout<<"\nSelasa\n";
    cout<<"TLS\n";
    cout<<"\nRabu\n";
    cout<<"Kalkulus Variabel Jamak"<<"\t\t\t\t\t 07.15 - 09.45\n";
    cout<<"Fisika Fluida, Gelombang, dan Kalor"<<"\t\t\t 13.00 - 15.30\n";
    cout<<"\nKamis\n";
    cout<<"Kalkulus Variabel Jamak"<<"\t\t\t\t\t 10.00 - 12.30\n";
    cout<<"Teori Vektor dan Matriks"<<"\t\t\t\t 13.00 - 15.30\n";
    cout<<"\nJumat\n";
    cout<<"Pemrograman Dasar"<<"\t\t\t\t\t 07.15 - 09.45\n";
    break;
    
    default:
    cout<<"Silahkan masukkan input dengan benar";
    }
    
   
    return 0;
}

