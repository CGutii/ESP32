#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO_PIN GPIO_NUM_8

void app_main(void)
{
    esp_rom_gpio_pad_select_gpio(LED_GPIO_PIN);
    //gpio_set_direction(LED_GPIO_PIN, GPIO_MODE_OUTPUT);
    esp_rom_gpio_pad_select_gpio(LED_GPIO_PIN);

    while (1) 
    {
        gpio_set_level(LED_GPIO_PIN, 1);   // Turn on the LED
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay for a second (optional)

        gpio_set_level(LED_GPIO_PIN, 0);   // Turn off the LED (optional)
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay for a second (optional)
    }
}
