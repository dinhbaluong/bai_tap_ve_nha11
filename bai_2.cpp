// bai_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 2: Tạo lớp sinh viên như ví dụ:
a) nhập vào tên , mã sinh viên, điểm 3 môn và xếp loại sinh viên
b) in các kết quả vừa nhập và tính toán sau đó ghi ra file
*/

#include <iostream>
#include<string>
#include <fstream>
using namespace std;
class sinhvien
{
public:
    string hovaten;
    char xep_loai;
    int id;
    float toan = 0, ly = 0, hoa = 0, tb = 0;
public:
    sinhvien()
    {
        this->id = this->toan = this->ly = this->hoa = 0;
        this->hovaten = "";
        this->xep_loai = ' ';
    }
    ~sinhvien()
    {
        this->id = this->toan = this->ly = this->hoa = 0;
        this->hovaten = "";
        this->xep_loai = ' ';
    }
    void set();
    void get();
    void tinh_tb()
    {
        this->tb = (this->toan + this->ly + this->hoa) / 3;
        cout << " diem trung binh la : " << this->tb << "\n";
        //xep loai sinh vien
        if (this->tb >= 9)
        {
            this->xep_loai = 'A';
            cout << "xep loai : " << this->xep_loai << "\n";
        }
        else if (this->tb >= 7 && this->tb < 9)
        {
            this->xep_loai = 'B';
            cout << "xep loai : " << this->xep_loai << "\n";
        }
        else if (this->tb >= 5 && this->tb < 7)
        {
            this->xep_loai = 'C';
            cout << "xep loai : " << this->xep_loai << "\n";
        }
        else
        {
            this->xep_loai = 'D';
            cout << "xep loai : " << this->xep_loai << "\n";
        }
    }
};
void sinhvien::set()
{
    cout << " nhap ten sinh vien : ";
    getline(cin, hovaten);
    cout << "\n";
    cout << "nhap ma so sinh vien : ";
    cin >> id;
    cout << "\n";
    cout << "nhap diem toan : ";
    cin >> toan;
    cout << "\n";
    cout << "nhap diem ly : ";
    cin >> ly;
    cout << "\n";
    cout << "nhap diem hoa : ";
    cin >> hoa;
    cout << "\n";
}
void sinhvien::get()
{
    cout << " ho ten sinh vien : " << this->hovaten << "\n";
    cout << " ma so sinh vien : " << this->id << "\n";
    cout <<" diem toan : " << this->toan << "\n";
    cout << " diem ly : " << this->ly << "\n";
    cout << " diem hoa : " << this->hoa << "\n";
}
int main()
{
    fstream f;
    sinhvien obj;
    obj.set();
    obj.get();
    obj.tinh_tb();
    // mo flie va ghi vao file data
    f.open("D:\\data\\danh_sach_sinh_vien.txt", ios::out);
    f << "ho va ten : " << obj.hovaten << " msv : " << obj.id << " diem toan = " << obj.toan << " diem ly = " << obj.ly << " diem hoa = " << obj.hoa << " diem tb = " << obj.tb <<" xep loai : "<<obj.xep_loai<<"\n";
    f.close();
    return 0;
}

