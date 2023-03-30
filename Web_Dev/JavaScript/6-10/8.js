// Chapter-2 practise set

// ques-1
let age = prompt("what is your age?")
// let age=18;
age  =Number.parseInt(a);
console.log("Age is lying between 10-20" , age>10 && age<20);
if(age>10 && age<20){
    console.log("your age lies between 10-20");
}
else{
    console.log("your age is not lies between 10-20");
}

// ques-2
let a = prompt("what is your age?")
a  =Number.parseInt(a);
switch (a){
    case '10' :
    console.log("Your age is 10");
    break
    case '11' :
    console.log("Your age is 11");
    break    
    case '12' :
    console.log("Your age is 12");
    break    
    case '13' :
    console.log("Your age is 13");
    break    
    case '14' :
    console.log("Your age is 14");
    break  
    default:
    console.log("this is fun")  
}

//ques-3
let num = prompt("what is your number?");
num  =Number.parseInt(num);
if(a%2==0 && a%3==0){
    console.log("Enter number is divisible by 2 and 3 both");
}

else{
    console.log("Entered number is not divisible by 2 and 3 both");
}

//ques-4
let numb = prompt("what is your number?");
numb  =Number.parseInt(numb);

if(numb%2==0 || numb%3==0){
    console.log("Enter number is divisible either by 2 or 3 ");
}

else{
    console.log("Entered number is not divisible by 2 and 3 both");
}


//ques-5
let ag = prompt("what is your age?")
ag  =Number.parseInt(a);

// console.log("You can", ag<18 ? "not Derive."  : "Derive")

let s =  ag<18 ? "You can not Derive."  : "You can Derive";
console.log(s);