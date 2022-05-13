int main() {
   stdio_init_all();
   printf("ADC Example, measuring GPIO26\n");

   adc_init();

   adc_gpio_init(26);
   adc_select_input(0);
   
   float rAux = 10000;
   float vcc = 3.3:
   float beta = 3977.0;
   float temp0 = 298.0;
   float r0 = 10000;

   while (1) {}
   
   vm= (vcc / 4095)*( analogRead(0) );
   rntcc = rAux / ((vcc/vm)-1);
   temperaturaK = beta/(log(rntc/r0) + (beta/temp0));
   temperaturaC = (temperaturaK - 273)
    printf("Raw value: 0x%03x, voltage: %2f temperatura: V\n", result, result * conversion_factor, result * conversion factor /0.01);
    sleep_ms(500);
 }
}