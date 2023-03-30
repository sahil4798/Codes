//// **************Default-Parameters**************

// //*****The Old Way******
// function rollDie(numSides) {
//   if (numSides === undefined) {
//     numSides = 6;
//   }
//   console.log(Math.floor(Math.random() * numSides) + 1);
// }

// //*****The New Way******
// function rollDie(numSides = 6) {
//   console.log(Math.floor(Math.random() * numSides) + 1);
// }

// function greeting(name, greet = "Hi There") {
//   console.log(`${greet} ${name}`);
// }

////******************SPREAD****************
// console.log(Math.max(12, 88, 17, 97, 881, 1882));

// num = [12, 88, 17, 97, 881, 1882];
// // console.log(Math.max(num));  //invalid
// console.log(Math.max(...num));

// console.log(num);
// console.log(...num);
// console.log(12, 88, 17, 97, 881, 1882);

// greet = "Hello";
// console.log(greet);
// console.log(...greet);
// console.log("H", "e", "l", "l", "o");

////***************SPREAD-with Array Literal**************
// let colors = ["blue", "red", "green", "orange"];
// let devilFruit = ["gum-gum", "light-light", "dark-dark"];

// let combine = [...colors, ...devilFruit];
// console.log(combine);

// let combine2 = [...colors, ...devilFruit, "flame-flame", 9];
// console.log(combine2);

// // ***********Spread for String********
// let firstName = "Monkey D";
// let lastName = "Luffy";
// let fullName = [...firstName, ...lastName];
// console.log(fullName);

////***************SPREAD-with Object**************
const infoPersonal = {
  name: "sahil",
  mobileno: "90588292258",
  email: "sahilverma728@gmail.com",
};
const infoCollege = {
  rollNo: "1633",
  batch: "4CSE-11",
  email: "sahilverma2@.amity",
};

const combineInfo = { ...infoPersonal, ...infoCollege, city: "Meerut" };
console.log(combineInfo);

const dataFromForm = {
  email: "blueman@gmail.com",
  password: "tobias123!",
  username: "fugitora",
};

const newUser = { ...dataFromForm, id: 2345, isAdmin: false };
console.log(newUser);
