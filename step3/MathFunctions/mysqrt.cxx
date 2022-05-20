double mysqrt(double y) {
  double x, z, tempf;
  unsigned long *tfptr = ((unsigned long *)&tempf) + 1;
  tempf = y;
  *tfptr = (0xbfcdd90a - *tfptr)>>1; 
  x =  tempf;
  z =  y*0.5;                       
  x = (1.5*x) - (x*x)*(x*z);
  x = (1.5*x) - (x*x)*(x*z);
  return x*y; 
}