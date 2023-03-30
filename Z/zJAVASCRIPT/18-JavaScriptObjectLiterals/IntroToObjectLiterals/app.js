// //Declaring a ObjectLiterals
// let myInfo = {
//   name: "sahil",
//   batch: "CSE-11",
//   rollNo: 1633,
//   Isvegetarian: true,
//   age: 21,
//   languages: ["C", "C++", "java"],
// };
// console.log(myInfo);

// //Accessing value with the key
// console.log(myInfo["name"]);
// console.log(myInfo["languages"]);

// console.log("Roll.No :" + myInfo.rollNo);
// console.log("Age :" + myInfo.age);

// //all keys converted into Strings
// const blaBla = {
//   null: 4,
//   true: "dead",
//   NaN: "Not a Number",
//   3462: "A number",
//   heart: "black",
// };

// console.log(blaBla[true]);
// console.log(blaBla["3462"]);
// console.log(blaBla[3462]);
// console.log(blaBla["heart"]);
// // console.log(blaBla[heart]); //Will throw error

// //Requirement of myInfo[""]-Format(Don't mind yrr self with this not that Important)
// const years = { 2001: "Born", 2021: "Turns 20" };
// let birthYear = 2001;

// console.log(years.birthYear); //it will not capable for recognise the birthyear value

// console.log(years[birthYear]);
// console.log(years["20" + "21"]); // some of ability of this formatt

// //Modify value and Adding new properties(key+value)
// const thirdSem = { oops: 90, dsa: 60 };
// console.log(thirdSem);
// thirdSem["oops"] = 85;
// thirdSem.dsa = 80;
// console.log(thirdSem);
// thirdSem.oops = "A";
// thirdSem.dsa = "A-";
// thirdSem.maths = "B+";
// thirdSem.materialscience = "A-";
// console.log(thirdSem);

//Nesting Arrays and Object-Literals

const data = [
  { name: "luffy", devilfruit: "gum-gum", age: 17 },
  { name: "shanks", devilfruit: null, age: 28 },
  { name: "zoro", devilfruit: null, age: 19 },
];
console.log(data[1]);
console.log(data[2].name);

const legend = {
  name: "madara",
  age: "doesnotmatter",
  isdead: true,
  power: ["Sharingan", "Sage-Of-Sixth-Path", "unlimed - chakra"],
};
console.log(legend.name);
console.log(legend.power);
console.log(legend.power[1]);
