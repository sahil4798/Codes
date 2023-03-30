const container = document.querySelector("#container");
const btn = document.querySelector("#chagecolor");

const randomColor = function () {
  const r = Math.floor(Math.random() * 255);
  const g = Math.floor(Math.random() * 255);
  const b = Math.floor(Math.random() * 255);

  return `rgb(${r} , ${g} , ${b})`;
};

btn.addEventListener("click", function (e) {
  container.style.backgroundColor = randomColor();
  e.stopPropagation();
});

container.addEventListener("click", function () {
  container.classList.toggle("hide");
});
