// //**************************for-of-loop**********************************
// let colors = ["Violet", "indigo", "blue", "green", "yellow", "orange", "red"];

// for (element of colors) {
//   console.log(`${element}`);
// }

// let seatingChart = [
//   ["Tom", "Thomas", "William"],
//   ["Rorger", "Rayligh", "Odin", "Kikaku"],
//   ["luffy", "Zoro", "Sanji", "Jimbie"],
// ];
// for (row of seatingChart) {
//   for (student of row) {
//     console.log(`${student}`);
//   }
// }

// for (char of "hello world") {
//   console.log(char);
// }

////**********************Iterating object-literals************************
// let testScore = {
//   atul: 87,
//   abram: 85,
//   Kozuki: 98,
//   sakura: 99,
//   chris: 77,
//   natasha: 96,
// };
// // for (person in testScore) {
// //   console.log(`${person}`);
// // }
// for (person in testScore) {
//   console.log(`${person} scored : ${testScore[person]}`);
// }

// //keys and values are conveted into array
// console.log(Object.keys(testScore));
// console.log(Object.values(testScore));
// console.log(Object.entries(testScore));

// let sum = 0;
// for (value of Object.values(testScore)) {
//   console.log(value);
//   sum = sum + value;
// }
// console.log(sum / Object.values(testScore).length);

////*************************TO-DoList*******************************

let toDoList = [];
let input = prompt("Enter what you want..");
let i = 0;

while (input !== "quit" && input !== "q") {
  if (input === "new") {
    toDoList.push(prompt("Enter a new todo"));
    console.log(`${toDoList[toDoList.length - 1]} is added in ToDoList`);
  } else if (input === "list") {
    console.log("*****************************");
    for (let j = 0; j < toDoList.length; j++) {
      console.log(`${j} : ${toDoList[j]}`);
    }
    console.log("*****************************");
  } else if (input === "delete") {
    i = parseInt(prompt("Enter the index you want to delete :"));

    if (!Number.isNaN(i)) {
      console.log(toDoList[i] + "is deleted ");
      toDoList.splice(i, 1);
    } else {
      console.log("entered index is unknown");
    }
  }

  input = prompt("Enter what you want..");
}

console.log("Ohh You Quit App");
