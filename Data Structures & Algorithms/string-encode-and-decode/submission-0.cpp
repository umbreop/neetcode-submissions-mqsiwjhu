class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        
        for(int i=0; i<strs.size(); i++){
            s = s+ to_string(strs[i].size());
            s= s+"#";
            s= s+ strs[i];

        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.size()){
            int j =i;

            while(s[j]!='#')
                j++;

            
         int len = stoi(s.substr(i, j-i));
         j++;
           
            
         result.push_back(s.substr(j, len));
         i= j+len;
            
        }
        return result;



    }
};
