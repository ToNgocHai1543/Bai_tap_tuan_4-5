Bài 1 :
  a)

#include <bits/stdc++.h>
using namespace std;

int arr[4];

int main()
{
    int arr1[4];
    cout << "arr: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "arr1: ";
    for (int i = 0; i < 4; i++)
    cout << arr1[i] << " ";
    cout << endl;
}

  b)
#include <bits/stdc++.h>
using namespace std;

int arr[5] = { 1, 2, 3 ,4};

int main()
{
    int arr1[5] = {1, 2, 3, 4};
    cout << "arr: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "arr1: ";
    for (int i = 0; i < 5; i++)
    cout << arr1[i] << " ";
    cout << endl;
}

  c)
#include <bits/stdc++.h>
using namespace std;

int arr[] = { 1, 2, 3 ,4};

int main()
{
    int arr1[] = {1, 2, 3, 4};
    cout << "arr: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "arr1: ";
    for (int i = 0; i < 5; i++)
    cout << arr1[i] << " ";
    cout << endl;
}

==>>>>  vì vậy mỗi lần chạy lại sẽ tạo ra một mảng mới với giá trị ngẫu nhiên
tại thời điểm đó. Điều này làm cho kết quả in ra màn hình mỗi lần chạy lại chương trình sẽ khác nhau.

