// bai5_TinhChuViDienTichHCN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
double tinhCV(double d, double r) { return (d + r) * 2; }
double tinhDT(double d, double r) { return d * r; }
int main()
{
	cout << "CHUONG TRINH TINH CHU VI DIEN TICH HINH CHU NHAT\n";

	double dai, rong;
	cout << "nhap chieu dai:";
	cin >> dai;
	cout << "nhap chieu rong:";
	cin >> rong;

	//tinh toan
	cout << "CHU VI HINH CHU NHAT LA: " << (dai + rong) * 2 << endl;
	cout << "DIEN TICH HINH CHU NHAT LA:" << dai + rong << endl;

	//xai ham
	cout << "CHU VI HINH CHU NHAT LA: " << tinhCV(dai, rong) << endl;
	cout << "DIEN TICH HINH CHU NHAT LA: " << tinhDT(dai, rong) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
