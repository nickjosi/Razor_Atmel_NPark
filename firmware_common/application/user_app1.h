/*!*********************************************************************************************************************
@file user_app1.h                                                                
@brief Header file for user_app1

----------------------------------------------------------------------------------------------------------------------
To start a new task using this user_app1 as a template:
1. Follow the instructions at the top of user_app1.c
2. Use ctrl-h to find and replace all instances of "user_app1" with "yournewtaskname"
3. Use ctrl-h to find and replace all instances of "UserApp1" with "YourNewTaskName"
4. Use ctrl-h to find and replace all instances of "USER_APP1" with "YOUR_NEW_TASK_NAME"
5. Add #include yournewtaskname.h" to configuration.h
6. Add/update any special configurations required in configuration.h (e.g. peripheral assignment and setup values)
7. Delete this text (between the dashed lines)
----------------------------------------------------------------------------------------------------------------------

**********************************************************************************************************************/

#ifndef __USER_APP1_H
#define __USER_APP1_H

/**********************************************************************************************************************
Type Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Function Declarations
**********************************************************************************************************************/

/*------------------------------------------------------------------------------------------------------------------*/
/*! @publicsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------------------------------------------*/
/*! @protectedsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/
void UserApp1Initialize(void);
void UserApp1RunActiveState(void);


/*------------------------------------------------------------------------------------------------------------------*/
/*! @privatesection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/


/***********************************************************************************************************************
State Machine Declarations
***********************************************************************************************************************/
static void UserApp1SM_AntConfigureSlave1(void);
static void UserApp1SM_AntConfigureSlave2(void);
static void UserApp1SM_AntConfigureSlave3(void);
static void UserApp1SM_AntConfigureSlave4(void);
static void UserApp1SM_OpeningChannels(void);
static void UserApp1SM_ClosingChannels(void);
static void UserApp1SM_RadioActive(void);

static void UserApp1SM_Idle(void);    
static void UserApp1SM_Error(void);         


/**********************************************************************************************************************
Constants / Definitions
**********************************************************************************************************************/
#define SEEKER          (u8)0
#define RUNNER_1        (u8)1
#define RUNNER_2        (u8)2
#define RUNNER_3        (u8)3

/* Board name maximum 8 characters
                        "12345678" */
#define NAME_SEEKER     "Seeker"
#define NAME_RUNNER_1   "Runner 1"
#define NAME_RUNNER_2   "Runner 2"
#define NAME_RUNNER_3   "Runner 3"

#define DEVICE_ID_HI_1  (u8)0x88
#define DEVICE_ID_LO_1  (u8)0x88

#define DEVICE_ID_HI_2  (u8)0x25  
#define DEVICE_ID_LO_2  (u8)0x19

#define DEVICE_ID_HI_3  (u8)0x11
#define DEVICE_ID_LO_3  (u8)0x17
                          
#define DEVICE_ID_HI_4  (u8)0x83
#define DEVICE_ID_LO_4  (u8)0x12

#define B0              (u8)0
#define B1              (u8)1
#define B2              (u8)2
#define B3              (u8)3


#define INDEX_MASTER_DBM           (u8)2                    /*!< @brief Position in au8LcdInformationMessage to write the Master's RSSI level */
#define INDEX_SLAVE_DBM            (u8)13                   /*!< @brief Position in au8LcdInformationMessage to write the Slave's RSSI level */
#define ADDRESS_LCD_SLAVE_NAME     (u8)(LINE2_END_ADDR - 8) /*!< @brief LCD address where to write Slave's name */

#define ALLOWED_MISSED_MESSAGES    (u32)8                   /*!< @brief Number of message cycles allowed before the Master decides no Slave is listening */

#define DBM_LEVEL1          (s8)-99
#define DBM_LEVEL2          (s8)-84
#define DBM_LEVEL3          (s8)-76
#define DBM_LEVEL4          (s8)-69
#define DBM_LEVEL5          (s8)-63
#define DBM_LEVEL6          (s8)-58
#define DBM_LEVEL7          (s8)-54
#define DBM_LEVEL8          (s8)-51
#define DBM_MAX_LEVEL       DBM_LEVEL8
#define NUM_DBM_LEVELS      (u8)8

#define EIE_DEVICE_TYPE     (u8)50
#define EIE_TRANS_TYPE      (u8)50
#define FOO                 (u8)0x88
#define BAR                 (u8)0x88



#endif /* __USER_APP1_H */
/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
