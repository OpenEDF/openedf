/**
  ******************************************************************************
  * @file    EDF_Fconfig.h
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
#ifndef __EDF_FCONFIG__H__
#define __EDF_FCONFIG__H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/** @addtogroup EDF_Fconfig Bing and Configuration.
  * @{
  */

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
#define SYSTEM_LED_WORK



/* Exported functions --------------------------------------------------------*/
void System_Fun_Config(void);

#ifdef __cplusplus
}
#endif

#endif  /*__EDF_FCONFIG__H__*/

/**
  * @}
  */

/**
  * @}
  */

/***************************** END OF FILE *************************************/