
# include <iostream>
using namespace std;

int main()
{
	//a variable op declared from a character data type.
    char op;
    
    //float data type declared for the numbers to be entered
    float num1, num2;
    
    //prompt the user to enter any of the four operators in the bracket
    cout << "Enter any of operator: (+, -, *, /):\n";
    cin >> op;

	//input any two values that you want it to operated on
    cout << "Enter two numbers:\n";
    cin >> num1 >> num2;
    
   
	
	
	//a switch function to perform the four operations
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! please put a correct operator/n";
            break;
    }
 int num;
    cout<<"Enter Number To Find Multiplication table";
	cin>>num;
	for(int a=1;a<=10;a++)
	cout<<num<<" * "<<a<<" = "<<num*a<<endl;
	
	

    return 0;
}








