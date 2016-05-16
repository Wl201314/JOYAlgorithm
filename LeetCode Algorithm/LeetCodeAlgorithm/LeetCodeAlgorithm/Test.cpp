//
//  Test.cpp
//  LeetCodeAlgorithm
//
//  Created by wjl on 16/5/14.
//  Copyright © 2016年 Martin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
using std::cout;

int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

int main(){
 
        vector<int> Test;
        Test.push_back(1);
        Test.push_back(7);
        Test.push_back(3);
        Test.push_back(2);
        Test.push_back(3);
        Test.push_back(4);
        Test.push_back(3);
        Test.push_back(7);
        Test.push_back(7);
    
    int result = removeElement(Test, 3);
    cout << result << endl;
    
}
