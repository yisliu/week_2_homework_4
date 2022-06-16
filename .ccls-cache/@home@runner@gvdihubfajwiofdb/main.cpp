#include <iostream>
using namespace std;

int main() {
  //make int n so user could input amount of char
  int n;
  cin>>n;
  int b;
  //make a char array, so the user could input multiple elements
  char a[n];
  //make variable to be used for inserting the char the user inputs into a
  int i = 0;
  while(i<n){
    cin>>a[i];
    //convert uppercase to lowercase
    if(a[i]>='A' and a[i]<='Z'){
      a[i] = a[i]+32;
    }
    //loop to convert lowercase to uppercase
    else if(a[i]>='a' and a[i]<='z'){
      a[i] = a[i]-32;
    }
    else if(a[i]==43){
      continue;
    }
    //this makes the code ignore spaces
    i++;
  }

  for(int i = 0; i < n ; i++){
    cout << a[i];
  }
  
}