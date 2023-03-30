const H1 = document.querySelector("h1");

const colorbutton = document.querySelector("#colorbtn");

const changeColor = () => {
  const r = Math.floor(Math.random() * 255);
  const g = Math.floor(Math.random() * 255);
  const b = Math.floor(Math.random() * 255);
  const newColor = ` rgb(${r},${g},${b}) `;
  document.body.style.backgroundColor = newColor;
  H1.innerText = newColor;
};
colorbutton.addEventListener("click", changeColor);
