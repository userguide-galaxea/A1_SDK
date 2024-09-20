void dynamics_jump_map_jacobian_sparsity(unsigned long const** row,
                                         unsigned long const** col,
                                         unsigned long* nnz) {
   static unsigned long const rows[6] = {0,1,2,3,4,5};
   static unsigned long const cols[6] = {1,2,3,4,5,6};
   *row = rows;
   *col = cols;
   *nnz = 6;
}
