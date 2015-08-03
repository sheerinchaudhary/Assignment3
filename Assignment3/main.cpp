// My name is Sheerin Chaudhary and this is assignment 3 summer 2015
// This program be computing three integers and their sums and products
//with an introduction function,a function that will compute the negative integers
//and a function that will find the sum and product of two integer combinations.
#include <iostream>
using namespace std;
void introduction( );
int howmanynegs(int, int, int);
void findsumandprod(int ,int );
int main()
{
    int a,b,c,x;
    int cnt=0;
    int w=0;
    char answer;
    introduction();
    do {
        cout << "Type in three integers" << endl;
        
        cin >> a >> b >> c;
        
        cout<<" The original integers are "<<a<<" "<<b<<" "<<c<<endl;
        
        x= howmanynegs(a,b,c);
        
        cout << x << " " << "of these numbers are negative" << endl;
        
        findsumandprod(a,b);
        findsumandprod(b,c);
        findsumandprod(c,a);
        
        //This special combination of 'y and n' is used to either continue the do loop or end it
        //You type in y, which 'while' is equal to continue the program.
        //and n to discontinue the loop and end it
        cout << "Type y to continue, n to stop>" << endl;
        cin >> answer;
        cout << endl << endl;
        cnt++;
        
    }   while(answer=='y');
    
    cout << "The total sets of three data values are " << cnt << endl;
    
    return 0;
}

//Function introduction:
//Input:
//  Will enter sentences and lines that will tell us about the program. It will not input a paramater
//Process:
//  It will process the lines explaining what the program will does.
//Output:
//  It wiil print out several lines to the main program. It will not return  a value.

void introduction()
{
    
    cout << "My name is Sheerin Chaudhary." << endl;
    cout << "This program will compute three integers." << endl;
    cout << "It will show the sum and product of three different combinations of two integer." << endl;
    cout<<"It will also determine how many negative values are in the three integers."<<endl;
    cout<<"If you want to continue with the program, after processing the three integers  type y or else type n to end."<<endl;
    return;
}

//Function howmanynegs:
//Input:
//  Will be entering three paramaters x, y, and z and their integer values.
//Process:
//  Will process the total number of negative values in the parameters.
//Output:
//  Will sends out a total number of negatives and return that value to the main program.

int howmanynegs( int x, int y, int z )
{
    int neg=0;
    
    if(x<0)
        neg++;
    
    if(y<0)
        neg++;
    
    if(z<0)
        neg++;
    
    
    return neg;
}

//Function findsumandprod
//Input:
//  The main program will send two paramaters g and h and call it three times
//Process:
//  It will process the sum and product of the two parameters then go into the for loop for three calls
//Output:
//  Will not return a value but print out the two integers and their sum and product.
void findsumandprod(int g, int h )

{
    int sum1, jprod;
    
    sum1 = g + h;
    
    jprod = g * h;
    
    cout<<"for " << g<< " and " << h << ":    " << "their sum is " << sum1 << ",    " << "their product is " << jprod << endl;
    
    
    return;
}

