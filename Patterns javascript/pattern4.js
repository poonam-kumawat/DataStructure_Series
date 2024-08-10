let pattern = "";
let n = 6;
for (let i = 1; i<= n; i++) {
  for (let j = i; j <= n; j++) {
    pattern += " ";
  }
  for (let k = 1; k <= i; k++) {
    pattern += " *";
  }
  pattern += "\n";
}

console.log(pattern);
