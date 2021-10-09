// #include <bits/stdc++.h>
// using namespace std;
// long long int sum(int arr[],int n){
//     int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//         return sum;
//     }
// }
// }
// int main(){
//    int n,arr[n];cin>>n;
//    cout<<sum(arr,n)<<endl;
//     return 0;

// int main()
// {

    // int n;cin >> n;
    // int arr[n];
    // int cp,cn,cz,r1,r2,r3;
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>0)
    //         cp++;
    //     if (arr[i]==0)      
    //         cz++;
    //     else
    //         cn++    
    // r1=(cp/n);r2=(cn/n);r3=(cz/n);
        
        
    // }
    // cout<<r1<<endl;
    // cout<<r2<<endl;
    // cout<<r3;
    
    
//     int arr[n][n];
//     int d1, d2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//             if (i == j)

//                 d1 += arr[i][j];

//             if (i + j == n - 1)
//                 d2 += arr[i][j];
//         }
//     }
// cout<<abs(d1-d2)<<endl;
    // int a[3]
    // ,b[3],ta,tb;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>a[i];
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>b[i];
    // }
    // ta=0;tb=0;
    // for (int  i = 0; i < 3; i++)
    // {
    //     if (a[i]>b[i])
    //     ta++;
    //     else if(a[i]=b[i])
    //     continue;}
    //     else
    //     tb++;

    // }
    // cout<<ta<<" "<<tb;
    // int n,arr[n];cin>>n;
    // for (int  i = 0; i < n; i++)
    // {
    //  cin>>arr[i];
    // }
    // cout<<sum(arr,n);
    // int x1,v1,x2,v2;cin>>x1>>v1>>x2>>v2;
    // while (v2<v1)
    // {
    //     int val=(x2-x1)/(v2-v1);
    //     if (val!=0)
    //     {
    //         cout<<"YES";
    //     }
    //     else{
    //         cout<<"NO";
    //     }
        
    // }
    // C++ program to find maximum sum of hour
// glass in matrix
#include<bits/stdc++.h>
using namespace std;
const int R = 5;
const int C = 5;

// Returns maximum sum of hour glass in ar[][]
int findMaxSum(int mat[R][C])
{
	if (R<3 || C<3)
		return -1;

	// Here loop runs (R-2)*(C-2) times considering
	// different top left cells of hour glasses.
	int max_sum = INT_MIN;
	for (int i=0; i<R-2; i++)
	{
		for (int j=0; j<C-2; j++)
		{
			// Considering mat[i][j] as top left cell of
			// hour glass.
			int sum = (mat[i][j]+mat[i][j+1]+mat[i][j+2])+
					(mat[i+1][j+1])+
				(mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2]);

			// If previous sum is less then current sum then
			// update new sum in max_sum
			max_sum = max(max_sum, sum);
		}
	}
	return max_sum;
}

// Driver code
int main()
{
	int mat[][C] = {{1, 2, 3, 0, 0},
					{0, 0, 0, 0, 0},
					{2, 1, 4, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 0, 1, 0}};
	int res = findMaxSum(mat);
	if (res == -1)
		cout << "Not possible" << endl;
	else
		cout << "Maximum sum of hour glass = "
			<< res << endl;
	return 0;
}


    
