const colors = ["red", "orange", "yellow", "green", "blue", "indigo", "violet"];

const words = document.querySelectorAll("span");
for (let i = 0; i < words.length; i++) {
  words[i].style.color = colors[i];
}
