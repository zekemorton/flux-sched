#ifndef MATCH_OP_H
#define MATCH_OP_H

enum class match_op_t { MATCH_ALLOCATE,
                        MATCH_ALLOCATE_W_SATISFIABILITY,
                        MATCH_ALLOCATE_ORELSE_RESERVE,
                        MATCH_SATISFIABILITY };

const char *match_op_to_string (match_op_t match_op);

#endif //MATCH_OP_H