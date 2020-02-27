#include "wrapper.h"

extern "C" {
void set_vars(libenv_venv *env, char *name, int value) {
    auto venv = (VecGame *)(env);
    auto &game = venv->games[0];
    game->reset();
    // printf("%d",game->reset);
    // if( *typeid(venv->num_envs).name() == 'i'){
    //     int value_i = (int) value;
    //     printf("Changing %s from %d to %d", name, venv->num_envs, value_i);
    //     venv->num_envs = value_i;
    // }
    // if( "" == 'i'){
    //     int value_f = (float) value;
    //     printf("Changing %s from %f to %f", name, venv->num_envs, value_f);
    //     venv->num_envs = value_f;
    // }
    

    
}
}
