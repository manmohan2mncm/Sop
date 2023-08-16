function cyclic(arr) {
    let i = 0;
    while (i < arr.length) {
        const correct = arr[i] - 1;
        if (arr[correct] !== arr[i]) {
            [arr[i], arr[correct]] = [arr[correct], arr[i]];
        } else {
            i++;
        }
    }
}

const arr = [13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1];
cyclic(arr);
console.log(arr);
