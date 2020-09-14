/**
  ******************************************************************************
  * @file    edf_err.h
  * @author  Macro <makermuyi@gmail.com>
  * @version V1.0.0
  * @date    14-September-2020
  * @brief   This file contains all of the functions prototypes and type for
  *          system log printf and  operation.
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
#ifndef __EDF_ERR__H__
#define __EDF_ERR__H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup EDF_ERR_Driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/
typedef int32_t edf_err_t;

/* Exported constants --------------------------------------------------------*/
#define EDF_OK      0    /* edf_err_t value indicating success (no error) */
#define EDF_FAIL    -1   /* Generic esp_err_t code indicating failure */

/* Exported functions --------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif  /*__EDF_ERR__H__*/

/**
  * @}
  */

/**
  * @}
  */

/***************************** END OF FILE *************************************/