#include "mbed.h"
#include "LSM9DS1.h"

DigitalOut led1(LED1);
//I2C i2c(I2C_SCL,I2C_SDA);
I2C i2c(I2C_SDA, I2C_SCL);

//Timer timer;

Serial pc(SERIAL_TX, SERIAL_RX);

int main()
{
  // int x = 0;
  //   int y = 0;
  //   int z = 0;
	   //smeAccelerometer.begin();
    /*Info system clock*/
    //pc.printf("\n\rSystemCoreClock=%d\r\n",SystemCoreClock);
    pc.printf("\n\r SystemCoreClock=\r\n");
    while(1)
    {
      // x = smeAccelerometer.readX();
      // y = smeAccelerometer.readY();
      // z = smeAccelerometer.readZ();

      //pc.printf("\n\rSystemCoreClock=%d\r\n",SystemCoreClock);
      // S
      /*to main retention, otherwise thread will be died*/
      /*don't leave empty */
      pc.printf("\n\r SystemCoreClock=\r\n");
      led1 = 1;
      wait(0.2);
      led1 = 0;
      wait(0.2);
    }

      return 0;
}
