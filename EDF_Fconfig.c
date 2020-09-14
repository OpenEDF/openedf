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

/* Private function prototypes -----------------------------------------------*/
static void InitLED_Operation(led_operation *opr);

/** @defgroup EDF_Fconfig_Functions
  * @{
  */

/**
  * @function   InitLED_Operation
  * @brief      Configurate the LED for system.
  * @param[in]  led_operation: system LED operation struct.
  * @retval     None.
  */
static void InitLED_Operation(led_operation *opr)
{
    /* function pointer initalization */
    opr->hardware_init = hardware_init;
    opr->led_set_status = led_set_status;
    opr->led_set_brightness = led_set_brightness;
    opr->led_set_color = led_set_color;
    opr->led_set_blink = led_set_blink;
    opr->led_get_status = led_get_status;
    opr->led_get_brightness = led_get_brightness;
    opr->led_get_color = led_get_color;
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
    InitLED_Operation();

#endif

}

/**
  * @}
  */

/**
  * @}
  */

/***************************** END OF FILE *************************************/