#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Deklarasi variabel
    int alas, tinggi, sisi_miring, keliling;
    
    //input alas dan tinggi segtuga
    std::cout<<"Alas = "; std::cin>>alas;
    std::cout<<"Tinggi = "; std::cin>>tinggi;
    
    //logika program
    sisi_miring = sqrt(alas*tinggi + tinggi*tinggi);
    keliling = alas + tinggi + sisi_miring;
    
    //tampilkan sisi miring dan keliling segitiga
    
    std::cout<<"Sisi Miring = "<<  sisi_miring;
    std::cout<<" \nKeliling = "<< keliling;
    std::cout<<"\n";
    
    std::cout<<" \ndevelop @mahendrarendi \n";
    
    return 0;
}
