// //************************Factory Function********************

// function hexa(r, g, b) {
//   return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
// }

// function rgb(r, g, b) {
//   return `rgb(${r} , ${g} , ${b})`;
// }

// function makeColor(r, g, b) {
//   const color = {};
//   color.r = r;
//   color.g = g;
//   color.b = b;

//   color.rgb = function () {
//     const { r, g, b } = this;
//     return `rgb(${r} , ${g} , ${b})`;
//   };

//   color.hexa = function () {
//     const { r, g, b } = this;
//     return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
//   };

//   return color;
// }

// const color1 = makeColor(12, 251, 210);
// console.log(color1);
// console.log(color1.rgb());
// console.log(color1.hexa());

// ("rbg(12 , 2521 , 210)"); --> #0CFBD2

// //***********************301-Starts*********************
// function makeColor(r, g, b) {
//   const color = {};
//   color.r = r;
//   color.g = g;
//   color.b = b;

//   color.rgb = function () {
//     const { r, g, b } = this;
//     return `rgb(${r} , ${g} , ${b})`;
//   };

//   color.hexa = function () {
//     const { r, g, b } = this;
//     return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
//   };

//   return color;
// }

// const color1 = makeColor(12, 13, 36);
// const color2 = makeColor(122, 134, 236);

// console.log(color1.hexa === color2.hexa);

// console.log("hii".concat === "bye".concat);

////************************Constructor Function********************
function Color(r, g, b) {
  this.r = r;
  this.g = g;
  this.b = b;
  console.log("this : ", this);
}
//If you call it on its own like a regular function.
Color(35, 60, 190); //undefined 10 //It returns undefined. Seems useless!

//************************
// THE NEW OPERATOR!
//************************

// 1. Creates a blank, plain JavaScript object;
//2. Links (sets the constructor of) this object to another object;
// 3. Passes the newly created object from Step 1 as the this context;
// 4. Returns this if the function doesn't return its own object.

Color.prototype.rgb = function () {
  const { r, g, b } = this;
  return `rgb(${r}, ${g}, ${b})`;
};

Color.prototype.rgba = function (a) {
  const { r, g, b } = this;
  return `rgb(${r}, ${g}, ${b} , ${a})`;
};

Color.prototype.hexa = function () {
  const { r, g, b } = this;
  return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
};

const color = Color(0, 100, 200);
const color1 = new Color(122, 32, 243);
const color2 = new Color(122, 213, 109);

console.log(color);
console.log(color1);
console.log(color2);
console.log(color1.rgb === color2.rgb);

// document.body.style.backgroundColor = color1.rgb();
// document.body.style.backgroundColor = color1.rgba(0.4);
