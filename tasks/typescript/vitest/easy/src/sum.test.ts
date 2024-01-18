// Vitest - Easy

import sum from "./sum";
import { describe, expect, it } from "vitest";

// TODO: Create the test required in the task
let arr: Array<number>= [3, 2, 5.4, 2, 6, 4];
decsribe("Testing sum", function() {
  it("Sum comparision by for loop", function() {
    let total= 0;
    for (let num of arr) {
      total += num;
    }
    expect(sum(arr).toBe(total);
  });
})
