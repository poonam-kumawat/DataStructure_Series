let pattern = "";
let n = 6;
for (let i = 1; i <= n; i++) {
  for (let j = i; j <= n; j++) {
    pattern += " ";
  }
  for (let k = 1; k <= i; k++) {
    if(k===1 || k===i || i===n) pattern += " *";
    else pattern += "  ";
  }
  pattern += "\n";
}

console.log(pattern);
