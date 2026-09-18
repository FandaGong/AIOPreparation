//https://orac2.info/problem/330/

#include <iostream>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long r, s;
    long long tickets;

    // Read the inputs
    std::cin >> r >> s;
    std::cin >> tickets;

    // Use long long to prevent integer overflow during multiplication
    long long total_seats = r * s;

    long long sitting = 0;
    long long standing = 0;

    if (tickets <= total_seats) {
        sitting = tickets;
        standing = 0;
    } else {
        sitting = total_seats;
        standing = tickets - total_seats;
    }

    // Print the results separated by a space
    std::cout << sitting << " " << standing << "\n";

    return 0;
}

