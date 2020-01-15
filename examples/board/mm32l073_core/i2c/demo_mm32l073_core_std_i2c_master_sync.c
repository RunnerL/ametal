/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/
/**
 * \file
 * \brief I2C �������� EEPROM ���̣�ͨ��ͬ����׼�ӿ�ʵ��
 *
 * - �������裺
 *   1. PIOB_6 �������� EEPROM �� SCL ���ţ�
 *   2. PIOB_7 �������� EEPROM �� SDA ���š�
 *
 * - ʵ������
 *   1. ����д��ַ�����ݵ��ӻ���
 *   2. �������մӻ����ݣ���ͨ�����ڴ�ӡ������
 *   3. ����д������ݺͽ��յ��Ĵӻ��ӻ�����һ�£�
 *   4. LED0 �� 200ms ʱ������˸��
 *
 * \note
 *    1. LED0 ��Ҫ�̽� J9 ����ñ�����ܱ� PIOB_1 ���ƣ�
 *    2. ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_9 �������� PC ���ڵ� RXD��
 *    3. ��ǰ I2C �� SCL ����ʹ�õ��� PIOB_6��SDA ����ʹ�õ��� PIOB_7��
 *       �ɸ���ʵ������������š�
 *
 * \par Դ����
 * \snippet demo_mm32l073_core_std_i2c_master_sync.c src_mm32l073_core_std_i2c_master_sync
 *
 * \internal
 * \par Modification history
 * - 1.00  17-04-24  sdy, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_mm32l073_core_std_i2c_master_sync
 * \copydoc demo_mm32l073_core_std_i2c_master_sync.c
 */

/** [src_mm32l073_core_std_i2c_master_sync] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_mm32l073_inst_init.h"
#include "demo_std_entries.h"
#include "demo_mm32l073_core_entries.h"

#define EEPROM_ADDR 0x50 /**< \brief EEPROM �豸�ĵ�ַ */
#define TEST_LEN    8    /**< \brief ���� EEPROM ��ҳ��С */

/**
 * \brief �������
 */
void demo_mm32l073_core_std_i2c_master_sync_entry (void)
{
    AM_DBG_INFO("demo mm32l073_core std i2c master sync!\r\n");

    demo_std_i2c_master_sync_entry(am_mm32l073_i2c1_inst_init(),
                                   EEPROM_ADDR,
                                   TEST_LEN);
}
/** [src_mm32l073_core_std_i2c_master_sync] */

/* end of file */