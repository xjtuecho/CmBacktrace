/*
 * This file is part of the CmBacktrace Library.
 *
 * Copyright (c) 2016, Armink, <armink.ztl@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Function: It is the configure head file for this library.
 * Created on: 2016-12-15
 */

#ifndef _CMB_CFG_H_
#define _CMB_CFG_H_

/*
  printf, must config by user.
  printf  : stdio.h
  xprintf : http://elm-chan.org/fsw/strf/xprintf.html,
  we rewrite 'fputc' to retarget the C library printf function to the USART
  int fputc(int ch, FILE *f){
    if('\n' == ch)
      USART_SendByte('\r');
    USART_SendByte(ch);
    return ch;
  }
  on Windows, printf function should convert '\n' to '\r\n' automatically.
*/
#define cmb_printf        printf

/* enable bare metal(no OS) platform */
#define CMB_USING_BARE_METAL_PLATFORM

/* enable OS platform */
/* #define CMB_USING_OS_PLATFORM */
/* OS platform type, must config when CMB_USING_OS_PLATFORM is enable 
  CMB_OS_PLATFORM_RTT
  CMB_OS_PLATFORM_UCOSII 
  CMB_OS_PLATFORM_UCOSIII 
  CMB_OS_PLATFORM_FREERTOS 
  CMB_OS_PLATFORM_RTX5
 */
/* #define CMB_OS_PLATFORM_TYPE  CMB_OS_PLATFORM_RTT */

/* cpu platform type, must config by user 
  CMB_CPU_ARM_CORTEX_M0
  CMB_CPU_ARM_CORTEX_M3
  CMB_CPU_ARM_CORTEX_M4
  CMB_CPU_ARM_CORTEX_M7
 */
#define CMB_CPU_PLATFORM_TYPE    CMB_CPU_ARM_CORTEX_M4

/* enable dump stack information */
#define CMB_USING_DUMP_STACK_INFO

#endif /* _CMB_CFG_H_ */
