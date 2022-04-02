//Dr_T Unit 2 COSC-1437 Starter
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std;
typedef map<string,int> MapT; //Declarations for the Map sections
typedef MapT::const_iterator MapIterT;

bool less_than_7(int value) //Bool declaration for Predicate_Algorithm
    {
        return value < 7;
    }

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1
{
  private:
      vector<int> vec;
  public:
      MyClassVector1 (vector<int> v)  //parameterized constructor
      {
        vec = v;
      }
      void print()
      {
          /// print the value of vector
          for (int i = 0; i < vec.size(); i++)
          {
              cout << vec[i] << " ";
          }
      }
};

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector2
{
  private:
    vector<int> vec2;
  public:
    MyClassVector2 (vector<int> v) : vec2(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec2.size(); i++)
            cout << vec2[i] << " ";
    }
};

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector3
{
  private:
    vector<int>& vec3;
  public:
    // this is the right way to assign
    // the reference of stl container
    MyClassVector3 (vector<int>& arr)
        : vec3(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec3.size(); i++)
            cout << vec3[i] << " ";
    }
};

int main()
{
    /****Section_Name***Vectors*/
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers
    vector<string> vs; //vs elements are string objects

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back("A");
    vs.push_back("B");
    vs.push_back("C");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n";
   for(double vals : vd)
   {
     cout << vals << endl;
   }
   cout << "\nAnother way to print vector: " << endl;
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl;
   }

    //display the 3 elements in the vi vector
  cout << "\nValues in vi: \n";
   for(int vals : vi)
   {
     cout << vals << endl;
   }
   // display the 3 elements in the vs vector
  cout << "\nValues in vi: \n";
   for(string vals : vs)
   {
     cout << vals << endl;
   }
    /****Section_Name***Vector_as_Class_Member*/
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl;
    vector<int> vec;
        for (int i = 1; i <= 5; i++)
            vec.push_back(i);
        MyClassVector1 obj(vec);
        obj.print();

      //Continue with MyClassVector2
   cout << "\nVector_as_Class_Member_2" << endl;
    vector<int> vec2;
        for (int i = 1; i <= 5; i++)
            vec2.push_back(i);
        MyClassVector2 obj2(vec);
        obj2.print();

      //Continue with MyClassVector3
   cout << "\nVector_as_Class_Member_3" << endl;
    vector<int> vec3;
        for (int i = 1; i <= 5; i++)
            vec3.push_back(i);
        MyClassVector3 obj3(vec);
        obj3.print();

    /****Section_Name***STL_Iterators*/
    cout << "\nSTL_Iterators (10 elements)\n";
    vector<int> vint(10); //vector with 10 integer numbers
    vint[ 0 ] = 10;
    vint[ 1 ] = 20;
    vint[ 2 ] = 30;
    vint[ 3 ] = 40;
    vint[ 4 ] = 50;
    vint[ 5 ] = 60;
    vint[ 6 ] = 70;
    vint[ 7 ] = 80;
    vint[ 8 ] = 90;
    vint[ 9 ] = 100;

    //Display elements of the vector
    vector<int>::iterator it;
    for(it=vint.begin();it!=vint.end();++it) {
        cout << " " << *it;
    }


    /****Section_Name*** Stack*/
    cout << "\nStack\n";

    stack<int> st;
    st.push(100); //push number on the stack
    assert( st.size() == 1); //verify one element is on the stack
    assert( st.top() == 100); //verify element value

    st.top() = 456; //assign new value
    assert( st.top() == 456 );

    st.pop(); //remove element
    assert( st.empty() == true );


    /****Section_Name**** Set*/
    cout << "\nSet\n";
    set<int> iset; //set of unique integer numbers

    iset.insert(11); //populate with some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);

    if (iset.find(55) != iset.end() ){ //is value already stored?
      iset.insert(55);
    }
    assert( iset.size() == 4 ); //sanity check :3
    set<int>::iterator itt;
    for(itt = iset.begin(); itt != iset.end(); itt++ ){
      cout << " " << *itt;
    }

    /****Section_Name****Pair_Structure*/
    cout << "\n\nPair_Structure\n";
    pair<string,string> strstr; //Initialize strstr to hold 2 elements
    strstr.first="Hello"; //Set element 1
    strstr.second="World"; //Set element 2

    pair<int,string> intstr; //Initialize intstr to hold 2 elements (int and string)
    intstr.first = 1; //Set element 1 (int)
    intstr.second = "one"; //Set element 2 (string)

    pair<string,int> strint("two",2); //Initialize strint to hold a sting and an int
    assert(strint.first == "two"); //error checking
    assert(strint.second == 2); //error checking


    /****Section_Name**** Map_Insert*/
    cout << "\nMap_Insert\n";
    MapT amap; //Initialize amap
    pair< MapIterT, bool> result =
        amap.insert(make_pair("Fred",45)); //Populate amap

    assert(result.second == true); //error checking
    assert(result.first->second == 45);

    result = amap.insert(make_pair("Fred",54));

    // Fred was already in the map, and result.first
    // simply points there now:
    assert(result.second == false);
    assert(result.first->second == 45);

    /****Section_Name****Map_Summary*/
    cout << "\nMap_Summary\n";
    map<string,string> phone_book; //Initialize phone_book map
        phone_book["411"] = "Directory"; //Setting Key and mapped values
        phone_book["911"] = "Emergency";
        phone_book["508-678-2811"] = "BCC";
        if (phone_book.find("411")!=phone_book.end()) {
            phone_book.insert( //add new element to the map
                make_pair(
                    string("411"),
                    string("Directory")
                )
            );
        }
        assert(phone_book.size()==3); //error checking
        map<string,string>::const_iterator itm;
        for (itm = phone_book.begin(); itm != phone_book.end(); ++itm) { //loop to print contents of phone_book
            cout
                << " " << itm->first
                << " " << itm->second
                << endl
                ;
        }

    /****Section_Name**** Sort_Algorithm*/
    cout << "\nSort_Algorithm\n";
    int arr[100]; //Initialize an array
    sort(arr, arr + 100); //sort the array

    vector<int>v1; //Initialize vector
    sort(v1.begin(), v1.end()); //sort the vector

    /****Section_Name****Predicate_Algorithm*/
    cout << "\nPredicate_Algorithm\n";

    vector<int> v2; //Initialize vector
    int count_less = std::count_if(v2.begin(), v2.end(), less_than_7); //return number of elements that are less                                                                              than 7


    return 0;
 }

