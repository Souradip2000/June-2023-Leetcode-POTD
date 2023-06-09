// 1146. Snapshot Array

// memory limit exceeded
// 69/74 testcases passed

#include <array>
class SnapshotArray {
public:
    int sid=0;
    vector<int> arr ={0};
    vector<vector<int>> snapHis;
    SnapshotArray(int length) {
        for(int i=0; i<length; i++)
        {
            arr.push_back(0);
        }
    }
    
    void set(int index, int val) {
        arr[index]=val;
    }
    
    int snap() {
        snapHis.push_back(arr);
        return sid++;
    }
    
    int get(int index, int snap_id) {
        return snapHis[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
