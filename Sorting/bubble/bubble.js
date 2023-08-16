let arr = [5, 4, 3, 2, 1];
let temp;

for (let i = 0; i < 4; i++) {
  for (let j = 0; j < 4 - i; j++) {
    if (arr[j] > arr[j + 1]) {
      temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
    }
  }
}

console.log("The elements entered are: " + arr.join(" "));
