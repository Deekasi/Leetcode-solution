// class Solution {
// public:
//     double myPow(double x, int n) {
//        long double ans=1.0;
//        long long N = n;
//        if(N<0){
//             x = 1/x;
//             N = -N;
//         }
//         for(int i=0;i<N;i++){
//             ans = ans*x; 
//         }
//         return ans;
//     }
// };
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};