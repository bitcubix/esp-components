#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"

static const char *TAG = "socket";

#define PORT                CONFIG_PORT
#define KEEPALIVE_IDLE      CONFIG_KEEPALIVE_IDLE
#define KEEPALIVE_INTERVAL  CONFIG_KEEPALIVE_INTERVAL
#define KEEPALIVE_COUNT     CONFIG_KEEPALIVE_COUNT

void init_socket();
