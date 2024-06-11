int reverse(int x)
{ 
int sign = x < 0 ? -1 : 1; 
x = abs(x); 
int rev = 0; 
while (x > 0) 
{ 
int digit = x % 10; 
if (rev > (INT_MAX - digit) / 10) 
{ 
// Check for overflow 
return 0; 
} 
  rev = rev * 10 + digit; 
  x /= 10; 
}
  return sign * rev; 
}
