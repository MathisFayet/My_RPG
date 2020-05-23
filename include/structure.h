/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** structure
*/

#ifndef STRUCTURE_H_
#define STRUCTURE_H_

/* OBJECTS */
typedef enum OBJS_TYPE
{
    O_BACKGROUND,
    O_BIG_SKIN_M,
    O_BIG_SKIN_F,
    O_BIG_POKE1,
    O_BIG_POKE2,
    O_BIG_POKE3,
    O_PLAYER,
    O_F_POKE1,
    O_F_POKE2,
    O_F_POKE3,
    O_ENEMY1,
    O_ENEMY2,
    O_ENEMY3,
    O_ENEMY4,
    O_ENEMY5,
    O_ENEMY6,
    O_ENEMY7,
    O_ENEMY8,
    O_ENEMY9
} OBJS_TYPE;

typedef struct s_object
{
    OBJS_TYPE type;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f position;
    struct s_object *next;
} object_t;

/* BUTTONS */
typedef enum BUTT_TYPE
{
    B_M_GAME,
    B_M_SETTINGS,
    B_M_HOW_PLAY,
    B_M_QUIT,
    B_S_QUIT,
    B_SKIN_M,
    B_SKIN_F,
    B_SKIN_POKE1,
    B_SKIN_POKE2,
    B_SKIN_POKE3,
    B_SKIN_CONFIRM,
    B_P_RESUME,
    B_P_SAVE,
    B_P_MENU,
    B_P_EXIT,
    B_S_MUTE,
    B_S_MORE,
    B_S_LESS,
    B_S_INTE,
    B_F_ATTACK,
    B_F_LEAVE
} BUTT_TYPE;

struct s_rpg;
typedef struct s_buttons
{
    BUTT_TYPE type;
    sfRectangleShape *rect;
    sfText *text;
    int display;
    void (*callback)(struct s_rpg *);
    struct s_buttons *next;
} buttons_t;

/* TEXTS */
typedef enum TYPE_TEXTS
{
    MAIN_LIFE,
    OTHER_LIFE,
    MAIN_NAME,
    OTHER_NAME
} TEXTS_t;

typedef struct s_texts
{
    TEXTS_t type;
    sfText *text;
    char *str;
    int value;
    sfClock *clock;
    sfTime time;
    struct s_texts *next;
} texts_t;

/* SCENES */
typedef enum SCENE_TYPE
{
    S_START,
    S_MENU,
    S_SETTINGS,
    S_HOW_PLAY,
    S_SKIN,
    S_GAME,
    S_INVENTORY,
    S_PAUSE,
    S_FIGHT,
    S_LOOSE
} SCENE_TYPE;

typedef struct s_scene
{
    SCENE_TYPE type;
    object_t *objects;
    buttons_t *buttons;
    texts_t *texts;
    sfMusic *main_music;
    struct s_scene *next;
} scene_t;

/* WINDOW */
typedef struct s_g_window
{
    int volume;
    int choose_int;
    sfMusic *click;
    sfMusic *inventory;
    sfMusic *item;
    sfMusic *fight;
    sfMusic *reward;
    sfRenderWindow *window;
    int width;
    int height;
    sfView *view;
} window_t;

/* CLOCK AND TIME */
typedef struct s_cl_time
{
    sfClock *clock;
    sfTime time;
} cl_time_t;

/* SAVE INFOS */
typedef struct s_save
{
    int character;
    int main_pokemon;
    char *map;
    int interact;
} save_t;

/* MAP ELEMENTS */
typedef enum ELEM_MAP_TYPE
{
    WAY,
    TREE
} ELEM_MAP_TYPE;

typedef struct s_elem_map
{
    ELEM_MAP_TYPE type;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f position;
    sfVector2f scale;
    struct s_elem_map *next;
} elem_map_t;

/* MAP */
typedef enum MAP_TYPE
{
    BASIC_MAP,
    FIGHT_MAP
} MAP_TYPE;

typedef struct s_l_map
{
    MAP_TYPE type;
    char *name;
    char **map;
    struct s_l_map *next;
} l_map_t;

typedef struct s_maps
{
    cl_time_t in_bush;
    l_map_t *list_maps;
    l_map_t *actual_map;
    elem_map_t *elem_map;
} maps_t;

/* PLAYER */
typedef struct s_player
{
    int in_move;
    int react;
    int x;
    int y;
    object_t *o_player;
    sfVector2f pos;
    cl_time_t move;
    cl_time_t anim;
} player_t;

/* INVENTORY */
typedef enum INVENTORY
{
    WINDOW,
    POTION,
    POKEMAN,
    POKEMAN_LEG,
    CHARACTERE,
    OBJET
} INVENTORY;

typedef struct s_inventory
{
    INVENTORY type;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f position;
    struct s_inventory *next;
} invent_t;

typedef struct s_trans
{
    char *file;
    sfIntRect rect;
    sfVector2f position;
} trans_t;

typedef struct s_text
{
    int verif;
    int verif_t;
    char *name;
    int size;
    sfVector2f pos;
    sfFont *font;
    sfText *text;
} text_t;

typedef struct s_fight
{
    int win_loose;
    int life_me;
    int life_adv;
    sfMusic *attack;
} fight_t;

/* RPG MAIN STRUCT */
typedef struct s_rpg
{
    int game_instance;
    window_t *window;
    save_t *saved_inf;
    scene_t *scenes;
    maps_t *maps;
    text_t *text;
    fight_t *fight;
    player_t *player;
    invent_t *invent;
} rpg_t;

#endif /* !STRUCTURE_H_ */