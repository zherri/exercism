#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

int ability(void) {
    srand(time(NULL));
    int nums[] = {rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1};

    if (nums[0] <= nums[1] && nums[0] <= nums[2] && nums[0] <= nums[3]) return nums[1] + nums[2] + nums[3];
    if (nums[1] <= nums[0] && nums[1] <= nums[2] && nums[1] <= nums[3]) return nums[0] + nums[2] + nums[3];
    if (nums[2] <= nums[1] && nums[2] <= nums[0] && nums[2] <= nums[3]) return nums[1] + nums[0] + nums[3];
    if (nums[3] <= nums[1] && nums[3] <= nums[2] && nums[3] <= nums[0]) return nums[1] + nums[2] + nums[0];
    return 0;
}

int modifier(int score) {
    return floor(((float)score - 10) / 2);
}

dnd_character_t make_dnd_character(void) {
    int constitution = ability();
    return (dnd_character_t){
        ability(),
        ability(),
        constitution,
        ability(),
        ability(),
        ability(),
        10 + modifier(constitution)
    };
}
