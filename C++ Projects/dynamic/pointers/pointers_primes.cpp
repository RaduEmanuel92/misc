// Ex6_04.cpp
// Calculating primes using pointer notation
#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main()
{
const size_t ma {700}; // Number of primes required
long primes[ma] {2L, 3L, 5L}; // First three primes defined
size_t nr {3}; // Count of primes found so far
long trial {5}; // Candidate prime
bool isprime {true}; // Indicates when a prime is found
do
{
trial += 2; // Next value for checking
size_t i {}; // Index to primes array
// Try dividing the candidate by all the primes we have
do
{
isprime = trial % *(primes + i) > 0; // False for exact division
} while (++i<nr && isprime);
if (isprime)
{ // We got one...
*(primes + nr++) = trial; // ...so save it in primes array
}
} while (nr < ma);
// Output primes 10 to a line
cout << "The first " << ma << " primes are:" <<endl;
for (size_t i{} ; i < ma ; ++i)
{
cout <<setw(7) << *(primes + i);
if ((i+1) % 10 == 0) // Newline after every 10th prime
cout <<endl;
}
cout <<endl;
}
