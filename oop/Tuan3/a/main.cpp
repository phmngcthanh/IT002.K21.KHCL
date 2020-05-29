
#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn

        // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
        if (arr[mid] == x)
            return mid;

        // Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
        return binarySearch(arr, mid + 1, r, x);
    }

    // Nếu không tìm thấy
    return -1;
}

int binsearch(int a[],int x,int n)
{
    return binarySearch(a,0,n-1,x);
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;

        int it = binsearch(a, x, n);

        cout << it;
        cout << endl;
    }
}