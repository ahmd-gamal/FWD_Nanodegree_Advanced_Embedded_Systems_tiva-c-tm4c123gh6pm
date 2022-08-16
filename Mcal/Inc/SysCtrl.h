/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCrtl.h
 *       Module:  SysCrtl
 *
 *  Description:  header file for SysCrtl Module    
 *  
 *********************************************************************************************************************/
#ifndef SYSCrtl_H
#define SYSCrtl_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "SysCtrl_Cfg.h"
#include "MCU_HW.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
 
/******************************************************************************
* \Syntax          : void SysCrtl_Init(void)                                     
* \Description     : initialize System Control Module by parsing the Configuration 
*                    into RCC register                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SysCrtl_Init(void);
 
#endif  /* SysCrtl_H */

/**********************************************************************************************************************
 *  END OF FILE: SysCrtl.h
 *********************************************************************************************************************/