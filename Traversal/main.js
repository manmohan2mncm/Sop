function getInput() {
    let numElements = parseInt(document.getElementById('numElements').value);
    let l = [];
  
    for (let i = 0; i < numElements; i++) {
      let element = parseInt(prompt("Enter the element:"));
      l.push(element);
    }
  
    document.getElementById('output').textContent = l.toString();
}
  