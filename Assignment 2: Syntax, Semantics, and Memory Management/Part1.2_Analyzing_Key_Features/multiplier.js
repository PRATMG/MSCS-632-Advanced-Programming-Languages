
// JavaScript: Demonstrating Weak Typing and Scopes
function makeMultiplier(factor) {
    // Closure: Inner function retains access to 'factor'
    return function (number) {
        return number * factor;
    };
}

const double = makeMultiplier(2);
const triple = makeMultiplier(3);

console.log(double(5)); // Outputs 10
console.log(triple(5)); // Outputs 15

// Weak typing example: Implicit type conversion
let value = "10" - 2; // Coerces "10" to number
console.log(value); // Outputs 8

let anotherValue = "10" + 2; // Coerces 2 to string
console.log(anotherValue); // Outputs "102"
