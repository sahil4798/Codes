//**********************Prototype with Array ***************************
const arr = [1, 2, 3, 4, 5];
console.log(arr);
console.log(arr.Prototype);
arr.scream = () => {
  console.log("Don't hurt me");
};
arr.scream();
console.log("arr", arr);

const arr2 = [10, 20, 30];
console.log("arr2 ", arr2); //does not contain scream method in prototype

console.log(Array.prototype);
arr.pop();
console.log(arr);

Array.prototype.pop = () => {
  console.log("Sorry i can't pop cause i need this element");
};
arr.pop();
console.log(arr);

console.log("*****************Prototype with String ************************");
const s1 = "hinata";
console.log(s1);
console.log(String.prototype);
String.prototype.sing = function () {
  alert("Ahh ahha hahaha ahhha");
};
console.log(String.prototype);
s1.sing();

String.prototype.yell = function () {
  return `ohhhh ${this}!!!!!!!!!!`;
};
console.log(s1.yell());

console.log(String.__proto__); //invalid cause __proto__ is a reference so it only works on a particualr String(s1) where prototype is an actual object
console.log(s1.__proto__);
