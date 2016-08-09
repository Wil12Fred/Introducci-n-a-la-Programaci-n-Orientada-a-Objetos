#include <iostream>
#include <vector>
using namespace std;
int main () {
    long long a;
    cin >> a;
    long long b;
    b=a+1;
    vector < vector < unsigned long long > > J(b);
    vector < vector < unsigned long long> > M(b);
    M[0].push_back(1);
    J[0].push_back(1);
    for (long i=1; i<b;i++){
        for (long j=0;j<i+1;j++){
            M[i].push_back(0);
            J[i].push_back(0);
        }
    }

    for (long long i=1;i<a+1;i++){
        M[0][0]=6*M[1][0];
        for (long long  j=1;j<a;j++){
            M[j][0]=J[j-1][0]+J[j+1][0]+
                2*(J[j][1]+J[j+1][1]);
            M[j][j]=M[j][0];

            for (long long k=1;k<(j+2)/2;k++){
                M[j][k]=J[j-1][k]+J[j-1][k-1]+
                    J[j][k-1]+J[j][k+1]+
                    J[j+1][k]+J[j+1][k+1];
                M[j][j-k]=M[j][k];
            }
        }

        J=M;

    }
    cout << M[0][0]<< endl;
    //cout <<  6*(M[0][0]+M[2][0]+2*(M[1][1]+M[2][1])) << endl;
}
