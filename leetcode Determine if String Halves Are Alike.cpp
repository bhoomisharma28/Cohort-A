class Solution{
public:
int nvowel(string s){
        int c=0;
        for (auto i:s){
            i=tolower(i);
            if(i=='a'||i=='o'||i=='u'||i=='e'||i=='i'){
                c++;
            }
        }
        return c;
    }
    bool halvesAreAlike(string s) {
        string str1,str2;
        str1=s.substr(0,s.length()/2);
        str2=s.substr(s.length()/2,s.length());
        cout<<str1<<endl<<str2;
        return nvowel(str1)==nvowel(str2);
    }
};
