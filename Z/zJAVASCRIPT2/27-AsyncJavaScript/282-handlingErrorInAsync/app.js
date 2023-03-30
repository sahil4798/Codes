const fakeRequestPromise = (url) => {
  return new Promise((resolve, reject) => {
    const delay = Math.floor(Math.random() * 4500) + 500;
    setTimeout(() => {
      if (delay > 2000) {
        reject("Conection Timeout :(");
      } else {
        resolve(`Here is your fake request  ${url}`);
      }
    }, delay);
  });
};

async function requestTwo() {
  try {
    let data1 = await fakeRequestPromise("zoro.to/page1");
    console.log(data1);
    let data2 = await fakeRequestPromise("zoro.to/page1");
    console.log(data2);
  } catch (e) {
    console.log("Caught an Error");
    console.log("Error is :" + e);
  }
}

requestTwo();
