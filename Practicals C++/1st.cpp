// #include<iostream>
// using namespace std;
// int main()
// {
//  string name;
//  cout<<"Enter the author name:";
//  cin>>name;

//  cout<<"*****************************************\t"<<endl;
//  cout<<"*\tProgramming Assignment 1\t*"<<endl;
//  cout<<"*\tComputer Programming 1\t\t*"<<endl;
//  cout<<"*\t\t"<<"Author:"<<name<<"\t\t*" <<endl;
//  cout<<"*\tDue Date: Thursday,Dec.20\t*"<<endl;
//  cout<<"*****************************************\t"<<endl;
//  cout<<"20CS018-DEV HALVAWALA"<<endl;
//  return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main() {
//     // your code goes here
//     int t{};
//     cin>>t;
//     while(t--)
//     {
//          ll n{};
//          cin>>n;
//          string s{};
//          cin>>s;
//          ll c{};
//          for(int i=0;i<n;i++)
//          {
//               if(s[i]=='1')
//               c++;
//          }
//          cout<<(c*(c+1))/2<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    string str;
// 	    cin>>str;
// 	    long long cnt=0;
// 	    for(int i=0 ; i<str.size() ; i++)
// 	    {
// 	        if(str[i]=='1')
// 	            cnt++;
// 	    }
// 	    cout<<(cnt*(cnt+1)/2)<<endl;
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         long long sumeven = 0;
//         long long sumodd = 0;
//         long long int arr[n];
//         for (long long int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         long long output = 0;

//         for (long long int i = 0; i < n; i++)
//         {

//             if (i % 2 == 0)
//             {
//                 sumeven += arr[i];
//             }
//             else
//             {
//                 sumodd += arr[i];
//             }
//         }
//         output = sumodd > sumeven ? sumodd : sumeven;

//         cout << output << endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// #define pb push_back
// #define mod  998244353
// #define ll long long 
// using namespace std;

// int main(){ 
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        ll n,k,q;
//        cin>>n>>k>>q;  
//        cin>>s;
//        int count0=0,count1=0;
//        ll far[n+1];
//        int j=0;
      
//        for(int i=1;i<=n;i++){
//            while(j<=n && count0<=k && count1<=k){
//                j+=1;
               
//                if(j>n)
//                break;
               
//                if(s[j-1]=='1')
//                count1++;
//                else
//                count0++;
//            }
//            far[i]=j;
//            if(s[i-1]=='0') count0--;
//            else count1--;
//         }
//          ll sumfar[n+1];
//         sumfar[0]=0;
//         for(int i=1;i<=n;i++)
//         sumfar[i]=sumfar[i-1]+far[i];
        
//         while(q--)
//         {
//             ll l,r;
//             cin>>l>>r;
//             ll k1=l-1,k2=r+1;
//             while(k2-k1>1){
//                 ll km=k1+k2;
//                 km/=2;
                
//                 if(far[km]<=r)
//                 k1=km;
//                 else
//                 k2=km;
//             }
            
//             ll ans=sumfar[k1]-sumfar[l-1]+(r-k1)*(r+1)-(r*(r+1))/2+(l*(l-1))/2;
//             cout<<ans<<endl;
//         }
//     }
// }
// #include <iostream>
// using namespace std;


// int main() {
// 	int n,Q;
// 	cin>>n>>Q;
// 	int A[n];
// 	for(int i=0;i<n;i++)
// 	{
// 	    cin>>A[i];
// 	}
// 	int u=Q;
// 	int l[u];
// 	int r[u];
// 	int x[u];
// 	int O[u];
// 	for(int i=0;i<u;i++)
// 	{
// 	cin>>l[i]>>r[i]>>x[i];
// 	}
	
	
// 	for(int j=0;j<u;j++)
// 	{
// 	    int count=0;
	
// 	for(int i=l[j]-1;i<r[j];i++)
// 	{
// 	    if(A[i]>=x[j])
// 	    {
// 	      count ++; 
// 	    }
// 	}
// 	O[j]=count;
	
// 	}
// 	for(int i=0;i<Q;i++)
// 	{
// 	    cout<<O[i]<<endl;
// 	}
	
// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while(test-- > 0){
	    int n, c, k;
	    
	    cin >> n >> c >> k;
	    
	    long int w[n];
	    
	    for(int i = 0; i < n; i++)
	        cin >> w[i];
	        
	    int max = 0, count = 0;
	    
	    for(int i = 0; i < n; i++){
	        int sum1 = 0;
	        for(int j = i; j < n ; j++){
	            sum1 += w[j];
	            
	            if(sum1 >= k && sum1 <= c && ((j - i) + 1) > count)
	                count = ((j - i) + 1);
	            if(sum1 > c)
	                break;
	                
	        }
	    }
	    
	    cout << count << endl;
	    
	}
	return 0;
}