
#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "unity.h"

void app_main(void)
{
    printf("Hello world!\n");
    UNITY_BEGIN();
    unity_run_all_tests();   // runs every TEST_CASE automatically
    UNITY_END();
}
