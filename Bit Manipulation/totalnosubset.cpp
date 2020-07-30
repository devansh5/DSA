// given the set={1,2,3} calculate the total number of subsets exist 

// approach is use bit masking from the example given above we can total no set will be {},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}

// now we know that any number can be represented as the binary 

// 7 = 111
// 6 = 101
// ...... and all 
//  for each no let say if we take example of number = 2
// 2 = 010 then it can be represented in the form of {2}
// let say example of 3 = 011 ={2,3}

// so we have to solve this using bit manipulation


vector<vector<int>> subsets(vector<int>& nums){
    int size=nums.size();
    int subsetsize=1<<size;

    vector<vector<int>> totalsubsets;

    for(int subsetmask=0;subsetmask<subsetsize;i++)
    {
        vector<int> subset;
        for(int j=0;j<size;j++)
        {
            if((subsetmask&(1<<j))!=0)
            {
                subset.push_back(j);
            }
        }
        totalsubsets.push_back(subset);
    }
    return totalsubsets;
}
