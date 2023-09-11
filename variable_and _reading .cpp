
// Q1 - Take 2 integer values in two variables x and y and print their product.

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the numbers ";
    cin>>x;
    cout<<"enter the numbers ";
    cin>>y;
    cout<<" Result  of  x+y is " << x*y;
    return 0;

}


// Q2 - Print the ASCII value of character ‘U’

#include <iostream>
using namespace std;
int main()
{
    cout<< (int)'U';
    return 0;
}


// Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.



#include <iostream>
using namespace std;

 
 
int main () 
{
  
 
 
int length, breath, area;
  
 
 
cout << "enter  length  of rectangle ";
  
cin >> length;
  
 
 
 
cout << "enter  breath of rectangle ";
  
 
 
cin >> breath;
  
 
 
area = length * breath;
  
 
cout << "area of rectangle is " << area;
  
 
 
 
return 0;

 
 
 
}

// Q4 - Write a C++ program to calculate the cube of a number

#include <iostream>
  using namespace std;

int main () 
{
  
int num;
  
cout << "enter the number ";
  
cin >> num;
  
cout << "cube of a given number is " << num * num * num;
  
return 0;

 
}

// Q5 - Write a C++ program to find size of basic data types.

#include <iostream>
using namespace std;
int main()
{
    cout<< sizeof(int);
    cout<< sizeof(char);
    cout<< sizeof(short);
    cout<< sizeof(float);
    cout<< sizeof(double);
    cout<< sizeof(long long );
    cout<< sizeof(long double );
    cout<< sizeof(bool);
    return 0;

}