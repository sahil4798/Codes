const data = `{"ticker":{"base":"BTC","target":"USD","price":"24775.87776109","volume":"13430.11446703","change":"8.59047892"},"timestamp":1676522045,"success":true,"error":""}`;
console.log(data);
const decryptdata = JSON.parse(data);
console.log(decryptdata);
console.log(decryptdata.ticker.price);

const dog = { name: "husky", color: "brown", alive: "true", owner: undefined };

const incrpt = JSON.stringify(dog);
console.log(incrpt);
