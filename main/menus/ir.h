#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>
#include <freertos/task.h>
#include <sdkconfig.h>

#include "ili9341.h"
#include "pax_gfx.h"

void menu_ir(xQueueHandle button_queue, bool alternative);
