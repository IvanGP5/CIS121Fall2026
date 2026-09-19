#include <iostream>
using namespace std;
int main() {

    double numBooks;
    double costPerBook;
    double orderTotal;
    double scharge;


    cout << "Enter number of books to order: ";
    cin >> numBooks;
    cout << "Enter cost per book: ";
    cin >> costPerBook;

    orderTotal = numBooks * costPerBook;

    if (orderTotal > 50.00) {
        scharge = 0.00;
    }
    else { 
        scharge = 25.00;
    }


    cout << "Order Total:     $" << orderTotal << endl;
    cout << "Shipping Charge: $" << scharge << endl;

    return 0;
}