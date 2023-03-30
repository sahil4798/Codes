// // ********************Basic********************
// const heading = document.querySelector("h1");
// console.log(heading);
// console.dir(heading);
// console.log(heading.innerText);
// console.log(heading.innerHTML);
// console.log(heading.textContent);

//*****************getElementById***********************
// const image = document.getElementById("banner");
// image;
// console.dir(image);

// const heading = document.getElementById("head");
// heading;
// console.dir(heading);

//*****************getElementsByTagName***********************
// const images = document.getElementsByTagName("img");
// images;
// console.dir(images);

// for (let img of images) {
//   img.src = "https://cdn.wallpapersafari.com/94/13/iSamg2.jpg";
// }

// const allDiv = document.getElementsByTagName("div");
// console.dir(allDiv);

//*****************getElementsByTagName***********************
// const squareImages = document.getElementsByClassName("square");
// console.dir(squareImages);
// for (let img of squareImages) {
//   img.src =
//     "https://images.unsplash.com/photo-1675794522270-f0329879fe3a?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=2786&q=80";
// }

//*****************QuerySelector***********************

// const paragraph = document.querySelector("p");
// console.dir(paragraph);

// const image = document.querySelector(".square");
// console.dir(image);
// image.src =
//   "https://images.unsplash.com/photo-1675820999139-ec6cc2989cac?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=810&q=80";

// const ban = document.querySelector("#banner");
// console.dir(ban);

// const imge = document.querySelector("img:nth-of-type(2)");
// imge.src =
//   "https://images.unsplash.com/photo-1675820999139-ec6cc2989cac?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=810&q=80";

//*****************QuerySelectorAll***********************
const images = document.querySelectorAll(".square");
console.dir(images);
for (img of images) {
  img.src =
    "https://images.unsplash.com/photo-1675794258546-32da0f5f4b25?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxlZGl0b3JpYWwtZmVlZHw1MHx8fGVufDB8fHx8&auto=format&fit=crop&w=800&q=60";
}

const anchor = document.querySelectorAll("a");
console.dir(anchor);

const anchorInsidePara = document.querySelectorAll("p a");
console.dir(anchorInsidePara);

for (let link of anchorInsidePara) {
  console.log(link.href);
}
