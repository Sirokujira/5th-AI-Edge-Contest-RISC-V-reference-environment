
#define REG(address) *(volatile unsigned int*)(address)
#define DMEM_BASE  (0xA0002000)

// This program is DMEM[0]+DMEM[1]=DMEM[2]
int main()
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = REG(DMEM_BASE+0);
	b = REG(DMEM_BASE+4);
	c = a + b;
	REG(DMEM_BASE+8) = c;

	/* Loop */
	while(1) {
	}

	return 0;
}
 
