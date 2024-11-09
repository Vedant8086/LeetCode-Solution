class Solution {
private : 
    bool checkEqual(int a[26],int b[26]) {
        for(int i =0;i < 26;i++) {
            if(a[i] != b[i]) return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        for(int i =0;i < s1.length();i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int windowsize = s1.length();
        int count2[26] = {0};

        while(i < windowsize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        } 

        if(checkEqual(count1,count2)) {
            return 1;
        }

        while(i < s2.length()) {
            
            int index = s2[i]-'a';
            count2[index]++;
            index = s2[i - windowsize] - 'a';

            count2[index]--;
            i++;
            if(checkEqual(count1,count2)) {
                return 1;
            }
        }
        return 0;
    }
};