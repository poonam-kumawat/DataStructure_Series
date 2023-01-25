public:

vector<int> spiralOrder(vector<vector<int>> & matrix){
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total=row*col;

    //Index initialization
    int startrow=0;
    int startcol=0;
    int endRow=row-1;
    int endCol=col-1
    while(count<total){
        for(int index=startcol;count<total && index<=endCol;index++){
            ans.push_back(matrix[startrow][index]);
            count++;
        }
        startrow++;

        //Print Ending row
        for(int index=startrow;count<total && index<=endRow;index++){
            ans.push_back(matrix[index][endCol]);
            count++;

        }
        endCol--;

        //Print Ending Col
        for(int index=endCol;count<total && index>=startcol;index--){
            ans.push_back(matrix[endRow][index]);
            count++;
        }
        endRow--;

        //Printing start col
        for(index=endRow;count<total &&  index>=startrow;index--){

            ans.push_back(matrix[index][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}
