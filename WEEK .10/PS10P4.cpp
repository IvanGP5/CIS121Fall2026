#include <iostream>
using namespace std;

void computeWidgets(int nwidgets, double& cperwidget, double& eprice, double& stax, double& torder) {
    if (nwidgets >= 10000) {
        cperwidget = 4.00;
    }
    else if (nwidgets >= 5000) {
        cperwidget = 5.00;
    }
    else {
        cperwidget = 10.00;
    }

    eprice = nwidgets * cperwidget;
    stax = eprice * 0.07;
    torder = eprice + stax;
}

int main() {
    int nwidgets;
    double cperwidget, eprice, stax, torder;
    double sumAllTotalOrders = 0;

    cout << "Enter number of widgets (Press Ctrl+Z to stop):\n";
    while (cin >> nwidgets) {
        computeWidgets(nwidgets, cperwidget, eprice, stax, torder);
        sumAllTotalOrders += torder;

        cout << "Widgets: " << nwidgets
            << " | Cost/Widget: $" << cperwidget
            << " | Ext. Price: $" << eprice
            << " | Tax: $" << stax
            << " | Total Order: $" << torder << endl;
    }

    cout << "\n==============================\n";
    cout << "Sum of all total orders: $" << sumAllTotalOrders << endl;

    return 0;
}