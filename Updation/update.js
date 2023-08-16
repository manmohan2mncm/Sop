const MAX_SIZE = 100;
let arr = [];
let n, i;
let indexPos, element;

n = parseInt(prompt(`Enter the number of elements (up to ${MAX_SIZE}):`));

console.log("Enter the elements:");
for (i = 0; i < n; i++) {
    arr.push(parseInt(prompt("")));
}

indexPos = parseInt(prompt("Enter the index where the element is to be updated:"));
element = parseInt(prompt("Enter the element to be updated:"));

arr[indexPos] = element;

document.write("The elements entered are: ");
for (i = 0; i < n; i++) {
    document.write(arr[i] + " ");
}
document.write("<br>");
