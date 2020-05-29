//
// Created by ThanhPN on 4/16/2020.
//
#include <bits/stdc++.h>

#ifndef CANDIDATE_CANDIDATE_H
#define CANDIDATE_CANDIDATE_H
class Candidate
{
private:
    int Ma;
    char Ten[30];
    long NgaySinh;
    float DiemVan;
    float DiemToan;
    float DiemAnh;
    float DiemTB;
public:
    void Nhap();
    float DTB();
    void Xuat();
};

#endif //CANDIDATE_CANDIDATE_H
