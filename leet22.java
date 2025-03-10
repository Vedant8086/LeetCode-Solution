class Solution {
    List<String> x;;
    public void Generate(int n,String ans,int o,int c) {
        if(o == n && c == n) {
            x.add(ans);
            return;
        }
        if(o < n) {
            Generate(n,ans+"(",o+1,c);
        }
        if(c < o) {
            Generate(n,ans+")",o,c+1);
        }
    }
    public List<String> generateParenthesis(int n) {
        x = new ArrayList<>();
        Generate(n,"",0,0);
        return x;
    }
}