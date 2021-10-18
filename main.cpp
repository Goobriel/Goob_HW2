#include <iostream>

using namespace std;

struct Check{
    float CheckAMount = 0;
    int CheckNum = 0;
    string CheckMemo = "x";
    bool operator<(float c_amount) const;
    friend ostream& operator << (ostream& out,Check C);
};

ostream& operator << (ostream& out ,Check C){
    out << "Check Amount: $" << C.CheckAMount << ", ";
    out << "Check Number: " << C.CheckNum << ", ";
    out << "Memo: " << C.CheckMemo << ". ";
    return out;
}


int main() {
    Check d;
    cout << d << endl;
    return 0;
}

bool Check::operator<(const float c_amount) const{
    if (CheckAMount < c_amount)
        return false;
    else
        return true;
}