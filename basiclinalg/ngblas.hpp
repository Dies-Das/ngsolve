#ifndef FILE_NGBLAS
#define FILE_NGBLAS

// optimized matrix kernels

namespace ngbla
{

  template <typename TA, typename TB, typename TC>
  void MultMatMat(SliceMatrix<TA> a, SliceMatrix<TB> b, SliceMatrix<TC> c)
  {
    c = a * b;
  }

  extern void MultMatMat (size_t ha, size_t wa, size_t wb,
                          BareSliceMatrix<> a, BareSliceMatrix<> b, BareSliceMatrix<> c);
  
  inline void MultMatMat (SliceMatrix<> a, SliceMatrix<> b, SliceMatrix<> c)
  {
    MultMatMat (a.Height(), a.Width(), b.Width(), a, b, c);
  }

}


#endif
