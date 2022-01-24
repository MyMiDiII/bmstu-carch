extern "C"
{
	void var012_unrolled(int* c, const int* a, const int* b, const int len)
	{
		int ptr = 0;
		for (int i = 0; i < len; i++)
		{
            #pragma HLS UNROLL
			ptr = b[i] % len;
			c[i] = a[ptr] + i;
		}
	}
}
