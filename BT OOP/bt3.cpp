#include <bits/stdc++.h>
#define endln "\n"
#define fix(n) fixed<<setprecision(n)
using namespace std;
using ll = long long;
using ld = long double;
using lli = long long int;
const int MOD = 1e9+7;
class sinhvien{
	private:
		string ten, lop, ngaysinh,msv;
		double gpa;
	public:
		friend void nhap(sinhvien&);
		friend void in(sinhvien);
		void chuanhoa();	
};
void nhap(sinhvien &a){
	a.msv = "B20DCCN001";
	 getline(cin, a.ten);
	 cin >> a.lop >> a.ngaysinh;
	 cin >> a.gpa;
}
void in(sinhvien a){
	a.chuanhoa();
	cout << a.msv << " " << a.ten<< " " << a.lop << " " << a.ngaysinh << " " << fix(2) << a.gpa;
}
void sinhvien::chuanhoa(){
	 if(ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
	 if(ngaysinh[4] == '/') ngaysinh.insert(3,"0");
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sinhvien a;
    nhap(a);
    in(a);
    return 0;
}
