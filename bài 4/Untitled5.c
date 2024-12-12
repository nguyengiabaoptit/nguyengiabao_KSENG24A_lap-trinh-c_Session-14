#include <stdio.h>
int main() {

char chuoi = "Xin chao cac ban!";


char kyTu;
cout << "Nhap vao mot ky tu: ";
cin >> kyTu;


int dem = 0;
for (char c : chuoi) {
if (c == kyTu) {
dem++;
}
}

cout << "Ky tu '" << kyTu << "' xuat hien " << dem << " lan trong chuoi." << endl;

return 0;
}

