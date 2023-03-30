////**********************Defining a function*************************
// function sing() {
//   console.log("Do");
//   console.log("Re");
//   console.log("Mi");
// }
// sing();

////***********************Parameter and Argunment********************
// // function greet(let person)  //Will throw error
// function greet(person) {
//   console.log(`hii there ${person}`);
// }
// greet("sahil");
// greet(829329);

// function repeat(word, times) {
//   let str = "";
//   for (let i = 0; i < times; i++) {
//     str = str + word;
//   }
//   console.log(str);
// }
// repeat("hi", 4);

// function show(joke, hoke) {
//   console.log(joke);
// }
// show("once Upon Time");

function sum(num1, num2) {
  if (typeof num1 !== "number" || typeof num2 !== "number") {
    return false;
  }
  return num1 + num2;
}

console.log(sum(12, 3));
