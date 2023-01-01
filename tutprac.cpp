// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // //void printnewline();
// // // // // void printnewline(){
// // // // //     cout<<"Geeks"<<endl;
// // // // //     cout<<"for"<<endl;
// // // // //     cout<<"Geeks"<<endl;
// // // // // }

// // // // // int main(){
// // // // //     printnewline();
    
// // // // //     return 0;
// // // // // }
// // // // // 


// // // // // #include <iostream>

// // // // // using namespace std;

// // // // // int main() {

// // // // //     int N = 0;
// // // // //     cin>>N;
    
// // // // //     long data[N];
// // // // //     for(auto i=0; i<N; i++){
// // // // //         cin>>data[i];
        
    
// // // // //     }
    
// // // // //         if(data[N-1]%10==0){
// // // // //             cout<<"Yes"<<endl;
// // // // //         }
// // // // //         else{
// // // // //             cout<<"No"<<endl;
// // // // //         }
    
// // // // //     // write your code here
// // // // //     // ans = 
    
    
    
    
// // // // //     return 0;
// // // // // }

// // // // // #include <iostream>
// // // // // #include <cstdio>
// // // // // using namespace std;


// // // // // int max_of_four(int a, int b, int c, int d){
// // // // //     if ((a>b) && (a>c) && (a>d)){
// // // // //         return a;
// // // // //     }
// // // // //     else if ((b>a) && (b>c) && (b>d)){
// // // // //         return b;
        
// // // // //     }
// // // // //     else if ((c>a) && (c>b) && (c>d)){
// // // // //         return c;
// // // // //     } 
// // // // //     else{
// // // // //         return d;
// // // // //     }  
// // // // // }

// // // // // int main() {
// // // // //     int a, b, c, d;
// // // // //     scanf("%d %d %d %d", &a, &b, &c, &d);
// // // // //     int ans = max_of_four(a, b, c, d);
// // // // //     printf("%d", ans);
    
// // // // //     return 0;
// // // // // }


// // // // // #include <iostream>

// // // // // using namespace std;

// // // // // int main() {

// // // // //     int N = 0;
// // // // //     cin>>N;
    
// // // // //     int arr[N];
// // // // //     for(int i=0; i<N; i++){
// // // // //         cin>>arr[i];
        
// // // // //     }
// // // // //     for(int j=N-1; j>=0; j--){
// // // // //         cout<<arr[j];
// // // // //     }

// // // // //     return 0;

// // // // // }       

// // // // // #include <iostream>

// // // // // using namespace std;

// // // // // int main(){
// // // // // 	int num ,j=0;
// // // // // 	cin>>num;
// // // // // 	string s;
// // // // // 	cin>>s;
// // // // // 	for(int i=0;  i<num;i++){
// // // // // 		if(s[i]=='H' && s[i+1]=='H'){
// // // // // 			j=1;
// // // // //         }
// // // // // 		else if (s[i]=='.'){
// // // // // 			s[i]='B';
// // // // // 		}


	
	

		
		
// // // // // 	}
// // // // //     if(j==1){
// // // // // 	    cout<<"NO"<<endl;
// // // // //     }
// // // // //     else if (j!=1){ 
// // // // // 	    cout<<"YES"<<endl;
	
// // // // //     } 
// // // // //     cout<<s<<endl;

// // // // //     return 0;

// // // // // }
// // // // // { Driver Code Starts
// // // // //Initial template for c++

// // // // // #include<bits/stdc++.h> 
// // // // // using namespace std; 

// // // // //  // } Driver Code Ends
// // // // // //User function Template for C++

// // // // // // class Solution{   
// // // // // // public:
// // // // // //     pair<int, int> get(int &a, int &b){
// // // // // //         int temp=a;
// // // // // //         a=b;
// // // // // //         b=temp;
// // // // // //     }
// // // // // // };

// // // // // // // { Driver Code Starts.

// // // // // // int main() 
// // // // // // { 
// // // // // //     int t;
// // // // // //     cin>>t;
// // // // // //     while(t--)
// // // // // //     {
// // // // // //         int a, b;
// // // // // //         cin >> a >> b;
        
