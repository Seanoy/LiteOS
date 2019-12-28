#include "bsp.h"
#include "los_base.h"
#include "los_inspect_entry.h"
#include "los_api_task.h"

void USART_Config(void);
int main(){
    USART_Config();
    /* USER CODE BEGIN 2 */
    if (LOS_OK != LOS_KernelInit())
    {
        return LOS_NOK;
    }

    LOS_Inspect_Entry();
    
    LOS_Start();
    /* USER CODE END 2 */
    while(1);
}
