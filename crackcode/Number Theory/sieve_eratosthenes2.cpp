// the following implementation
// stores only halves of odd numbers
// the algorithm is a faster by some constant factors

#include <bitset>
#include <iostream>
using namespace std;

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
	Primes[0] = 1;
	for (int i = 3; i*i <= n; i += 2) {
		if (Primes[i / 2] == 0) {
			for (int j = 3 * i; j <= n; j += 2 * i){
                            cout<<Primes[4]<<endl;
                            cout<<j/2<<endl;
				Primes[j / 2] = 1;
                            cout<<Primes[4]<<endl;

            }
		}
	}
}

int main()
{
	int n;
    cin>>n;
	SieveOfEratosthenes(n);
	for (int i = 1; i <= n; i++) {
        cout << Primes[i] << ' ';

		// if (i == 2)
		// 	cout << Primes[i/2] << ' ';
		// else if (i % 2 == 1 && Primes[i / 2] == 0)
		// 	cout << Primes[i/2] << ' ';
	}
	return 0;
}
