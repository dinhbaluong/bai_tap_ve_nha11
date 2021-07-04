// bai_1,,.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Tạo 1 lớp phân số
a) tạo thuộc tính mẫu số và tử số
b) phương thức tính tổng, tính, thương và hiệu 2 phân số
c) ứng dụng hàm tạo và hàm hủy
*/

#include <iostream>
using namespace std;
class phanso
{
public:
    float mau_so1, tu_so1, mau_so2, tu_so2;
public:
    // ham tao 
    phanso()
    {
        this->mau_so1 = this->tu_so1 = this->mau_so2 = this->tu_so2 = 0;
    }
    // ham huy
    ~phanso()
    {
        this->mau_so1 = this->tu_so1 = this->mau_so2 = this->tu_so2 = 0;
    }
    float  tinh_tong()
    {
        return ((this->tu_so1) / (this->mau_so1)) + ((this->tu_so2) / (this->mau_so2));
    }
    float tinh_hieu()
    {
        return (this->tu_so1 / this->mau_so1) - (this->tu_so2 / this->mau_so2);
    }
    float tinh_tich()
    {
        return (this->tu_so1 / this->mau_so1) * (this->tu_so2 / this->mau_so2);
    }
    float tinh_thuong()
    {
        return (this->tu_so1 / this->mau_so1) / (this->tu_so2 / this->mau_so2);
    }
};

int main()
{
    // khai bao 1 doi tuong 
    phanso obj;
    cout << " nhap vao tu so cau phan so 1 : ";
    cin >> obj.tu_so1;
    cout << "\n";
    cout << " nhap vao mau so cau phan so 1 : ";
    cin >> obj.mau_so1;
    cout << "\n";
    cout << " nhap vao tu so cau phan so 2 : ";
    cin >> obj.tu_so2;
    cout << "\n";
    cout << " nhap vao mau so cau phan so 2 : ";
    cin >> obj.mau_so2;
    cout << "\n";
    cout << " tong hai pha so la = " << obj.tinh_tong() << "\n";
    cout << " hieu hai pha so la = " << obj.tinh_hieu() << "\n";
    cout << " tich hai pha so la = " << obj.tinh_tich() << "\n";
    cout << " thuong hai pha so la = " << obj.tinh_thuong() << "\n";
    return 0;
}


