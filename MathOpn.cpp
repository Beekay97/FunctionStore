    #include <iostream>
    using namespace std;
     
    int find_hcf(int a, int b){
    	if(b==0)
    		return a;
    	else
    		return find_hcf(b,a%b);
    }
     
    int main() {
    	printf("%d \n",find_hcf(54,72));	
    	return 0;
    }
