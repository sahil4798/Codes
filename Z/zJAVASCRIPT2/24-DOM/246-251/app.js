// // **********innerText-innerHTML-textContent*************
// const heading = document.querySelector("h1");
// // console.log(heading.innerText);
// // heading.innerText = "New";

// const para = document.querySelector("p");
// // // para.innerText = "Thats All";
// // console.log(para.innerText);
// // console.log(para.textContent);
// // console.log(para.innerHTML);

// const allLinks = document.querySelectorAll("a");
// // for (let link of allLinks) {
// //   link.textContent = "it is a Link";
// // }

// heading.innerText = "BlackDragon";
// heading.innerHTML = "toman";
// // heading.innerText = "<i>BlackDragon</i>";
// heading.innerHTML = "<i>toman</i>";
// heading.innerHTML += "<sup>100</sup>";

// // ********************Attributes********************
// const link = document.querySelector("p a");
// // console.log(link);
// // console.dir(link);
// link.href = "https://www.youtube.com/";
// console.log(link.href);
// console.log(link.title);
// console.log(link.getAttribute("title"));
// console.log(link.getAttribute("href"));
// link.setAttribute("href", "www.google.com");
// console.log(link.getAttribute("href"));

// const img = document.querySelector("#banner");
// img.id = "newBanner";
// img.id = "banner";

// const lastInput = document.querySelector("input[type='text']");
// console.log(lastInput.type);
// lastInput.type = "color";
// lastInput.type = "password";
// lastInput.setAttribute("type", "text");

// // ********************Changing-Styles********************
// const heading = document.querySelector("h1");
// console.dir(heading);
// console.dir(heading.style);
// // console.log(heading.style);
// heading.style.color = "green";
// heading.style.border = "2px solid black ";
// heading.style.fontSize = "4rem ";

// const links = document.querySelectorAll("a");
// for (let link of links) {
//   link.style.color = "cyan";
//   link.style.textDecorationColor = "black";
//   link.style.textDecorationStyle = "wavy";
// }

// console.log(heading.style.fontSize);
// console.log(heading.style.color);
// console.log(window.getComputedStyle(heading));
// console.log(window.getComputedStyle(heading).fontSize);
// console.log(window.getComputedStyle(heading).color);

// // ********************Changing-Styles********************
// const heading2 = document.querySelector("h2");
// console.log(heading2.getAttribute("class"));

// // heading2.setAttribute("class", "purple");
// // heading2.setAttribute("class", "border");

// heading2.classList.add("purple");
// heading2.classList.add("border");
// heading2.classList.remove("border");

// console.log(heading2.classList.contains("border"));
// console.log(heading2.classList.contains("purple"));

// // console.log(heading2.classList.toggle("boder"));
// console.log(heading2.classList.toggle("purple"));
// console.log(heading2.classList.toggle("purple"));

// // ***********Traversing-parent-child-sibling***********
// const firstBold = document.querySelector("b");
// console.log(firstBold);
// const parentoffirstBond = firstBold.parentElement;
// console.log(parentoffirstBond);

// const para = document.querySelector("p");
// const child = parentoffirstBond.children;
// console.log(child);
// console.log(child[2]);

// const squareImage = document.querySelector(".square");
// console.log(squareImage.nextSibling);
// console.log(squareImage.previousSibling);
// console.log(squareImage.nextElementSibling);
// console.log(squareImage.previousElementSibling);

// // ***************append-appendChild******************
// // *****insertAdjacent-insrtLast-insertFirst*****

let newImg = document.createElement("img");
newImg.src =
  "https://images.unsplash.com/photo-1675753240590-c2da0e94509b?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxlZGl0b3JpYWwtZmVlZHwxNTZ8fHxlbnwwfHx8fA%3D%3D&auto=format&fit=crop&w=800&q=60";

document.body.appendChild(newImg);
newImg.setAttribute("class", "square");

let newH3 = document.createElement("h3");
newH3.innerHTML = "<b>This ia H3</b>";
document.body.appendChild(newH3);

let para = document.querySelector("p");
para.append("This is  Endgame", "hvcscb");

let newBold = document.createElement("b");
// newBold.append("This is a bold");
newBold.innerText = "I am a Boldy";
console.log(newBold);
para.prepend(newBold);
document.body.prepend(newBold);

const newH2 = document.createElement("h2");
newH2.append("Adorable Checken");
// newH2.innerText = "Adorable Checken ";

const heading = document.querySelector("h1");
heading.insertAdjacentElement("afterEnd", newH2);

heading.after(newH3);
