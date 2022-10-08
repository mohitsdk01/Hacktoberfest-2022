/**
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function (s) {
    let stack = [-1];
    let max = 0;
    for (let index in s) {
        if (s[index] === ")") {
            stack.pop();
            if (stack.length === 0) {
                stack.push(index);
            } else {
                let length = index - stack[stack.length - 1];
                if (length > max) {
                    max = length;
                }
            }
        } else {
            stack.push(index);
        }
    }
    return max;
};