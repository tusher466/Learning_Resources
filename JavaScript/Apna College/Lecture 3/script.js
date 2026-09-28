console.log("Apna College");
console.log("DIU_2026");

// for loop
for(let i = 1; i <= 5; i++)
{
    console.log("Daffodil International University");
}

// Calculate sum of 1 to 100
let sum = 0;
for(let i = 1; i <= 100; i++)
{
    sum += i;
}
console.log("Sum =", sum);

for(let i = 1; i <=10; i++)
{
    console.log("i = ", i);
}

// while loop
let i = 1;
while(i <= 5)
{
    console.log("CSE-211");
    i++;
}

// do-while loop
let j = 1;
do{
    console.log("j = ", j);
    j++;

} while(j <= 10);

// for-of loop -> use only strings/arrays
let str = "Daffodil";
let len = 0;

for(let i of str)
{
    console.log("i = ", i);
    len++;
}
console.log("length of string = ", len);

// for-in loop -> use only objects/arrays
let student = {
    name: "Sunny",
    age: 22,
    cgpa: 3.5,
    isPass: true,
};

for(let key in student)
{
    console.log("key:", key, "value:", student[key]);
}
