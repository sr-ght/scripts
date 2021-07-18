let array = [10, 20, 30];

console.log(array);

array[0] = 15; // Add in position
array[1] = 25;
array[2] = 35;

console.log(array);

array.push(45); // Add in home

console.log(array); 

array.unshift(5); // Add in end

console.log(array);

array.pop(); // Remove in home

console.log(array);

array.shift(); // Remove in end

console.log(array);

delete array[1]; // Remove in position 1

console.log(array);

console.log(array instanceof Array); // Array?
