#ifndef GDF_ERRORUTILS_H
#define GDF_ERRORUTILS_H

#define CUDA_TRY(x) if ((x)!=cudaSuccess) return 1;

#define CUDA_CHECK_LAST() CUDA_TRY(cudaGetLastError())

#endif // GDF_ERRORUTILS_H
