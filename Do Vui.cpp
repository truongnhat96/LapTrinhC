#include <bits/stdc++.h>
using namespace std;
string n,w;
vector<string> ok;
void viethoa(string &x){
	for(int i=0;i<x.size();i++){
		x[i]=toupper(x[i]);
	}
}
void user(){
	cout << "Xin moi nhap ho va ten: ";
	getline(cin,n);
	stringstream ss(n);
	while(ss >> w){
	ok.push_back(w);
	}
	viethoa(ok.back());
}
void xuat(){
	cout << "XIN CHAO " << ok.back() << "!" << endl;
	cout << endl;
	cout << "                     *****CHAO MUNG BAN DEN VOI TRO CHOI DO VUI CO THUONG***** ~~^^~~" << endl;
	cout << endl;
	cout << "Nhan phim bat ky de tiep tuc ....";
	cin.ignore();
}
char da[10]={'A','C','C','C','D','B','D','A','A','B'};
int i=0;
int diem=0;
void ketqua(char m){
	if(m==da[i] || (int)m-32==(int)da[i]){
		diem+=1;
		cout << "CHUC MUNG! Ban duoc cong 1 diem ^^" << endl;
		cout << "Tong diem hien tai: " << diem << "/10" << endl;
	}else{
		cout << "SAI RUI :((( tiec qua" << endl;
		cout << "Hay co gang o nhung cau hoi tiep theo ban nhe ^_^" << endl;
	}
	i++;
	cout << "Cau tiep theo -> ";
	system("pause");
	cout << endl;
}
char tl[10];
void cauhoi(){
	cout << "Cau 1: Chatgpt ra doi vao nam nao?" << endl;
	cout <<  "A: 2021                       B: 2022" << endl;
	cout <<  "C: 2023                       D: 2024" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[0];
	ketqua(tl[0]);
	cout << "Cau 2: Muc diem GPA duoc tinh de danh gia sinh vien tai da so cac truong dai hoc co thang diem toi da la?" << endl;
	cout <<  "A: 990                         B: 9" << endl;
	cout <<  "C: 4                           D: 10" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[1];
	ketqua(tl[1]);
	cout << "Cau 3: Co bao nhieu ten bien trong PASCAL co do dai 11 chi chua 2 chu cai A,B, khoi dau boi AAA hoac BBB" << endl;
	cout <<  "A: 1024                       B: 36" << endl;
	cout <<  "C: 512                        D: 514" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[2];
	ketqua(tl[2]);
	cout << "Cau 4: Co bao nhieu hoan vi cua cac chu cai trong xau ABCDEFGH ma trong do co chua xau con DEF" << endl;
	cout <<  "A: 1440                       B: 5040" << endl;
	cout <<  "C: 720                        D: 360" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[3];
	ketqua(tl[3]);
	cout << "Cau 5: Tinh so day nhi phan co do dai bang 15, trong do co chua 5 chu so 0 va khong co 2 chu so 0 nao dung canh nhau" << endl;
	cout <<  "A: 252                       B: 55440" << endl;
	cout <<  "C: 126                       D: 462" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[4];
	ketqua(tl[4]);
	cout << "Cau 6: Co tat ca bao nhieu chau luc tren the gioi" << endl;
	cout <<  "A: 5                       B: 6" << endl;
	cout <<  "C: 8                       D: 7" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[5];
	ketqua(tl[5]);
	cout << "Cau 7: Dau la cau lenh dung de doc cac chuoi ky tu trong ngon ngu lap trinh C " << endl;
	cout <<  "A: cout                       B: printf" << endl;
	cout <<  "C: cin                        D: scanf" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[6];
	ketqua(tl[6]);
	cout << "Cau 8: Dien thoai Iphone 7 Plus duoc san xuat vao nam nao " << endl;
	cout <<  "A: 2017                       B: 2016" << endl;
	cout <<  "C: 2018                       D: 2015" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[7];
	ketqua(tl[7]);
		cout << "Cau 9: Ten day du cua nhan vat kirito trong phim anime Sword Art Online co ten that la " << endl;
	cout <<  "A: kirigaya kazuto                       B: kiri kazuto" << endl;
	cout <<  "C: narusaka kazuto                       D: beater" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[8];
	ketqua(tl[8]);
	cout << "Cau 10: Tinh nao duoi day giap voi TP Ha Noi " << endl;
	cout <<  "A: Lang Son                       B: Bac Giang" << endl;
	cout <<  "C: Ha Giang                       D: Thanh Hoa" << endl;
	cout << "Cau tra loi cua ban la: "; 
	cin >> tl[9];
	ketqua(tl[9]);
	cout << "Tong diem cua ban: " << diem;
}

void cap_do_nguoichoi(){
	
}


int main(){
	user();
	xuat();
    char a='y';
    char b='n';
    char c;
    cout << "De bat dau, moi chon y[YES], tu choi tham gia, moi chon n[NO] " << endl;
    cout << "y/n: ";
	cin >> c; 
    if(a==c || (int)c == (int)a-32){
          	cout << "BAT DAU TRO CHOI" << endl;
          	cout << "Xin luu y, hay doc ky huong dan truoc khi bat dau tro choi! " << endl;
          	char o;
          	cout << "Nhap vao '!' de xem chi tiet ve tro choi, nhan 's' de bat dau choi, nhan 'e' de thoat tro choi " << endl;
          	cout << "s[Start]                      e[END]                      ![Huong dan]     " << endl;
          	cin >> o;
          	if(o=='!'){
          		cout << "LUU Y: Khi an xem huong dan co nghia la ban se tiep tuc choi giai do va khong the thoat khoi tro choi" << endl;
          		cout << "Ban co muon tiep tuc: " << endl;
          		cout << "y/n: ";
          		char z;
          		cin >> z;
          		if(z=='y' || z=='Y'){			
          		  cout << "Tro choi do vui gom 10 cau hoi, khong gioi han thoi gian tra loi nen cac ban " << endl;
          		  cout << "co the suy nghi that ky roi chon dap an, 1 cau hoi gom co 4 phuong an A,B,C,D, " << endl;
          		  cout << "nhiem vu cua ban la phai lua chon 1 trong 4 dap an dung trong cau hoi, truong " << endl;
          		  cout << "hop chon nhieu hon 1 dap an se duoc tinh la cau tra loi sai. Cac cau hoi thuong " << endl;
          		  cout << "thuong bao gom rat nhieu chu de va cac linh vuc, tra loi dung 1 cau ban se co 1 diem, " << endl;
          		  cout << "thang diem toi da la 10 diem. Dat diem toi da se duoc thang len cap do cao hon, o " << endl;
          		  cout << "moi cap do muc do cau hoi se khac nhau, cap do cang cao, cau hoi cang kho. " << endl;
          		  cout << "SAN SANG VAO TRO CHOI -> LINK START! "<< endl;
          		  system("pause");
          		  cauhoi();
          	          }
			  }else if(o=='e' || o=='E'){
			  	   	cout << "KET THUC TRO CHOI! " << endl;
		            cout << "Nhap phim bat ky de thoat.....";
		            cin.ignore();
			  }else{
			  	 cout << "SAN SANG VAO TRO CHOI -> LINK START! "<< endl;
          		  system("pause");
			  	cauhoi();
			  }
          	
	}else{
		cout << "KET THUC TRO CHOI! " << endl;
		cout << "Nhap so bat ky de thoat.....";
		int vl;
		cin >> vl;
		return 0;
	}
}