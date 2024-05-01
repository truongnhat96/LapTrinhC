#include <bits/stdc++.h>
#define endln "\n"
using namespace std;
using ll = long long;
using ld = long double;
using lli = long long int;
const int MOD = 1e9+7;

//Đóng gói trong OOP

class sinhvien{
	private:
		//Attributes: thuộc tính
		string ten, lop;
		double diem;
		static int dem; //static: dùng chung trong class
	public: 
	    //Methods: phương thức
	     void nhap(){
	    	getline(cin, ten);
	    	cin >> lop;
	    	cin >> diem;
	    	cin.ignore();
		}
		void in(){
			++dem;
			cout << "------------------------" << endln;
			cout << "id: " << string(3-to_string(dem).size(), '0') << dem << endln;
			cout << ten << endln;
			cout << lop << endln;
			cout << fixed << setprecision(2) << diem << endln;
		}	
		
		void chuanhoa(){
			string ans;
			stringstream ss(ten);
			string token;
			while(ss>> token){
				 ans+=toupper(token[0]);
				 for(int i = 1;i<token.size();i++) ans+=tolower(token[i]);
				 ans+=" ";
			}
			token.pop_back();
			ten = ans;
		}
		
		void substring(){
			 stringstream ss(ten);
			 string tok;
			 while(ss >> tok);
			 ten = tok; 
		}
		
		//contructer: ko có kiểu trả về, có tên trùng với tên class
		sinhvien(){
			//cotructor không có tham số
		}
		//contructor có tham số
		sinhvien(string name, string lop, double diem){
			this->ten = name;
			this->lop = lop;
			this->diem = diem;
		}
		
		// truy cập vào các thuộc tính của class
		//getter
		string get_lop(){
			return lop;
		}
		string get_ten(){
			return ten;
		}
		double get_diem(){
			return diem;
		}
		//setter
		void set_lop(string other){
			lop = other;
		}
		
		
		//operator overloading
		friend istream& operator >> (istream& in, sinhvien &x){
			getline(in, x.ten);
			in >> x.lop >> x.diem;
		    in.ignore();
			return in;
		}
		friend ostream& operator << (ostream &out, sinhvien x){
			out << x.ten << ' ' << x.lop << ' ' <<  x.diem << endln;
			return out;
		}
		//có thể dùng friend để nạp chồng
		bool operator > (sinhvien other){
			return other.diem < this->diem;
		}
};
int sinhvien::dem = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sinhvien x("Nguyen van a", "22CN2", 2.89);
    cout << x;
    sinhvien y;
    cin >> y;
    return 0;
}
