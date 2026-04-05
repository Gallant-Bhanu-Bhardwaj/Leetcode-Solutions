class Solution {
public:
    bool judgeCircle(string moves) {
        int cntx = 0, cnty=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i] == 'L') cntx--;
            else if(moves[i] == 'R') cntx++;    
            else if(moves[i] == 'U') cnty++; 
            else cnty--;
        }
       return (cntx == 0)&&(cnty==0);
    }
};