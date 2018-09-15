#include "dap_enc_aes_test.h"
#include "dap_enc_base64_test.h"
#include "dap_common.h"

int main(void) {
    // switch off debug info from library
    set_log_level(L_CRITICAL);
    dap_enc_aes_tests_run();
    dap_enc_base64_tests_run();
}