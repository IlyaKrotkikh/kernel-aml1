/**
 * struct rt5621_platform_data - platform-specific RT5621 data
 * @is_hp_unpluged:          HP Detect
 */

#ifndef _RT5621_H_
#define _RT5621_H_

#define	RT5621_I2C_ADDR			(0x1A)
#define	RT5621_I2C_NAME			"rt5621"

struct rt5621_platform_data {
	int (*rt5621_mute_hp)(void);
	int (*rt5621_unmute_hp)(void);
    int (*is_hp_pluged)(void);
    void (*mute_func)(int flag);
};

#endif
