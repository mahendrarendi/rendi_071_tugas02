#include <iostream>
using namespace std;

int main ()
{
int hrg_awal,jml_cicilan,ttl_pengeluaran,bunga,keuntungan,hrg_motor,jngka_waktu;

  cout<<"\tProgram Cicilian & Kredit Pembelian Motor"<<endl;  
 
   
  cout<<endl;
  cout<<"Harga Motor   = Rp. ";cin>>hrg_motor;
  cout<<"Jangka Waktu Cicilan (Bulan) =  ";cin>>jngka_waktu;
  cout<<endl;
  cout<<"\nRincian Biaya dan Keuntungan"<<endl; 
  cout<<"-----------------------------------"<<endl;;  
    
  hrg_awal=hrg_motor/jngka_waktu; 
  bunga=hrg_awal*0.1; 
  jml_cicilan=hrg_awal+bunga; 
  ttl_pengeluaran=jml_cicilan*jngka_waktu; 
  keuntungan=ttl_pengeluaran-hrg_motor;
  
  cout<<"Bunga    =  Rp. "<<bunga;
  cout<<endl;
  cout<<"Cicilan  = Rp. "<<jml_cicilan;
  cout<<endl;
  cout<<"Total Harga  = Rp. "<<ttl_pengeluaran;
  cout<<endl;
  cout<<"Keuntungan Diler  = Rp. "<<keuntungan;
  cout<<endl;
  cout<<"\ndevelop @mahendrarendi"<<endl; 
  cout<<endl;
 
    return 0;
}
