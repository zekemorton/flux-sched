#ifndef MATCH_OP_H
#define MATCH_OP_H

enum class match_op_t { MATCH_UNKNOWN,
                        MATCH_ALLOCATE,
                        MATCH_ALLOCATE_W_SATISFIABILITY,
                        MATCH_ALLOCATE_ORELSE_RESERVE,
                        MATCH_SATISFIABILITY };

static const char *match_op_to_string (match_op_t match_op) {
    switch (match_op) {
        case match_op_t::MATCH_ALLOCATE:                  return "allocate";
        case match_op_t::MATCH_ALLOCATE_ORELSE_RESERVE:   return "allocate_orelse_reserve";
        case match_op_t::MATCH_ALLOCATE_W_SATISFIABILITY: return "allocate_with_satisfiability";
        case match_op_t::MATCH_SATISFIABILITY:            return "satisfiability";
        default: return "error";
    }
}

#endif //MATCH_OP_H