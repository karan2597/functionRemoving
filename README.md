The main logic resides in func.cpp

Limitations: 
1. Accounts for only " in string but not single quotes or any other special characters.
2. Doesn't work for inputs with signs like +, -

The problem with next section:

Use of keyword var, instead of let for iterating over array. This is happening because of varibale hoisting.  let helps you avoid the variable hoisting in js and keep your variables' scope at just where it needs to be.