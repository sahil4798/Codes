const inp = document.querySelector("input");
const heading = document.querySelector("h1");

////***************change event****************
// inp.addEventListener("change", function (e) {
//     console.log(inp.value);
// });

////***************input event****************
inp.addEventListener("input", function (e) {
  //   console.log(inp.value);
  heading.innerText = inp.value;
});
