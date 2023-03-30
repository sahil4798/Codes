// const fakeRequest = (url) => {
//   return new Promise((resolve, reject) => {
//     const rand = Math.random();
//     setTimeout(() => {
//       if (rand < 0.7) {
//         resolve("Your Fake data is ready");
//       } else reject("Request Error!");
//     }, 2000);
//   });
// };

// fakeRequest("zoro.to")
//   .then((message) => {
//     console.log("Done with request ", message);
//   })
//   .catch((err) => {
//     console.log("OH NOOO", err);
//   });

// const delayedColorChange = (newcolor, delay, doNext) => {
//   setTimeout(() => {
//     document.body.style.backgroundColor = newcolor;
//     doNext && doNext();
//   }, delay);
// };

// delayedColorChange("red", 1000, () => {
//   delayedColorChange("orange", 1000, () => {
//     delayedColorChange("yellow", 1000, () => {
//       delayedColorChange("green", 1000, () => {
//         //   delayedColorChange("blue", 1000, () => {});
//         delayedColorChange("blue", 1000);
//       });
//     });
//   });
// });

const delayedColorChanged = (newColor, delay) => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      document.body.style.backgroundColor = newColor;
      resolve();
    }, delay);
  });
};

delayedColorChanged("red", 1000)
  .then(() => delayedColorChanged("orange", 1000))
  .then(() => delayedColorChanged("yellow", 1000))
  .then(() => delayedColorChanged("orange", 1000))
  .then(() => delayedColorChanged("green", 1000))
  .then(() => delayedColorChanged("blue", 1000))
  .then(() => delayedColorChanged("indigo", 1000))
  .then(() => delayedColorChanged("violet", 1000));
