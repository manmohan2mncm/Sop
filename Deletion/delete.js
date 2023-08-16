let arr = [];
let n = parseInt(prompt("Enter the number of elements: "));

console.log("Enter the elements:");
for (let i = 0; i < n; i++) {
    arr.push(parseInt(prompt()));
}

let index_pos = parseInt(prompt("Enter the index where the element is to be deleted: "));

// Shift elements to the left to make space for the deleted element
for (let i = index_pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
}

console.log("The elements entered are: " + arr.slice(0, n - 1).join(" "));
