/*
 * conf_tcc.h
 *
 * Created: 06/03/2018 13:11:07
 *  Author: Alberto
 */ 


#ifndef CONF_TCC_H_
#define CONF_TCC_H_


/** PWM module to use */
#define CONF_PWM0_MODULE		TCC0
#define CONF_PWM2_MODULE		TCC2
/** PWM channel */
#define CONF_PWM0_CHANNEL_0     0
#define CONF_PWM0_CHANNEL_1     1
#define CONF_PWM0_CHANNEL_2     2
#define CONF_PWM0_CHANNEL_3     3
/** PWM output */
#define CONF_PWM0_OUTPUT_0		0
#define CONF_PWM0_OUTPUT_1		1
#define CONF_PWM0_OUTPUT_2		2
#define CONF_PWM0_OUTPUT_3		3
#define CONF_PWM0_OUTPUT_4		4
#define CONF_PWM0_OUTPUT_5		5
#define CONF_PWM0_OUTPUT_6		6
#define CONF_PWM0_OUTPUT_7		7
/** PWM output pin */
#define CONF_PWM0_OUT_PIN_0		PIN_PA04E_TCC0_WO0
#define CONF_PWM0_OUT_PIN_1		PIN_PA05E_TCC0_WO1
#define CONF_PWM0_OUT_PIN_2		PIN_PA10F_TCC0_WO2
#define CONF_PWM0_OUT_PIN_3		PIN_PA11F_TCC0_WO3
#define CONF_PWM0_OUT_PIN_4		PIN_PB10F_TCC0_WO4
#define CONF_PWM0_OUT_PIN_5		PIN_PB11F_TCC0_WO5
#define CONF_PWM0_OUT_PIN_6		PIN_PB12F_TCC0_WO6
#define CONF_PWM0_OUT_PIN_7		PIN_PB13F_TCC0_WO7

/** PWM output pinmux */
#define CONF_PWM0_OUT_MUX_0		MUX_PA04E_TCC0_WO0
#define CONF_PWM0_OUT_MUX_1		MUX_PA05E_TCC0_WO1
#define CONF_PWM0_OUT_MUX_2		MUX_PA10F_TCC0_WO2
#define CONF_PWM0_OUT_MUX_3		MUX_PA11F_TCC0_WO3
#define CONF_PWM0_OUT_MUX_4		MUX_PB10F_TCC0_WO4
#define CONF_PWM0_OUT_MUX_5		MUX_PB11F_TCC0_WO5
#define CONF_PWM0_OUT_MUX_6		MUX_PB12F_TCC0_WO6
#define CONF_PWM0_OUT_MUX_7		MUX_PB13F_TCC0_WO7


/** PWM module to use */
#define CONF_PWM2_MODULE		TCC2
/** PWM channel */
#define CONF_PWM2_CHANNEL_0		0
#define CONF_PWM2_CHANNEL_1     1
/** PWM output */
#define CONF_PWM2_OUTPUT_0		0
#define CONF_PWM2_OUTPUT_1		1

/** PWM output pin */
#define CONF_PWM2_OUT_PIN_0		PIN_PA12E_TCC2_WO0
//PA13 not connected by default on samd21 xplained pro
#define CONF_PWM2_OUT_PIN_1		PIN_PA13E_TCC2_WO1

/** PWM output pinmux */
#define CONF_PWM2_OUT_MUX_0		MUX_PA12E_TCC2_WO0
#define CONF_PWM2_OUT_MUX_1		MUX_PA13E_TCC2_WO1


#endif /* CONF_TCC_H_ */