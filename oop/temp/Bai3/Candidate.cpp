//
// Created by ThanhPN on 4/16/2020.
//
#include "Candidate.h"
#include <cmath>
#include <iostream>
void Candidate::Nhap()
{
    std::cout<<std::endl<<"Nhap MSSV: ";
    std::cin>>Ma;
    std::cout<<std::endl<<"Nhap Diem Toan: ";
    std::cin>>DiemToan;
    std::cout<<std::endl<<"Nhap Diem Van: ";
    std::cin>>DiemVan;
    std::cout<<std::endl<<"Nhap Diem Anh Van: ";
    std::cin>>DiemAnh;
    std::cout<<std::endl<<"Nhap Ten: ";
    std::cin>>Ten;
};
float Candidate::DTB()
{
    DiemTB= (DiemToan+DiemVan+DiemAnh)/3;
};
void Candidate::Xuat()
{

    std::cout<<"MSSV:";
    std::cout<<Ma<<std::endl;
    std::cout<<"Ten:";
    std::cout<<Ten<<std::endl;
    std::cout<<"Diem Toan:";
    std::cout<<DiemToan<<std::endl;
    std::cout<<"Diem Van:";
    std::cout<<DiemVan<<std::endl;
    std::cout<<"Diem Anh Van:";
    std::cout<<DiemAnh<<std::endl;
    std::cout<<"Diem TB:";
    std::cout<<DiemTB<<std::endl;


}

