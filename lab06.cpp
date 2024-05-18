#include <iostream>
#include <cmath>
using namespace std;

class Hexagon {
private:
    int sideLength;

public:
    Hexagon() {
        sideLength = 0;
    }

    Hexagon(int length) {
        sideLength = length;
    }

    void setSideLength(int length) {
        sideLength = length;
    }

    int getSideLength() const {
        return sideLength;
    }

    int calculatePerimeter() const {
        return 6 * sideLength;
    }

    float calculateArea() const {
        return (3 * sqrt(3) / 2) * sideLength * sideLength;
    }
};

int main() {
    Hexagon hexagon;

    int choice;

    do {
        cout << "===== Меню =====" << endl;
        cout << "1. Встановити довжину сторони" << endl;
        cout << "2. Отримати довжину сторони" << endl;
        cout << "3. Обчислити периметр" << endl;
        cout << "4. Обчислити площу" << endl;
        cout << "5. Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int length;
            cout << "Введіть довжину сторони: ";
            cin >> length;
            hexagon.setSideLength(length);
            break;
        case 2:
            cout << "Довжина сторони: " << hexagon.getSideLength() << endl;
            break;
        case 3:
            cout << "Периметр: " << hexagon.calculatePerimeter() << endl;
            break;
        case 4:
            cout << "Площа: " << hexagon.calculateArea() << endl;
            break;
        case 5:
            cout << "До побачення!";
            break;
        default:
            cout << "Невірний вибір. Спробуйте ще раз." << endl;
        }
    } while (choice != 5);


    return 0;
}