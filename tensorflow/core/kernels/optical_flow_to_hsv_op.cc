/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// See docs in ../ops/image_ops.cc
#include "tensorflow/core/kernels/optical_flow_to_hsv_op.h"

namespace tensorflow {

#define REGISTER_KERNEL(T)                            \
  REGISTER_KERNEL_BUILDER(Name("OpticalFlowToHSV")      \
                              .Device(DEVICE_CPU)     \
                              .TypeConstraint<T>("T"), \
                          OpticalFlowToHSVOp<CPUDevice, T>);

TF_CALL_float(REGISTER_KERNEL);
TF_CALL_double(REGISTER_KERNEL);

#undef REGISTER_KERNEL

}  // namespace tensorflow
