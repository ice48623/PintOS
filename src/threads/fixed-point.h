// x and y => fixed point
// n => integer

#define F (13)
#define CONVERT_TO_FIX(n) ((n)<<F)

// convert fixed point to int
#define ROUND_TO_ZERO(x) ((x)>>F)
#define ROUND_TO_NEAREST(x) (x >= 0 ? ((x + (F >> 2)) >> F) \
								   	: ((x - (F >> 2)) >> F) )

#define ADD_FIX(x,y) (x+y)
#define ADD_MIX(x,n) (x + (n<<F))

#define SUBTRACT_FIX(x,y) (x-y)
#define SUBTRACT_MIX(x,n) (x - (n<<F))

#define MULT_FIX(x,y) ( ( ((int64_t)x)*y ) >> F )
#define MULT_MIX(x,n) (x*n)

#define DIV_FIX(x,y) ( ( ((int64_t)x)<<F ) / y )
#define DIV_MIX(x,n) (x/n)
