let str1 = '\'aspas simples\' \"aspas duplas\"'

console.log(str1);

let str2 = 'position';

console.log(str2[3]); // Return i
console.log(str2.charAt(5)); // Return i
console.log(str2.charCodeAt(5)); // Return code ASCII
console.log(str2.concat(' in string')); // Concatenate with str2
console.log(str2.indexOf('ion')); // Return position ion
console.log(str2.match(/[a-z]/g)); // Return letters 

let str3 = 'rato e sapato';

console.log(str3.replace('sapato', 'pato')); // Replacement words
console.log(str3.length); // Count caracters
console.log(str3.slice(0, 4)); // Get caracters in position to position
console.log(str3.split('a')); // Divide text for a
console.log(str3.toUpperCase); // Letters in upper
console.log(str3.toLowerCase); // Letters in lower
