unsigned int riscv_dmm( unsigned int *DMEM ) {
  DMEM[   0] = 0x00000012;
  DMEM[   1] = 0x00000034;
  return 2 ;
}

