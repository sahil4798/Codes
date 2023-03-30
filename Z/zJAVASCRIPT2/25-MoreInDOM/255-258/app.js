// const but = document.querySelector("button");
// console.dir(but);

////*****************Method-2***********************
const btn = document.querySelector("#v2");
// console.dir(btn);
btn.onclick = function () {
  console.log("You Clicked a button");
  console.log("Hope it Worked");
};

// const scream = function () {
function scream() {
  console.log("Button touched");
  console.log("Don't touch Button");
}
btn.onmouseenter = scream;

document.querySelector("h1").onclick = function () {
  alert("you Clicked H1");
};

////*****************Method-3***********************
const btn3 = document.querySelector("#v3");
btn3.addEventListener("click", function () {
  alert("Clicked");
});

function Twist() {
  console.log("Twist");
}
function Scream() {
  console.log("Scream");
}

const tasButton = document.querySelector("#tas");
// tasButton.onclick = Twist;
// tasButton.onclick = Scream;
tasButton.addEventListener("click", Twist);
tasButton.addEventListener("click", Scream);
