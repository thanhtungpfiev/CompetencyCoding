/**********************************************************************
 *
 * \author  tung.dao@lge.com
 *
 * \date 8/14/2021
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
***********************************************************************/
#include <iostream>
#include <vector>
#include "TryConfig.h"
#include "GenerateConfig.h"

using namespace std;

int main()
{
    int n = 3;
    cout << "Nhap n: ";
    cin >> n;

    // Phuong phap sinh
    cout << "Phuong phap sinh: " << endl;
    if (n > 0) {
        GenerateConfig g(n);
        // Xay dung cau hinh dau tien
        g.initFirstConfig();
        g.printConfig(g.arr());
        std::vector<int> v = g.arr();
        g.generateConfig(v);
    }

    // Thuat toan quay lui
    cout << "Thuat toan quay lui: " << endl;
    if (n > 0) {
        TryConfig t(n);
        t.tryConfig(1);
    }
    return 0;
}
