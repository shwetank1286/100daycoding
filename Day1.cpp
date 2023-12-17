#include <iostream>
using namespace std;

int main()
{
    
//constant 
    const int a = 5;
    cout << "the value of a was:" << a << endl;
    a = 55;
    cout << "the value of a is:" << a << endl;
    
//minipulator
    
    int a=1, b=23, c=4321;
    cout << "the value of a without setw was: " << a << endl;
    cout << "the value of a without setw was: " << b << endl;
    cout << "the value of a without setw was: " << c << endl;
    cout << "the value of a with setw was: " << setw(4)<< a << endl;
    cout << "the value of a with setw was: " << setw(4)<< b << endl;
    cout << "the value of a with setw was: " << setw(4)<< c << endl;    
    
// if else statement
    
    int age;
    cout << "Tell me your age: "<<endl;
    cin >> age;
    if (age<18){
        cout << "your are a kid you can't come to the party"<<endl;
    }
    else if (age=18){
        cout << "you can come to the party with the help of the kids pass"<<endl;
    }
    else{
        cout << "you can come to the party"<<endl;
    }
    
//switch case statement
    
    int age;
    cout << "Tell me your age: "<<endl;
    cin >> age;
    switch (age)
    {
        case 18:
        cout<<"you are 18"<<endl;
        break;
        case 44:
        cout<<"you are 44"<<endl;
        break;
        case 2:
        cout<<"you are 2"<<endl;
        break;
        default:
        cout<<"no special test case"<<endl;
        break;
    }
    cout<<"Done with all the test cases";
    
//loop for loop
    for(int i=0; i<=40;i++){
        cout<<i<<endl;
    }
// infininte for loop
    for(int i=0; 34<=40;i++){
        cout<<i<<endl;
    }
    
//loop while loop
    int i=1;
    while(i<40){
        cout<<i<<endl;
        i++;
    }
// infininte for loop
    int i=1;
    while(true){
        cout<<i<<endl;
        i++;
    }
// do while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<40);
//we use do while because is always do print the first value when the code is false after that also
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);
    
//---------------------------------------------------------------------*---------------------------------------------------------------------
//Print the table of 5 with the help of the for loop 

    
    int a=5;
    for(int i=1; i<=10;i++){
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
    }
//print the table of any number from the user with the help of for loop
    int a=5;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    for(int i=1; i<=10;i++){
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
    }
// print the table of 5 with the help of the while loop 
    int a=5,i=1;
    while(i<=10){
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
        i++;
    }
//print the table of any number from the user with the help of while loop
    int a,i=1;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    while(i<=10){
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
        i++;
    }
// print the table of 5 with the help of the do-while loop 
    int a=5,i=1;
    do{
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
        i++;
    }while(i<=10);
//print the table of any number from the user with the help of do-while loop
    int a,i=1;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    do{
        cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
        i++;
    }while(i<=10);
//------------------------------------------------*-------------------------------------
//#geek for geek code of the day 17-12-2023
//day2 of 100 day challenge 
    //code in c+++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if (n==1)
	    return arr[0];
	    int a,b,c;
	    a=arr[0];
	    b=max(a,arr[1]);
	    for(int i=2;i<n;i++)
	    {
	        c=max(b,a+arr[i]);
	        a=b;
	        b=c;
	    }
	    return c;
	}
};
//#leetcode code of the day 17-12-2023
//2353. Design a Food Rating System
//code in c+++
class FoodRatings {
 public:
  FoodRatings(vector<string>& foods, vector<string>& cuisines,
              vector<int>& ratings) {
    for (int i = 0; i < foods.size(); ++i) {
      cuisineToRatingAndFoods[cuisines[i]].insert({-ratings[i], foods[i]});
      foodToCuisine[foods[i]] = cuisines[i];
      foodToRating[foods[i]] = ratings[i];
    }
  }

  void changeRating(string food, int newRating) {
    const string cuisine = foodToCuisine[food];
    const int oldRating = foodToRating[food];
    auto& ratingAndFoods = cuisineToRatingAndFoods[cuisine];
    ratingAndFoods.erase({-oldRating, food});
    ratingAndFoods.insert({-newRating, food});
    foodToRating[food] = newRating;
  }

  string highestRated(string cuisine) {
    return cuisineToRatingAndFoods[cuisine].begin()->second;
  }

 private:
  // {cuisine: {(-rating, food)}} stores negative rating for smarter comparison
  unordered_map<string, set<pair<int, string>>> cuisineToRatingAndFoods;
  unordered_map<string, string> foodToCuisine;
  unordered_map<string, int> foodToRating;
};
