#ifndef BEEBJIT_SOUND_H
#define BEEBJIT_SOUND_H

struct sound_struct;

struct sound_struct* sound_create();
void sound_destroy(struct sound_struct* p_sound);
void sound_start_playing(struct sound_struct* p_sound);

void sound_apply_write_bit_and_data(struct sound_struct* p_sound,
                                    int write,
                                    unsigned char data);

#endif /* BEEBJIT_SOUND_H */