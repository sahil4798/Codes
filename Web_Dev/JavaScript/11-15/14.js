let s = "Sahil";
console.log(typeof (s));
console.log(s.length);

console.log(s.toUpperCase());
console.log(s.toLowerCase());
console.log(s.slice(1, 4));
console.log(s.slice(2));
console.log(s.replace('hil', 'ff'))

let t =" is learning Js";
console.log(s.concat(t));
console.log(s.concat(t , " uchiya"));
console.log(s + " is learning Js")  

let u ="    siva    "
console.log(u.trim());


console.log("*************************************************************");

let a = "vaibhah";
console.log(a[0]);
console.log(a[1]);
console.log(a[2]);
console.log(a[3]);
console.log(a[4]);
console.log(a[5]);
console.log(a[6]);
console.log(a[7]); //UNdefined

// a[0] = p; //This will throw error



console.log("*************************************************************");
let v = "sahil" + "vaivhab" ;
for(let i=0 ; i<13 ; i++){
    console.log(v[i]);
}