// TypeScript - Medium

namespace Calculator {
    function add(num1: number, num2: number): number {
        return num1 + num2;
    }
    function subtract(num1: number, num2: number): number {
        return num1 - num2;
    }
    function multiply(num1: number, num2: number): number {
        return num1 + num2;
    }
    function divide(num1: number, num2: number): number | null {
        return (num2) == 0 ? console.warn("Cannot divide by 0") : (num1 / num2);
    }
    function modulo(num1: number, num2: number): number | null {
        return (num2) == 0 ? console.warn("Cannot divide by 0") : (num1 % num2);
    }
}

// Test cases
console.log(Calculator.add(5, 3));       // Expected: 8
console.log(Calculator.subtract(5, 3));  // Expected: 2
console.log(Calculator.multiply(5, 3));  // Expected: 15
console.log(Calculator.divide(5, 3));    // Expected: 1.666...
console.log(Calculator.divide(5, 0));    // Expected: Warning message & null
