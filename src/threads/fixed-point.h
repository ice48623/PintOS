#define NPOINT 14
#define MULT(a, b) (a*b)>>NPOINT
#define DIVIDE(a, b) (a/b)<<NPOINT
#define CONVERT_TO_FIXED_POINT(a) a<<NPOINT
#define CONVERT_TO_INT(a) a>>NPOINT