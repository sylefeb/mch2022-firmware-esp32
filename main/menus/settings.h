#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>
#include <freertos/task.h>
#include <sdkconfig.h>

#include "ili9341.h"
#include "pax_gfx.h"

void menu_settings(xQueueHandle button_queue);
