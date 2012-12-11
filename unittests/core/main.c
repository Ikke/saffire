#include <stdio.h>
#include <CUnit/CUnit.h>

#include "../../src/include/general/hashtable.h"

void test_hash_table() {
    t_hash_table *ht = ht_create();
}

int main(int argc, char *argv[]) {

    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("hashtable", NULL, NULL);
    CU_pTest CU_add_test(suite, test_hash_table);


    CU_cleanup_registry();
}