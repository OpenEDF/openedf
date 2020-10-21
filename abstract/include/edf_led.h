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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __EDF_LED__H__
#define __EDF_LED__H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup LED_Driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
#define LED_NAME_MAX_SIZE   32
/*
 * ENUM : @led_brightness.
 */
typedef enum {
	LED_OFF		= 0,
	LED_FAINT	= 64,
	LED_HALF	= 127,
	LED_FULL	= 255,
} led_brightness;

/*
 * ENUM : @led_color.
 */
typedef enum {
    RED	= 0,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    WHITE,
} led_color;

/*
 * ENUM : @led_status.
 */
typedef enum {
    MONOCHROME = 0,
    TWOCOLOR,
    RGB,
    WS2812B,
} led_type;

/*
 * ENUM : @led_status.
 */
typedef enum {
    CLOSE = 0,
    OPEN,
    TOGGLE,
} led_status;

/*
 * ENUM : @blink_delay (ms).
 */
typedef enum {
    FASTEST     = 200,
    FAST        = 500,
    MEDIUM      = 1000,
    SLOW        = 2000,
} blink_delay;

/*
 * STRUCT : @led_config.
 */
typedef struct {
    led_brightness  brightness;
    led_color       color;
    led_type        type;
    led_status      status;
    blink_delay     delay;
}led_config;

/*
 * STRUCT : @led_operation.
 */
typedef struct {
    void (* hardware_init)(led_dev *dev);
    void (* led_set_status)(led_dev *dev, led_status status);
    void (* led_set_brightness)(led_dev *dev, led_brightness brightness);
    void (* led_set_color)(led_dev *dev, led_color color);

    /* must operation in timer handler or loop */
    void (* led_set_blink)(led_dev *dev, blink_delay delay_on, blink_delay delay_off);

    char *(* led_get_status)(led_dev *dev);
    led_brightness (* led_get_brightness)(led_dev *dev);
    led_color (* led_get_color)(led_dev *dev);
}led_operation;

/*
 * STRUCT : @led_dev.
 */
typedef struct {
    const char        name[LED_NAME_MAX_SIZE]; /* Device identity */
    led_config        config;    /* Devicde initial configuration */
    led_operation     operation; /* Function pointer for device operation */
    void              *priv;     /* Device private data */
}led_dev;

/* Exported functions --------------------------------------------------------*/
/*
* Functions to be implemented by the underlying specific hardware platform.
* These functions will be remove.
*/
//void hardware_init(led_dev *dev);
//void led_set_status(led_dev *dev, led_status status);
//void led_set_brightness(led_dev *dev, led_brightness brightness);
//void led_set_color(led_dev *dev, led_color color);
//void led_set_blink(led_dev *dev, blink_delay delay_on, blink_delay delay_off);
//char *led_get_status(led_dev *dev);
//led_brightness led_get_brightness(led_dev *dev);
//led_color led_get_color(led_dev *dev);

#ifdef __cplusplus
}
#endif

#endif  /*__EDF_LED__H__*/

/**
  * @}
  */

/**
  * @}
  */

/***************************** END OF FILE *************************************/