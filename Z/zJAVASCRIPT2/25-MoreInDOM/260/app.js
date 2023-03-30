const randomColor = () => {
  const r = Math.floor(Math.random() * 255);
  const g = Math.floor(Math.random() * 255);
  const b = Math.floor(Math.random() * 255);
  return `rgb(${r},${g},${b})`;
};

const btns = document.querySelectorAll("button");

for (let button of btns) {
  button.addEventListener("click", colorize);
}

////********************this Keyword*****************
const headings = document.querySelectorAll("h1");
for (let heading of headings) {
  heading.addEventListener("click", function () {
    console.log(this);
    console.log(heading);
    ////remark--> heading==this;
    this.style.backgroundColor = randomColor();
    heading.style.color = randomColor();
  });
}

function colorize() {
  this.style.backgroundColor = randomColor();
  this.style.color = randomColor();
}
