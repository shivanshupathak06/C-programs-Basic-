// #include <iostream>
// using namespace std;
// int main() {
//       cout << "Shivanshu \nPathak" << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int age = 18;
//     char grade = 'A';
//     float PI = 3.14;
//     bool b = true;
//     double price = 100.99;
//     cout << age << endl;
//     return 0;
// }


//
// #include <iostream>
// using namespace std;
// int main() {
//     int a=10, b=6;
//     int sum = a+b;
//     cout << "Sum of a & b is : " << sum << endl;
//     cout << "Sum : " << (a+b) << endl;
//     cout << "Diff : " << (a-b) << endl;
//     cout << "Mul : " << (a*b) << endl;
//     cout << "Div(float) : " << (double(a)/b) << endl;
//     cout << "Mod : " << (a%b) << endl;
//     cout << "Div(int) : " << int(a/b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a=10, b=6;
//     cout << (a<b) << endl;
//     cout << (a>b) << endl;
//     cout << (a<=b) << endl;
//     cout << (a>=b) << endl;
//     cout << (a==b) << endl;
//     cout << (a!=b) << endl;
//     return 0;
// }

// the below program is to find logical functions
// #include <iostream>
// using namespace std;
// int main() {
//     int a=10, b=6;
//     cout << ((a<b) && (a>b)) << endl;  //False
//     cout << ((a<b) || (a>b)) << endl;  //True
//     cout << !((a<b) && (a>b)) << endl;  //Reverts.. so True
//     cout << !((a>b) || (a>b)) << endl;  //Reverts.. so False
//     return 0;
// }

// program to find sum of 2 integers
// #include <iostream>
// using namespace std;
// int main () {
//       float a,b ;
//       cout << "Enter a : ";
//       cin >> a;
//       cout << "Enter b : ";
//       cin >> b;
//       float sum = a + b;
//       cout << "The sum is : " << sum << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       cout << "Size of char is : " << sizeof (char) << endl;         // 1
//       cout << "Size of int is : " << sizeof (int) << endl;           // 4
//       cout << "Size of float is : " << sizeof (float) << endl;       // 4
//       cout << "Size of double is : " << sizeof (double) << endl;     // 8   
//       cout << "Size of bool is : " << sizeof (bool) << endl;         // 1
//       cout << "Size of long double is : " << sizeof (long double) << endl;         // 12
//       cout << "Size of unsigned char is : " << sizeof (unsigned char) << endl;     // 1
//       cout << "Size of short is : " << sizeof (short) << endl;                     // 2
//       cout << "Size of unsigned short is : " << sizeof (unsigned short) << endl;   // 2
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       float a, b;
//       cout << "Enter a : ";
//       cin >> a ;
//       cout << "Enter b: ";
//       cin >> b ;
//       float average = (a+b)/2 ;
//       cout << "The average is : " << average << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       float P, R, T;
//       cout << "Enter the principal amount : Rs. ";
//       cin >> P;
//       cout << "Enter the rate : ";
//       cin >> R;
//       cout << "Enter the time period : ";
//       cin >> T;
//       float SP = (P*R*T)/100;
//       cout << "The Simple Interest is : " << SP << endl;
//       return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main () {
//       float P, R, T;
//       cout << "Enter the principal amount : Rs. ";
//       cin >> P;
//       cout << "Enter the rate : ";
//       cin >> R;
//       cout << "Enter the time period : ";
//       cin >> T;
//       float Amount = P * ((pow((1 + R / 100), T)));
//       cout << "Amount is : " << Amount << endl ;
//       float CI = Amount - P ;
//       cout << "Compound Interest is : " << CI << endl ;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       float l, b;
//       cout << "Enter length : ";
//       cin >> l ;
//       cout << "Enter breadth: ";
//       cin >> b ;
//       float Peri_of_Rec = 2*(l+b);
//       cout << "Perimeter of Rectangle is : " << Peri_of_Rec << endl;
//       float Area_of_Rec = l*b;
//       cout << "Area of Rectangle is : " << Area_of_Rec << endl;
//       return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main () {
      // float r, h;
      // cout << "Enter radius : ";
      // cin >> r;
      // cout << "Enter height : ";
      // cin >> h;
      // float Area = M_PI*(pow ((r), 2))*h;
      // cout << "The area of cylinder is : " << Area << endl;
      // return 0;
//       float a;
//       cout << "Enter side : ";
//       cin >> a;
//       float Area = pow ((a), 3);
//       cout << "The area of cube is : " << Area << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       float temp;
//       cout << "Enter the temperature : ";
//       cin >> temp;
//       float Cels = (temp - 32)*5/9;
//       cout << "Temperature in Celsius is : " << Cels << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int a, b;
//       cout << "Enter a : ";
//       cin >> a;
//       cout << "Enter b : ";
//       cin >> b;
//       cout << "Numbers before swapping is " << a << " and " << b << endl;
//       int temp;
//       temp = a;
//       a = b;
//       b = temp;
//       cout << "Numbers after swapping is " << a << " and " << b << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std; 
// int main () {
//       int a, b;
//       cout << "Enter a : ";
//       cin >> a;
//       cout << "Enter b : ";
//       cin >> b;
//       cout << "Numbers before swapping is " << a << " and " << b << endl;
      // swap(a,b);
