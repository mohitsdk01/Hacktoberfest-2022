/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(num) {
    try {
        let result = 0, isNegative = false;
        let max = Math.pow(2,31) - 1;
        let min = -Math.pow(2,31);
        if (num < 0) {
            isNegative = true;
        } else if (num < 10) {
            return num;
        }
        num = Math.abs(num);
        while(num !== 0) {
            let lastDigit = num % 10;
            result = result * 10 + lastDigit;
            num = Math.floor(num / 10);
        }
        if (result >= max || result <= min) {
            return 0;
        }
        return isNegative ? - Math.abs(result) : result;
    } catch (e) {
        console.log(e);
    }
};