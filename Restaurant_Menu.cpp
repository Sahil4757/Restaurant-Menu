// finall codeeeeeeeee in progresssssssssss
#include<iostream>
using namespace std;

void menu ();

int main()
{
    char name[50], gotostart;
    int choice = 0, pchoice, pchoice2, quantity = 0;


    cout << "--------------Welcome to Sunshine Restaurant-------------\n\n";
    cout << "What should we call you ? ";
    cin >> name;
    cout << "Hello " << name << "\n\nWhat would you like to order?\n\n";

    beginning:
    cout << "*****************************************************************************" << endl;
    cout <<                            "\t\t\t\t\tMENU" << endl;
    cout << "*****************************************************************************" << endl;
    cout << "(1) Pizza          " << endl;
    cout << "(2) Burger         " << endl;
    cout << "(3) Sandwich       " << endl;
    cout << "(4) Rolls          " << endl;
    cout << "(5) Biryani        " << endl;
    cout << "(6) Salad          " << endl;
    cout << "(7) Beverage       " << endl;
    cout << "(8) Dessert        " << endl;
    cout << "(0) Exit           " << endl;
    cout << "*****************************************************************************" << endl;

    cout << "Please enter your choice : " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
     menu();
        cout << "1) Veggie Feast\n2) Margherita\n3) Spiced Paneer\n4) Chicken Sausage\n5) Pepperonni Pizza\n";
        cout << "Enter your preferred flavor (1-5): ";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 5){
            cout << "\n1) Small Rs 250\n2) Regular Rs 450\n3) Large Rs 600\n";
            cout << "Choose a size (1-3): ";
            cin >> pchoice2;

            if (pchoice2 >= 1 && pchoice2 <= 3){
                cout << "Please enter quantity : ";
                cin >> quantity;

                switch (pchoice2)
                {
                    case 1:
                        choice = 250 * quantity;
                        break;
                    case 2:
                        choice = 450 * quantity;
                        break;
                    case 3:
                        choice = 600 * quantity;
                        break;
                }
                system("CLS");

                cout << "--------Your Order--------\n";
                switch (pchoice)
                {
                    case 1:
                        cout << quantity << " Veggie Feast\n";
                        break;
                    case 2:
                        cout << quantity << " Margherita\n";
                        break;
                    case 3:
                        cout << quantity << " Spiced Paneer\n";
                        break;
                    case 4:
                        cout << quantity << " Chicken Sausage\n";
                        break;
                    case 5:
                        cout << quantity << " Pepperonni Pizza\n";
                        break;
                }

                cout << "Your Total Bill is : " << choice << endl;
                cout << "Thank you for Ordering\n";
                cout << "Would you like to order something else? (Y) (N) : ";
                cin >> gotostart;
                if (gotostart == 'Y' || gotostart == 'y'){
                    goto beginning;
                }
            }
        }
        break;

    case 2:
        menu();
        cout << "1) Chrispy Chicken   Rs 200\n2) Veggie Burger   Rs 140\n3) Aloo Tikki Burger   Rs 160\n4) Spicy Chicken   Rs 180\n";
        cout << "Which burger would you prefer (1-4) : ";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 4){
            cout << "Please select quantity : ";
            cin >> quantity;

            switch (pchoice)
            {
                case 1:
                    choice = 200 * quantity;
                    break;
                case 2:
                    choice = 140 * quantity;
                    break;
                case 3:
                    choice = 160 * quantity;
                    break;
                case 4:
                    choice = 180 * quantity;
                    break;
            }
            system("CLS");

            cout << "--------Your Order--------\n";
            switch (pchoice)
            {
                case 1:
                    cout << quantity << " Chrispy Chicken\n";
                    break;
                case 2:
                    cout << quantity << " Veggie Burger\n";
                    break;
                case 3:
                    cout << quantity << " Aloo Tikki Burger\n";
                    break;
                case 4:
                    cout << quantity << " Spicy Chicken\n";
                    break;
            }

            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y/N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y'){
                goto beginning;
            }
        }
        break;

    case 3:
        menu();
        cout << "1) Aloo Pattie sandwich   Rs 150\n2) Tandoori Chicken sandwich   Rs 100\n3) Peri Peri Chicken   Rs 120\n";
        cout << "What would you prefer (1-3): ";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 3){
            cout << "Please select quantity: ";
            cin >> quantity;

            switch (pchoice)
            {
                case 1:
                    choice = 150 * quantity;
                    break;
                case 2:
                    choice = 100 * quantity;
                    break;
                case 3:
                    choice = 120 * quantity;
                    break;
            }
            system("CLS");

            cout << "--------Your Order--------\n";
            switch (pchoice)
            {
                case 1:
                    cout << quantity << " Aloo Pattie sandwich\n";
                    break;
                case 2:
                    cout << quantity << " Tandoori Chicken sandwich\n";
                    break;
                case 3:
                    cout << quantity << " Peri Peri Chicken\n";
                    break;
            }

            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y) (N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y'){
                goto beginning;
            }
        }
        break;

    case 4:
        menu();
        cout <<  "1)Chicken Teriyaki roll   Rs 80\n2)New Sig wrap   Rs 90\n3)Corn peas signature wrap   Rs 100\n";
        cout << "What would you prefer (1-3): ";
        cin >> pchoice;
        
        if (pchoice >= 1 && pchoice <= 3){
            cout << "Please select quantity : ";
            cin >> quantity;

            switch (pchoice)
            {
            case 1:
                choice = 80 * quantity;
                break;
            case 2:
                choice = 90 * quantity;
                break;
            case 3:
                choice = 100 * quantity;
                break;
            }
            system("CLS");

            cout << "--------Your Order--------\n";
            switch (pchoice)
            {
                case 1:
                    cout << quantity << " Chicken Teriyaki roll\n";
                    break;
                case 2:
                    cout << quantity << " New Sig wrap\n";
                    break;
                case 3:
                    cout << quantity << " Corn peas signature wrap \n";
                    break;
            }
            
            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y) (N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y'){
                goto beginning;
            }
        }
        break;

    case 5:
        menu();
        cout << "1)Chicken biryani    Rs 600\n2)Mutton biryani    Rs 500\n3)Egg biryani    Rs 400\n";
        cout << "What would you prefer: (1-3)";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 3){
            cout << "Please enter quantity: ";
            cin >> quantity;
        }

        switch (pchoice)
        {
        case 1:
            choice = 600 * quantity;
            break;

        case 2:
            choice = 500 * quantity;
            break;
        
        case 3:
            choice = 400 * quantity;
            break;
        }
        system("CLS");

        cout << "--------Your Order--------\n";
            switch (pchoice)
            {
                case 1:
                    cout << quantity << " Chicken  biryani\n";
                    break;
                case 2:
                    cout << quantity << " Mutton biryani\n";
                    break;
                case 3:
                    cout << quantity << " Egg biryani \n";
                    break;
            }
            
            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y) (N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y'){
                goto beginning;
            }
            break;

    case 6:
        menu();
        cout  << "1)Veggie delight salad    Rs 70\n2)Corn & peas salad    Rs 85\n3)Peri-Peri chicken salad    Rs 80"<< endl;
        cout << "What would you prefer: (1-3) ";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 3) {
            cout << "Enter quantity: ";
            cin >> quantity;
        }

        switch (pchoice)
            {
            case 1:
                choice = 70 * quantity;
                break;
            case 2:
                choice = 85 * quantity;
                break;
            case 3:
                choice = 80 * quantity;
                break;
            }
            system("CLS");

        cout << "--------Your Order--------\n";
        switch (pchoice)
        {
            case 1:
                cout << quantity << " Veggie delight salad \n";
                break;
            case 2:
                cout << quantity << " Corn & peas salad \n";
                break;
            case 3:
                cout << quantity << " Peri-Peri chicken salad \n";
                break;
        }
            
        cout << "Your Total Bill is : " << choice << endl;
        cout << "Thank you for Ordering\n";
        cout << "Would you like to order something else? (Y) (N): ";
        cin >> gotostart;
        if (gotostart == 'Y' || gotostart == 'y'){
            goto beginning;
        }
        break;

    case 7:
        menu();
        cout << "1)Mineral water    Rs 20\n2)Coke    Rs 40\n3)Cold Coffee    Rs 40\n";
        cout << "Enter your preferenece( 1-3)";
        cin >> pchoice;

        if ( pchoice >= 1 && pchoice <= 3) {
            cout << "Enter quantity: ";
            cin >> quantity;
        }

        switch (pchoice)
        {
        case 1:
            choice = 20 * quantity;
            break;
        case 2:
            choice = 40 * quantity;
            break;
        case 3:
            choice = 40 * quantity;
            break;
        }
        system("CLS");

        cout << "--------Your Order--------\n";
            switch (pchoice)
            {
            case 1:
                cout << quantity << " Mineral Water \n";
                break;
            case 2:
                cout << quantity << "Coke \n";
                break;
            case 3:
                cout << quantity << " Cold Coffee \n";
                break;
            }
            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y) (N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y') {
                goto beginning;
            }
            break;

    case 8:
        menu();
        cout << "1)Chocolate Cake    Rs 300\n2)Cheese Cake    Rs 450\n3)Brwnie    Rs 50";
        cout << "What would you prefer (1-3)";
        cin >> pchoice;

        if (pchoice >=1 && pchoice <= 3) {
            cout  << "Please select a quantity: ";
            cin >> quantity;
        }

        switch (pchoice)
        {
        case 1:
            choice = 300 * quantity;
            break;
        case 2:
            choice = 450 * quantity;
            break;
        case 3:
            choice = 50 * quantity;
            break;
        }
        system("CLS");

        cout << "--------Your Order--------\n";
            switch (pchoice)
            {
            case 1:
                cout << quantity << " Chocolate Cake\n";
                break;
            case 2:
                cout << quantity << " Cheese Cake\n";
                break;
            case 3:
                cout << quantity << " Brownie\n";
                break;
            }
            cout << "Your Total Bill is : " << choice << endl;
            cout << "Thank you for Ordering\n";
            cout << "Would you like to order something else? (Y) (N): ";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y') {
                goto beginning;
            }
            break;

    case 0:
        exit(0);

    default:
        cout <<"Invalid Input Exiting...";
        exit (0);
        break;
    }

    cout << "------Your Final Order-----" << endl;
    

    return 0;
}

void menu() {
    cout << "*****************************************************************************" << endl;
    cout <<                            "\t\t\t\t\tMENU" << endl;
    cout << "*****************************************************************************" << endl;
}
