#include <iostream>
using namespace std;

// we can only use in all data types we created in the union
/* definition : A union can have many members but only one of its members will have a value
                at any given time. */
union product
{
    int productid;
    int price;
};

int main(){
    union product obj;
    cout << "Enter product-id: ";
    cin >> obj.productid;

    cout << "Enter price of product: ";
    cin >> obj.price;
    
    cout << "Product-id is: " << obj.productid << endl;
    cout << "Product price is: " << obj.price << endl;
    return 0;
}
