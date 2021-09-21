#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int praktikum, teori, tugas, final_project, rata_rata;
    std::cout<<" Rata-rata Nilai Pemrograman Terstruktur"; 
    std::cout<<"\nNilai Praktkum = "; std::cin>>praktikum;
    std::cout<<"Nilai Teori = "; std::cin>>teori;
    std::cout<<"Nilai Tugas = "; std::cin>>tugas;
    std::cout<<"Nilai Final Project = "; std::cin>>final_project;
    
    rata_rata = (praktikum*40/100 + teori*40/100 + tugas*10/100 + final_project*10/100) / 4 ; 
    
    std::cout<<"Rata-rata Nilai = "<<rata_rata;
    
    
    std::cout<<" \ndevelop @mahendrarendi \n";
    
    return 0;
}
