const delay = (ms) => {
  return new Promise((resolve) => setTimeout(resolve, ms));
};

const run = async () => {
  console.log("start");
  await delay(2000);
  console.log("after 2 sec");
};

run();
