class Solution {
public:

    string encode(vector<string>& strs) {
        string encode="";
        for(string str: strs){
            encode.append(to_string(str.length()));
            //gotta convert the length to string nhi to decode main issue hoga
            encode.append("#");
            encode.append(str);
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            int index = s.find("#", i);
            int len = stoi(s.substr(i, index - i));
            //yahan wapis string to integer cause we have to use it for getting the string
            string str = s.substr(index + 1, len);
            result.push_back(str);
            i = index + 1 + len;
        }
        return result;
    }
};
