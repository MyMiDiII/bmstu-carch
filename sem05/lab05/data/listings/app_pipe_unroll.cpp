extern "C"
{
	void var012_pipe_unroll(int* c, const int* a, const int* b, const int len)
	{
		int ptr = 0;
		for (int i = 0; i < len; i++)
		{
            #pragma HLS DATAFLOW
			ptr = b[i] % len;
			c[i] = a[ptr] + i;
		}
	}
}
