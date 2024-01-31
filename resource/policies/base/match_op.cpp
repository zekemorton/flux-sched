extern "C" {
#if HAVE_CONFIG_H
#include "config.h"
#endif
}

#include <algorithm>
#include <limits>
#include "policies/base/match_op.h"

// namespace Flux {
// namespace resource_model {
// namespace detail {

/****************************************************************************
 *                                                                          *
 *                      Match Options Utility Functions                     *
 *                                                                          *
 ****************************************************************************/

const char *match_op_to_string (match_op_t match_op) {
    switch (match_op) {
        case match_op_t::MATCH_ALLOCATE:                  return "allocate";
        case match_op_t::MATCH_ALLOCATE_ORELSE_RESERVE:   return "allocate_orelse_reserve";
        case match_op_t::MATCH_ALLOCATE_W_SATISFIABILITY: return "allocate_with_satisfiability";
        case match_op_t::MATCH_SATISFIABILITY:            return "satisfiability";
        default: return "error";
    }
}

// } // detail
// } // resource_model
// } // Flux