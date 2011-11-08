/**
 * @file linear_kernel.hpp
 * @author Wei Guan
 * @author James Cline
 * @author Ryan Curtin
 *
 * Implementation of the linear kernel (just the standard dot product).
 */
#ifndef __MLPACK_CORE_KERNELS_LINEAR_KERNEL_HPP
#define __MLPACK_CORE_KERNELS_LINEAR_KERNEL_HPP

#include <mlpack/core.h>

namespace mlpack {
namespace kernel {

/**
 * The simple linear kernel (dot product).  For any two vectors @f$ x @f$ and
 * @f$ y @f$,
 *
 * @f[
 * K(x, y) = x^T y
 * @f]
 *
 * This kernel has no parameters and therefore the evaluation can be static.
 */
class LinearKernel {
 public:
  /**
   * This constructor does nothing; the linear kernel has no parameters to
   * store.
   */
  LinearKernel() { }

  /**
   * Simple evaluation of the dot product.  This evaluation uses Armadillo's
   * dot() function.
   *
   * @param a First vector.
   * @param b Second vector.
   * @return K(a, b).
   */
  static double Evaluate(const arma::vec& a, const arma::vec& b) {
    return arma::dot(a, b);
  }
};

}; // namespace kernel
}; // namespace mlpack

#endif