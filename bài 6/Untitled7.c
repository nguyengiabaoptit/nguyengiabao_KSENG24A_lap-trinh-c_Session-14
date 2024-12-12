int main() {

    char chuoi = "Xin chao cac ban! 123";


int demChuCai = 0;
for (char c : chuoi) {
if (isalpha(c)) { 
demChuCai++;
}
}

cout << "So ky tu la chu cai trong chuoi la: " << demChuCai << endl;

return 0;
}

