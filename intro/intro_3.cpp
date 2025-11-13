#include <iostream>
#include <string>
#include <algorithm>

int main(){
    long long max_longest_rep = 1;
    long long current_longest_rep = 1;

    std::string dna;
    std::cin >> dna;

    for(long long i = 1; i < dna.length(); i++){
        if(dna[i] == dna [i-1]){
            current_longest_rep++;
            max_longest_rep = std::max(max_longest_rep, current_longest_rep);
        } else current_longest_rep = 1;
    }

    std::cout << max_longest_rep;
}