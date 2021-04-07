int solve(vector<int>& rooms, int target) {
    
    for(int i=0;i<rooms.size();i++){
        if(rooms[i]>=target){
            return rooms[i];
            break;
        }
    }
    return -1;
}