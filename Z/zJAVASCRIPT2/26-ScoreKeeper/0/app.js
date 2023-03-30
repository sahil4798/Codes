const points = document.querySelector("#points");
const btn1 = document.querySelector("#btn1");
const btn2 = document.querySelector("#btn2");
const btn3 = document.querySelector("#btn3");

points.addEventListener("change", function () {
  console.log(points.value);
  winingScore = parseInt(points.value);
  reset();
});

let winingScore = parseInt(points.value);
let point1 = 0;
let point2 = 0;
const scoreheading = document.querySelector("#scoreheading");

const score1 = document.querySelector("#score1");
const score2 = document.querySelector("#score2");

btn1.addEventListener("click", function () {
  if (point1 !== winingScore && point2 !== winingScore) {
    point1++;
    score1.innerText = point1;
  }
  if (point1 === winingScore || point2 === winingScore) {
    if (point1 > point2) {
      btn1.classList.add("winner");
      btn2.classList.add("loser");
      score1.classList.add("winner");
      score2.classList.add("loser");
    } else {
      btn1.classList.add("loser");
      btn2.classList.add("winner");
      score1.classList.add("loser");
      score2.classList.add("winner");
    }
  }
});

btn2.addEventListener("click", function () {
  if (point2 !== winingScore && point1 !== winingScore) {
    point2++;
    score2.innerText = point2;
  }
  if (point1 === winingScore || point2 === winingScore) {
    if (point1 > point2) {
      btn1.classList.add("winner");
      btn2.classList.add("loser");
      score1.classList.add("winner");
      score2.classList.add("loser");
    } else {
      btn1.classList.add("loser");
      btn2.classList.add("winner");
      score1.classList.add("loser");
      score2.classList.add("winner");
    }
  }
});

btn3.addEventListener("click", reset);

function reset() {
  point1 = 0;
  point2 = 0;
  score1.innerText = 0;
  score2.innerText = 0;
  btn1.classList.remove("winner", "loser");
  btn2.classList.remove("winner", "loser");
  score1.classList.remove("winner", "loser");
  score2.classList.remove("winner", "loser");
}
