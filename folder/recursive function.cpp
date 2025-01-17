[0000]    int power(int a, int n) {
[0001]        if (n==0) return 1;
[0002]        return a*power(a, n-1);
[0003]    }
[0004]    





  [0000]    int fact(int n) {
[0001]        if (n==1) return 1;
[0002]        return n*fact(n-1);
[0003]    }
[0004]




  [0000]    int fibo(int n) {
[0001]        int * f = new int[n+1];
[0002]        f[1] = 1;
[0003]        f[2] = 1;
[0004]        for (int i=3; i<n+1; i++)
[0005]            f[i]=f[i-1]+f[i-2];
[0006]        return f[n];
[0007]    }
[0008]  





  [0000]    int gcd (int a, int b) {
[0001]        if (b==0) return a;
[0002]        return gcd(b, a%b);
[0003]    }
[0004]    




  #include <iostream>
using namespace std;
 
int cnt = 0;
 
void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "원판 " << n << "을 " << A << "에서 " << C << "로 옮긴다" << endl;
        cnt++;
        return;
    }
    
    hanoi(n - 1, A, C, B);
    cout << "원판 " << n << "을 " << A << "에서 " << C << "로 옮긴다" << endl;
    cnt++;
    hanoi(n - 1, B, A, C);
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        cnt = 0;
 
        hanoi(n, 'A', 'B', 'C');
        cout << cnt << endl;
    }
 
    return 0;
}
