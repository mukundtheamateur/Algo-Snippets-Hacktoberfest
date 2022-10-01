// Both approach and code (Editorialist's) from Editorial
// https://discuss.codechef.com/t/pilesparity-editorial/103393
// Algorithm not understood:
// Sprague-Grundy theorem
//
// Mathematical concepts to look up:
// Can xor sum make int overflow

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin >> t;
	
    while(t--) {
        int n;
        
        cin >> n;
        
        int* piles = new int[n];
        
        for(int i = 0; i < n; i++) {
            cin >> piles[i];
        }
        
        int xorSum = 0;
        
        for(int i = 0; i < n; i++) {
            int grundyNum;
            if((i + 1) % 2 != 0)
                grundyNum = piles[i] % 2;
            else
                grundyNum = piles[i] / 2;
                
            xorSum ^= grundyNum;
        }
        
        if(xorSum == 0)
            cout << "CHEFINA" << endl;
        else
            cout << "CHEF" << endl;
    }
	return 0;
}
