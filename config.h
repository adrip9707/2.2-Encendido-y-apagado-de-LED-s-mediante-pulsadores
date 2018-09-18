// CONFIG1
# pragma config FEXTOSC = OFF     // Bits de selección del modo del oscilador externo (Oscilador no habilitado)
# pragma config RSTOSC = HFINTPLL
# pragma config CLKOUTEN = OFF    // Clock Out Habilita el bit (la función CLKOUT está deshabilitada; función i / o u oscilador en OSC2)
# pragma config CSWEN = ON        // Clock Switch Habilite el bit (se permite escribir en NOSC y NDIV)
# pragma config FCMEN = ON        // Fail-Safe Clock Monitor Habilite el bit (temporizador FSCM habilitado)

// CONFIG2
# pragma config MCLRE = ON        // Master Clear Enable bit (el pin MCLR es la función Master Clear)
# pragma config PWRTE = ON        // Bit de activación del temporizador de encendido (PWRT habilitado)
# pragma config LPBOREN = OFF     // Bit de habilitación BOR de baja potencia (ULPBOR desactivado)
# configuración de pragma BOREN = ON // Bit de habilitación de restablecimiento de cancelación de        Brown-out (Habilitado el restablecimiento de salida de Browning, se ignora el bit de SBOREN)
# pragma config BORV = LO         // Brown-out Restablecer selección de voltaje (Voltaje de reinicio de salida de marrón (VBOR) ajustado a 1.9V en LF y 2.45V en Dispositivos F)
# pragma config ZCD = OFF // Detección de         cero-cross desactiva (El circuito de detección de cruce cero está desactivado en POR).
# pragma config PPS1WAY = ON // Periférico Perno      Seleccione control de un solo sentido (El bit PPSLOCK se puede borrar y configurar solo una vez en el software)
# pragma config STVREN = ON       // Desbordamiento de pila / Reinicio por defecto Bit de habilitación (Desbordamiento de pila o Desbordamiento provocará un reinicio)

// CONFIG3
# pragma config WDTCPS = WDTCPS_31 // WDT Period Select bits (Divider ratio 1: 65536; control de software de WDTPS)
# pragma config WDTE = OFF        // Modo de funcionamiento WDT (WDT desactivado, SWDTEN se ignora)
# pragma config WDTCWS = WDTCWS_7 // WDT Ventana Seleccionar bits (ventana siempre abierta (100%); control de software; no se requiere acceso por clave)
# pragma config WDTCCS = SC       // Selector de reloj de entrada WDT (Software Control)

// CONFIG4
# pragma config WRT = OFF         // Bits de protección de auto escritura de UserNVM (Protección de escritura desactivada)
# pragma config SCANE = disponible // Bit de habilitación del escáner (el módulo del escáner está disponible para su uso)
# pragma config LVP = ON          // Bit de habilitación de programación de bajo voltaje (programación de bajo voltaje habilitada. La función de pin MCLR / Vpp es MCLR).

// CONFIG5
# pragma config CP = OFF          // UserNVM Program bit de protección de código de memoria (Program Code Memory Code disabled)
# pragma config CPD = OFF         // Bit de protección de código DataNVM (protección de código de EEPROM de datos desactivada)
