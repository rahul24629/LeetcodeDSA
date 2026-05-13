class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char> mp = {{1,'I'},   {5,'V'},   {10,'X'},
                                       {50,'L'},  {100,'C'}, {500,'D'},
                                       {1000,'M'}}; //value,symbol
        
        int i=0;
        string s="";

        while(num>0){
            int n=num%10;

            int p=pow(10,i);

            if(n==4){
                int f=5*p;
                int l=1*p;

                s+=mp[f];
                s+=mp[l];
            }else if( n==9){

                int f=10*p;
                int l=1*p;
                
                s+=mp[f];
                s+=mp[l];

            }else{
                if(n==1||n==5){
                    s+=mp[n*p];
                }else if(n==2 || n==3){
                    int repeat=n;
                    while(repeat>0){
                        s+=mp[1*p];
                        repeat--;
                    }
                }else if(n==6|| n==7 || n==8){
                    int f=n-5;
                    while(f>0){
                    s+=mp[1*p];
                    f--;

                    }
                    s+=mp[5*p];
                }

            }
            num/=10;
            i++;
            
        }
        reverse(s.begin(), s.end());
        return s;
    }
};