let pattern = "";
let n = 6;
for (let i = 1; i <= n; i++) {
  for (let j = i; j <= n; j++) {
    if (j === i || i === 1 || j===n) pattern += "* ";
    else pattern += "  ";
}
  pattern += "\n";
}
console.log(pattern);
