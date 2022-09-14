class Solution {
public:
    int compareVersion(string version1, string version2) {
        int x,y;
    int i=0, j=0;
    while(i<version1.length() || j< version2.length()){
        x=0;
        y=0;
        while(i<version1.length()&& version1[i]!='.'){
            x*=10;
            x+=(int)(version1[i]-'0');
            i++;
        }
        while(j<version2.length()&& version2[j]!='.'){
            y*=10;
            y+=(int)(version2[j]-'0');
            j++;
        }
        if(i<version1.length()) i++;
        if(j<version2.length()) j++;
		
        if(x==y) continue;
        else if(x>y) return 1;
        else return -1;
    }
        return 0;
    }
    
    
};