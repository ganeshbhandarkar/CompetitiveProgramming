bool solve(string s) {
    string n = "";
    for(int i=0;s[i];i++){
        if(isdigit(s[i]))continue;
        else if(s[i]>=65 and s[i]<=90)continue;
        else{
            n+=s[i];
        }
    }
    string r = n;
    reverse(n.begin(),n.end());
    if(r==n)return true;
    return false;
}