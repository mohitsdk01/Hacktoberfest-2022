/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
    let obj = {};
    let ans;
    nums.forEach((num, index) => {
       let complement = target - num;
       if (obj[complement.toString()] >= 0) {
           ans = [index, obj[complement]];
           return;
       }
       obj[num] = index;
    });
    console.log(obj)
    return ans;
};