/**
  ******************************************************************************
  * @file    edf_led.h
  * @author  Macro <makermuyi@gmail.com>
  * @version V1.0.0
  * @date    14-September-2020
  * @brief   This file contains all of the functions prototypes and type for led
  *          abstract operation.
  ******************************************************************************
  * @attention
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "EDF_Fconfig.h"
#include "edf_led.h"

/** @addtogroup EDF_Fconfig Bing and Configuration.
  * @{
  */

/** @defgroup EDF_Fconfig
  * @brief DF_Fconfig Bing and Configuration.
  * @{
  */

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
#ifdef SYSTEM_LED_WORK
  led_dev led;
#ednif

/* Private function prototypes -----------------------------------------------*/
static void CreateLED_dev(void);

/** @defgroup EDF_Fconfig_Functions
  * @{
  */

/**
  * @function   CreateLED_dev
  * @brief      create the LED for system.
  * @param[in]  led_operation: system LED operation struct.
  * @retval     None.
  */
static void CreateLED_dev(led_dev *led)
{
  /* device name */
  led->name = "wifi_status_led";

  /* device configuration parameters */
  led->config.brightness = LED_OFF;
  led->config.color = RED;
  led->config.type = RGB;
  led->config.status = CLOSE;
  led->config.delay = FASTEST;

  /* function pointer initalization */
  led->operations.hardware_init = hardware_init;
  led->operations.led_set_status = led_set_status;
  led->operations.led_set_brightness = led_set_brightness;
  led->operations.led_set_color = led_set_color;
  led->operations.led_set_blink = led_set_blink;
  led->operations.led_get_status = led_get_status;
  led->operations.led_get_brightness = led_get_brightness;
  led->operations.led_get_color = led_get_color;

  /* device private data */
  led->dev_private = NULL;
}

/**
  * @function   System_Fun_Config
  * @brief      Configurate the system fucntion.
  * @param[in]  None.
  * @retval     None.
  */
void System_Fun_Config(void)
{
    /* config the system LED */
#ifdef SYSTEM_LED_WORK
    CreateLED_dev(&led);

#endif

}

/**
  * @}
  */

/**
  * @}
  */

/***************************** END OF FILE *************************************/