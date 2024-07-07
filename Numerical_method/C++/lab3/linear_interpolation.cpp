// Linear interpolation

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x_lower, x_upper, y_lower, y_upper, x_target, y_target;
    float x_values[10], y_values[10];
    int num_points, i;

    cout << "\nEnter number of input points:\n";
    cin >> num_points;

    if (num_points < 2) {
        cout << "\nNeed at least two points for interpolation.\n";
        return 1;
    }

    cout << "\nEnter the x values: \n";
    for (i = 0; i < num_points; i++) {
        cin >> x_values[i];
    }

    cout << "\nEnter the y values: \n";
    for (i = 0; i < num_points; i++) {
        cin >> y_values[i];
    }

    cout << "\nEnter the value of x_target: ";
    cin >> x_target;

    bool found = false;
    for (i = 0; i < num_points - 1; i++) {
        if ((x_target >= x_values[i]) && (x_target <= x_values[i + 1])) {
            x_lower = x_values[i];
            y_lower = y_values[i];
            x_upper = x_values[i + 1];
            y_upper = y_values[i + 1];
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nThe value of x_target doesn't lie between the entered values\n";
    } else {
        cout << "\nx_lower = " << x_lower << ", y_lower = " << y_lower << endl;
        cout << "\nx_upper = " << x_upper << ", y_upper = " << y_upper << endl;
        y_target = y_lower + ((y_upper - y_lower) / (x_upper - x_lower)) * (x_target - x_lower);
        cout << "\nThe interpolated value is: " << y_target;
    }

    return 0;
}
