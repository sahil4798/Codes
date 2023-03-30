//// Reference Types and Equality Testing

// let A = [1, 2, 3, 4, 5];
// let B = [1, 2, 3, 4, 5];
// console.log(A === B); // may be data is same but the adress both array differ in main memory
// let C = A; //C reference same array as A
// console.log(A === C);

// console.log([1, 2, 3, 4, 5] === [1, 2, 3, 4, 5]);

// let num = [1, 2, 3];
// let numCopy = num;
// console.log(numCopy);
// numCopy.push(4);
// console.log(numCopy);
// console.log(num);

// // Array and Constant

// const pi = 3.14;
// // pi = pi + 1;   //Invalid

// let A = [1, 2, 3, 4];
// A = [1, 2, 3, 4];
// A = [5, 6, 7, 8];

// const B = [1, 2, 3];
// // A.push(4); //Valid;
// // B = [1, 2, 3];  //Invalid

//Multi-Dimentional Array
const onePeice = [
  ["Luffy", "Gum-Gum"],
  ["Sabo", "fire-fire"],
  ["Buggy", "Chop-Chop"],
];

console.log(onePeice[0]);
console.log(onePeice[1][1]);
console.log(onePeice[0][0]);

let gameBoard = [
  ["X", "O", "X"],
  ["O", null, "X"],
  ["O", "O", "X"],
];
console.log(gameBoard[1]);
console.log(gameBoard[1][1]);
console.log(gameBoard[2][1]);
