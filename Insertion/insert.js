const MAX_SIZE = 100;
let arr = [];
let n, i;
let indexPos;
let element;

n = parseInt(prompt(`Enter the number of elements (up to ${MAX_SIZE}): `));

console.log("Enter the elements:");
for (i = 0; i < n; i++) {
    arr.push(parseInt(prompt("Enter the element: ")));
}

indexPos = parseInt(prompt("Enter the index where the element is to be inserted: "));
element = parseInt(prompt("Enter the element to be inserted: "));

// Shift elements to the right to make space for the inserted element
for (i = n - 1; i >= indexPos; i--) {
    arr[i + 1] = arr[i];
}

arr[indexPos] = element;
n++; // Increment the size of the array

console.log("The elements entered are:", arr.join(" "));
