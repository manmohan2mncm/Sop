function sorting(arr, n) {
    for (let i = 0; i < n - 1; i++) {
        let minSize = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minSize]) {
                minSize = j;
            }
        }
        let temp = arr[i];
        arr[i] = arr[minSize];
        arr[minSize] = temp;
    }
}

function binary(arr, l, r, target) {
    while (l <= r) {
        let m = l + Math.floor((r - l) / 2);
        if (arr[m] === target) {
            return true;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return false;
}

const MAX_SIZE = 100;
let arr = new Array(MAX_SIZE);
let n, i;
let searchQuery;

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the number of elements (up to " + MAX_SIZE + "): ", (answer) => {
    n = parseInt(answer);
    console.log("Enter the elements:");
    rl.on('line', (line) => {
        arr[i] = parseInt(line);
        i++;
        if (i === n) {
            rl.close();
            processInput();
        }
    });
});

function processInput() {
    console.log("The elements entered are: " + arr.join(' '));
    rl.question("Enter the element to be searched: ", (answer) => {
        searchQuery = parseInt(answer);
        sorting(arr, n);
        if (binary(arr, 0, n - 1, searchQuery)) {
            console.log("The element exists.");
        } else {
            console.log("The element doesn't exist in the array.");
        }
    });
}
