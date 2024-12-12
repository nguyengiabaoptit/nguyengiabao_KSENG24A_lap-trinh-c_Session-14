#include <stdio.h>

int main() {

char chuoi = "Xin chao cac ban!";


stringstream ss(chuoi);
string word;
int soTu = 0;
while (ss >> word) {
soTu++;
}

cout << "So tu trong chuoi la: " << soTu << endl;

return 0;
}
