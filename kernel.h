
#ifndef KERNEL_H
#define KERNEL_H

#include <stdio.h>
#include <cmath>

#include <cuda_runtime.h>
#include <cuda_gl_interop.h>
#include <helper_cuda.h>
#include <helper_cuda_gl.h>
#include <curand.h>
#include <curand_kernel.h>

#define BlockSize 128

void initCuda(int n);
void cudaFlockingUpdateWrapper(int n, float dt, float3 target);
void cudaUpdateVBO(int n, float *vbodptr, float *velptr);

#endif