//       a = a+b ;
//       b = a-b ;
//       a = a-b ;
//       cout << "Numbers after swapping is " << a << " and " << b << endl;
//       return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//       int age;
//       cout << "Enter age : ";
//       cin >> age;
//       if (age>=18) {
//             cout << "You are eligible for vote !!" << endl;
//       } else {
//             cout << "Sorry, You are not eligible !!" << endl;
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//       int number;
//       cout << "Enter number : ";
//       cin >> number;
//       if (number%2==0) {
//             cout << number << " is even" << endl;
//       } else {
//             cout << number << " is odd" << endl;
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int marks;
//       cout << "Enter marks : ";
//       cin >> marks;
//       if (marks>90) {
//             cout << "Grade = A\n";
//       } else if (marks>=80 && marks<90) {
//             cout << "Grade = B\n";
//       } else if (marks>=70 && marks<80) {
//             cout << "Grade = C\n";
//       } else if (marks>=60 && marks<70) {
//             cout << "Grade = D\n";
//       } else if (marks>=50 && marks<60) {
//             cout << "Grade = E\n";
//       } else {
//             cout << "You have not cleared the Exam." << endl;
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       char c;
//       cout << "Enter character : ";
//       cin >> c;
      // if (c>=65 && c<=90) {
      //       cout << "Uppercase\n";
      //       cout << "ASCII Value of " << c << " is " << int(c) << endl;
      // } else {
      //       cout << "Lowercase\n";
      //       cout << "ASCII Value of " << c << " is " << int(c) << endl;
      // }
      // return 0;
//       if (c>='A' && c<='Z') {
//             cout << "Uppercase\n";
//             cout << "ASCII Value of " << c << " is " << int(c) << endl;
//       } else {
//             cout << "Lowercase\n";
//             cout << "ASCII Value of " << c << " is " << int(c) << endl; 
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int n;
//       cout << "Enter n : ";
//       cin >> n;
//       int i=1;
//       while (i<=n) {
//             cout << i << " ";
//             i++;
//       }
//       cout << endl;      
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int n;
//       cout << "Enter n : ";
//       cin >> n;
//       int sum=0;
//       for (int i=0; i<=n; i++) {
//             sum+=i;
//       }
//       cout << "Sum is : " << sum << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int i=1, n, sum=0;
//       cout << "Enter number : ";
//       cin >> n;
//       while (i<=n) {
//             sum=sum+i;
//             i++;
//       }
//       cout << "Sum : " << sum << endl ;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int i, n, sum=0;
//       cout << "Enter number : ";
//       cin >> n;
//       for (i=1; i<=n; i++) {
//             sum+=i;
//             if (i==3) {
//                   break;
//             }
//       }
//       cout << "Sum : " << sum << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int i, n, oddsum=0;
//       cout << "Enter number : ";
//       cin >> n;
//       for (i=1; i<=n; i++) {
//             if (i%2!=0) {
//                   oddsum+=i;
//             }
//       }
//       cout << "Sum of odd nos. : " << oddsum << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int i, n;
//       cout << "Enter number : ";
//       cin >> n;
//       bool isPrime = true;
//       for (i=2; i*i<=n-1; i++) {  // (i=2; i<=n-1; i++)
//             if (n%i==0) {
//                   isPrime = false;
//                   break;
//             }
//       }
//       if (isPrime == true) {
//             cout << "Prime number" << endl;
//       } else {
//             cout << "Not a Prime number" << endl;
//       }
//       return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main () {
//       int a,b,c;
//       cout << "a : ";
//       cin >> a;
//       cout << "b : ";
//       cin >> b;
//       cout << "c : ";
//       cin >> c;
//       cout << "Maximum is : " << max({a,b,c}) << endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       int a, b, c;
//       cout << "Enter a : ";
//       cin >> a;
//       cout << "Enter b : ";
//       cin >> b;
//       cout << "Enter c : ";
//       cin >> c;
//       if (a>=b && a>=c) {
//             cout << "Greatest is : " << a;
//       }
//       else if (b>=a && b>=c) {
//             cout << "Greatest is : " << b;
//       }
//       else {
//             cout << "Greatest is : " << c;
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//       int a, b, c;
//       cout << "Enter a : ";
//       cin >> a;
//       cout << "Enter b : ";
//       cin >> b;
//       cout << "Enter c : ";
//       cin >> c;
//       if (a>=b) {
//             if (a>=c) {
//                   cout << "Greatest is : " << a;
//             } else {
//                   cout << "Greatest is : " << c;
//             }
//       } else {
//             if (b>=c) {
//                   cout << "Greatest is : " << b;
//             } else {
//                   cout << "Greatest is : " << c;
//             }
//       }
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//       char c;
//       cout << "Enter character : ";
//       cin >> c;
//       if (c=='a' ||  c=='e' || c=='i' || c=='o' || c=='u'
//             || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
//                   cout << c << " is a vowel" << endl;
//             }
//       else {
//             cout << c << " is a consonant" << endl;
//       }
//       return 0;
// }

// program to find logical OR and AND operation
// #include <iostream>
// using namespace std;
// int main () {
//       int n1, n2;
//       cout << "Enter any number : ";
//       cin >> n1;
//       cout << "Enter any number : ";
//       cin >> n2;
       // cout << (n1 | n2) << endl;
//       cout << (n1 & n2) << endl;
//       return 0;
// }

