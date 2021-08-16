/**********************************************************************
 *
 * \author  tung.dao@lge.com
 *
 * \date 8/15/2021
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
***********************************************************************/
#include <iostream>
#include "TryConfig.h"

using namespace std;

int main()
{
    int n = 5;
    int k = 3;
    // Thuat toan quay lui
    cout << "Thuat toan quay lui: " << endl;
    if (n > 0) {
        TryConfig t(n, k);
        t.tryConfig(1);
    }
    return 0;
}
