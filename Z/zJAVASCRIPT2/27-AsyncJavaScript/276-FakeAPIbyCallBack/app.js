const fakeRequestCallback = function (url, sucess, failure) {
  const delay = Math.floor(Math.random() * 4500) + 500;
  setTimeout(() => {
    if (delay > 4000) failure("ConnectionTimeout  :(");
    else {
      sucess(`Here is your fake data from ${url}`);
    }
  }, delay);
};

fakeRequestCallback(
  "zoro.to/page1",
  function (response) {
    console.log("Sucess -1");
    console.log(response);
    fakeRequestCallback(
      "zoro.to/page2",
      function (response) {
        console.log("Sucess-2");
        console.log(response);
        fakeRequestCallback(
          "zoro.to/page3",
          function (response) {
            console.log("Sucess-3");
            console.log(response);
          },
          function (err) {
            console.log("failure -3", err);
          }
        );
      },
      function (err) {
        console.log("failure -2", err);
      }
    );
  },
  function (err) {
    console.log("failure -1", err);
  }
);
