/*
 *  Copyright (C) 2008-2016 Marvell International Ltd.
 *  All Rights Reserved.
 */
/*
 * Hello World Application
 *
 * Summary:
 *
 * Prints Hello World every 5 seconds on the serial console.
 * The serial console is set on UART-0.
 *
 * A serial terminal program like HyperTerminal, putty, or
 * minicom can be used to see the program output.
 */
#include <wmstdio.h>
#include <wm_os.h>


/*
 * The application entry point is main(). At this point, minimal
 * initialization of the hardware is done, and also the RTOS is
 * initialized.
 */
int main(void)
{
	int count = 0;

	/* Initialize console on uart0 */
	wmstdio_init(UART0_ID, 0);

	wmprintf("Hello World application Started\n");
	
	wmprintf("This is Natasha\n");

	while (1) {
		count++;
		wmprintf("Hello Marvell: iteration %d\r\n", count);

		/* Sleep  5 seconds */
		os_thread_sleep(os_msec_to_ticks(5000));
	}
	return 0;
}
