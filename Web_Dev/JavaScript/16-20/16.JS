
let arr = [92, 65, 54, 97, false, 'sahil'];
console.log(arr);
console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);
console.log(arr[3]);
console.log(arr[4]);
console.log(arr[5]);
console.log(arr[6]);

arr[1] = 30000;  //we are reassigning value of element at index 1
arr[6] = 00000;  //we are assigning value of element at index 1

for (let i = 0; i < 7; i++) {
  console.log(arr[i]);
}


console.log("The length of array is :", arr.length);
console.log("The data type of aaray is :", typeof (arr));