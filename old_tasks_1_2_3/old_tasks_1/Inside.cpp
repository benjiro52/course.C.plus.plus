#include <iostream>

using namespace std;

int main()
{
    unsigned long storonak1, storonak2, storonap1, storonap2, test1, test2, test3, test4, v1, v2;
    cin>>storonak2>>storonak1>>storonap1>>storonap2;


    if (storonak1 % storonap2 == 0){
        test1 = storonak1 / storonap2;
    }
    else test1 = storonak1 / storonap2 + 1;

    if (storonak2 % storonap1 == 0){
        test2 = storonak2 / storonap1;
    }
    else test2 = storonak2 / storonap1 +1;

    if (storonak2 % storonap2 == 0){
        test3 = storonak2 / storonap2;
    }
    else test3 = storonak2 / storonap2 + 1;

    if (storonak1 % storonap1 == 0){
        test4 = storonak1 / storonap1;
    }
    else test4 = storonak1 / storonap1 + 1;

    v1 = test1 * test2;
    v2 = test3 * test4;

    cout<<min(v1, v2);
   
}                                                          