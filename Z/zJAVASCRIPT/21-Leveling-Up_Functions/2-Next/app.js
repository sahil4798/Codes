////***************************Methods*********************************
// let str = "Bamuda";
// console.log(str.length); //Method for String
// let A = [1, 2, 3, 4, 5];
// A.push(6); //Method for Array

// const myMath = {
//   PI: 3.14,
//   square: function (num) {
//     return num * num;
//   },
//   cube: function (num) {
//     return num ** 3;
//   },
// };

// // ////ShortHand for Method
// // const myMath = {
// //   PI: 3.14,
// //   square(num) {
// //     return num * num;
// //   },
// //   cube(num) {
// //     return num ** 3;
// //   },
// // };

// console.log(myMath.PI);
// console.log(myMath.square(3));
// console.log(myMath.cube(3));

////**********************************this-Keyword*****************************

// const zoro = {
//   name: "Roronao Zoro",
//   power: "haki",
//   role: "ShordMan",
//   say: function () {
//     console.log(`${this.name} Strongest-ShordMan`);
//     // console.log("This is", this);
//   },
// };
// zoro.say();
// let say2 = zoro.say;
// say2();

// console.log(window);
// function scream() {
//   console.log("AHHHAAHHHHHHHAH");
// }
// scream();
// window.scream();

////***************************try-catch*******************************
// try {
//   hello.toUpperCase();
// } catch {
//   console.log("Error detected  ");
// }
// console.log("end");

function yell(msg) {
  try {
    console.log(msg.toUpperCase().repeat(3));
  } catch (e) {
    console.log("Please Enter valid string ");
  }
}

// yell("yourname ");
// yell(92883);
