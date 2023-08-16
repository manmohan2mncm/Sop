function selection(arr) {
    let n = arr.length;

    for (let i = 0; i < n - 1; i++) {
        let minIndex = i;

        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
    }
}

let arr = [7, 6, 5, 4, 3, 2, 1];
console.log("Original array:", arr);

selection(arr);

console.log("Sorted array:", arr);
