//CHAPTER-4 PRACTISE SET

// ques-1
let str = 'sahi\'l' ;
console.log(str.length);


console.log("*************************************************************************************************")
//ques-2  //Demonstration of includes , startsWith , endsWith
let s = 'This is bad';
let word = 'bad'
console.log(s.includes(word));
console.log(s.startsWith("This"));
console.log(s.endsWith("is"));
console.log("The string  have"+" word "+s.includes(word));


console.log("*************************************************************************************************")
//ques-3
let f = "PIkaCHU";
console.log(f.toLowerCase(f));



console.log("*************************************************************************************************")
//ques-4
let ptr = "Please give Rs 1000";
let amount = ptr.slice(15)
console.log(amount);
console.log(typeof(amount));
amount = Number.parseInt(amount);
console.log(typeof(amount));


console.log("*************************************************************************************************")
//ques-5
let y ="harry";

// y[3] = 'u';
// console.log(y);  //this commented code is not responsing because String can't change.

console.log(y.slice(0 , 3) +"uy")
