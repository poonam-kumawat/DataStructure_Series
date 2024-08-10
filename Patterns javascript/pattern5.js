let pattern = "";
let n = 6;
for (let i = 1; i <= n; i++) {
  for (let j = 1; j <= i; j++) {
    pattern += " ";
  }
  for (let k = n; k >= i; k--) {
    pattern += " *";
  }
  pattern += "\n";
}

console.log(pattern);