// // // // // //         Solution ob;
// // // // // //         pair<int, int>p = ob.get(a, b);
// // // // // //         cout << a << ' ' << b << endl;
    
// // // // // //     }
// // // // // //     return 0; 
// // // // // //} 
// // // // //   // } Driver Code Ends

// // // // //   // { Driver Code Starts
// // // // // // Initial Template for C++
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // //  // } Driver Code Ends
// // // // // // User function Template for C++
// // // // // class Solution {
// // // // //   public:
// // // // //     string armstrongNumber(int n){
// // // // //         int arr[n];
// // // // //         int l=0;  
// // // // //         l=sizeof(n);
// // // // //         for (int i = 0; i <n ; i++)
// // // // //         {
// // // // //             cin>>arr[i];
// // // // //         }
// // // // //         cout<<arr;
        
        
// // // // //     }
// // // // // };

// // // // // // { Driver Code Starts.
// // // // // int main() {
// // // // //     int t;
// // // // //     cin >> t;
// // // // //     while (t--) {
// // // // //         int n;
// // // // //         cin >> n;
// // // // //         Solution ob;
// // // // //         cout << ob.armstrongNumber(n) << endl;
// // // // //     }
// // // // //     return 0;
// // // // // }
// // // // //   // } Driver Code En
// // // // // { Driver Code Starts
// // // // // Initial Template for C++
// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // //  // } Driver Code Ends
// // // // // User function Template for C++
// // // // class Solution {
// // // //   public:
// // // //     string armstrongNumber(int n){
// // // //         int s=0, sum=0 ,k=n;
// // // //         while(k==0){
// // // //             s= s +k%10;
// // // //             sum=sum+(s*s*s);
// // // //             k=k/10;
// // // //             cout<<sum<<endl;
            
            
// // // //         }
        
// // // //         if(sum==n){
// // // //             return"Yes";
// // // //         }
// // // //         else{
// // // //             return"No";
// // // //         }
            
        
// // // //     }
// // // // };

// // // // // { Driver Code Starts.
// // // // int main() {
// // // //     int t;
// // // //     cin >> t;
// // // //     while (t--) {
// // // //         int n;
// // // //         cin >> n;
// // // //         Solution ob;
// // // //         cout << ob.armstrongNumber(n) << endl;
// // // //     }
// // // //     return 0;
// // // // }
// // // //   // } Driver Code Ends
// // //  #include<iostream>
// // //  using namespace std;
 
// // //  int main(){
// // //     int n=2;

// // // 	for(int i=0 ; i<=8; i++){
// // //         if (i%2==0){
            
// // //         }
// // //         cout<<i;
// // //     }
    
// // //      return 0;
// // //  }
// //  #include<iostream>
// //  using namespace std;
 
            
// //  int main(){
// //      int n=4;
// //      int j=1;
// //      while(n<=1){
// //          j=j*n;
// //          //n--;
// //     cout<<j;


// //      }
     
       
     
     
         
     
            
                 
     
// //      return 0;
// //  }

// #include <iostream>
// #include<cctype>

// using namespace std;

// int main() {
// 	string s;
// 	cin>>s;
// 	for(int i= 0 ; i<= s.size(); i++){
//          //cout<<s.at(i);
// 		for( int j ='A'; j<= 'Z'; j++){
//             if(s.at(i)==j){
//                 s.at(i)=tolower(s.at(i));
//             }
//             else{
//                 s.at(i)=toupper(s.at(i));
//             }
// 		}
// 	}
//     cout<<s<<endl;
	
// }

#include <iostream>

using namespace std;

int main() {
	long l;
	long w;
	long h;
	cin>>l;
	// cin>>b[1];
	// cin>>c[2];
	int num;
	cin >> num;	
	while(num--){
		cin>>w>>h;
	if(1>h || l>w){
		cout<<"UPLOAD ANOTHER"<<endl;
	}
    else if(w==h){
		cout<<"ACCEPTED"<<endl;
	}
	else if(l<w || l<h){
		cout<<"CROP IT"<<endl;
	}
	
		
		
	
	}
	
		
return 0;		

			
}

