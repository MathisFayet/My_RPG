/*
** EPITECH PROJECT, 2020
** repository_clean
** File description:
** prototype
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include "structure.h"

/* rpg */
int print_usage(char *binary);
int rpg(char **argv);
int check_env(char **envp);
rpg_t *init_rpg_struct(save_t *save_inf);

/* free */
void free_all(rpg_t *my_rpg);
void free_map_elem(rpg_t *my_rpg);

/* save_inf */
save_t *init_inf_struct(void);
char *get_map_info(char *line);
save_t *create_save_inf(char *filepath);
int write_in_file(rpg_t *my_rpg, int fd);
maps_t *init_maps_struct(void);

/* scenes */
void scenes_management(rpg_t *my_rpg);
void game_scene_manage(rpg_t *my_rpg, scene_t *game);
scene_t *append_list_scene(scene_t **scene, SCENE_TYPE type);
scene_t *empty_list_scene(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_scene(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_start(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_menu(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_settings(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_how_play(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_skin(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_game(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_inventory(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_pause(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_fight(scene_t **scene, SCENE_TYPE type);
scene_t *put_list_loose(scene_t **scene, SCENE_TYPE type);

/* objects */
object_t *create_object(char *filepath, sfVector2f pos, sfIntRect rect);
object_t *empty_list_objects(object_t **objects, OBJS_TYPE type,
    char *filepath);
object_t *put_list_objects(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_char_m(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_char_f(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_poke1(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_poke2(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_poke3(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_player(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_poke1(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_poke2(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_poke3(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem1(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem2(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem3(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem4(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem5(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem6(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem7(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem8(object_t **objects, OBJS_TYPE type, char *filepath);
object_t *put_list_f_enem9(object_t **objects, OBJS_TYPE type, char *filepath);

/* buttons */
buttons_t *put_list_buttons(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *empty_list_buttons(buttons_t **butt, sfVector2f pos, sfVector2f s);
buttons_t *append_list_buttons(buttons_t **butt, sfVector2f pos, sfVector2f s);
buttons_t *put_list_menu_play(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_menu_quit(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_menu_how_play(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_menu_settings(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_settings_quit(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_settings_mute(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_settings_more(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_settings_less(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_settings_interact(buttons_t **butt, BUTT_TYPE type,
    char *str);
buttons_t *put_list_f_attack(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_f_leave(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_m(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_f(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_poke1(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_poke2(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_poke3(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_skin_confirm(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_pause_resume(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_pause_save(buttons_t **butt, BUTT_TYPE type, char *str);
buttons_t *put_list_pause_main_menu(buttons_t **butt, BUTT_TYPE t, char *str);
buttons_t *put_list_pause_exit(buttons_t **butt, BUTT_TYPE t, char *str);
buttons_t *create_button(sfVector2f position, sfVector2f size);
int button_is_clicked(buttons_t *butt, sfMouseButtonEvent mouse);

/* buttons_callback */
void menu_launch_game(struct s_rpg *my_rpg);
void menu_settings(struct s_rpg *my_rpg);
void menu_how_play(struct s_rpg *my_rpg);
void quit_game(struct s_rpg *my_rpg);
void settings_quit(struct s_rpg *my_rpg);
void settings_mute(struct s_rpg *my_rpg);
void settings_more(struct s_rpg *my_rpg);
void settings_less(struct s_rpg *my_rpg);
void interact_key(struct s_rpg *my_rpg);
void attack(struct s_rpg *my_rpg);
void leave_fight(struct s_rpg *my_rpg);
void skin_m(struct s_rpg *my_rpg);
void skin_f(struct s_rpg *my_rpg);
void skin_poke1(struct s_rpg *my_rpg);
void skin_poke2(struct s_rpg *my_rpg);
void skin_poke3(struct s_rpg *my_rpg);
void skin_confirm(struct s_rpg *my_rpg);
void save_game(struct s_rpg *my_rpg);
void buttons_mouse_click(rpg_t *my_rpg, scene_t *scene, sfEvent event);

/* texts */
sfText *create_text(char *str, sfVector2f position, sfVector2f size);
texts_t *create_new_text_str(char *str, int value, sfVector2f pos);
void update_texts_elements(rpg_t *my_rpg, scene_t *scene);
texts_t *put_empty_list_texts(texts_t **list, char *str, int value,
    TEXTS_t type);
texts_t *put_list_texts(texts_t **list, char *str, int value, TEXTS_t type);
texts_t *put_list_texts_main_life(texts_t **, char *str, int value, TEXTS_t);
texts_t *put_list_texts_other_life(texts_t **, char *str, int value, TEXTS_t);
texts_t *put_list_texts_main_name(texts_t **, char *str, int value, TEXTS_t);
texts_t *put_list_texts_other_name(texts_t **, char *str, int value, TEXTS_t);

/* sounds */
sfMusic *create_sound(const char *filepath, int loop, int volume);
void change_music_volume(rpg_t *my_rpg, int volume);
void play_scene_music(rpg_t *my_rpg, SCENE_TYPE type);
void stop_scene_music(rpg_t *my_rpg, SCENE_TYPE type);

/* events */
void analyse_events(rpg_t *my_rpg, sfEvent event);
int interaction_event(rpg_t *my_rpg);
void change_interact_key(rpg_t *my_rpg, sfEvent event);

/* mouse */
int check_mouse_position(rpg_t *my_rpg);
void check_mouse_click(rpg_t *my_rpg, sfEvent event);

/* parsing_file */
int open_dir_fight(l_map_t **map);
int open_dir_room(l_map_t **map);
char *add_string(char *str, char *suit);
char *open_map(char *av);
int add_to_linked(char *name, MAP_TYPE type, l_map_t **map, char *size);
l_map_t *my_put_in_list(l_map_t **list, char *name, MAP_TYPE type, char **map);

/* map_elements */
void create_new_map(rpg_t *my_rpg, scene_t *scene);
elem_map_t *create_element(char *filepath, sfVector2f pos, sfIntRect rect);
elem_map_t *empty_list_elements(elem_map_t **elements, ELEM_MAP_TYPE type,
    sfVector2f pos, char *filepath);
int put_map_elements(char **map, elem_map_t **elements);
void draw_map_element(rpg_t *my_rpg, scene_t *game);
void change_actual_map(rpg_t *my_rpg, char *old_name, MAP_TYPE type);

/* map_ptr_func */
elem_map_t *way(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *tree(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *bush(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *end(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *ennemy(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *fight(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *house(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *objet(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *poke_leg(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *poke(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *potion(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *rock(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *sand(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *start(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *wall(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);
elem_map_t *water(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos);

/* player */
player_t *init_player_struct(void);
void draw_player(rpg_t *my_rpg, scene_t *game);
int create_new_player(rpg_t *my_rpg, scene_t *game);
void player_management(rpg_t *my_rpg, scene_t *game);
void update_position(rpg_t *my_rpg, scene_t *game);
int reset_rect_player(rpg_t *my_rpg);
int move_player(rpg_t *my_rpg, int direction);
int create_animation_player(rpg_t *my_rpg);
int player_on_finish(rpg_t *my_rpg);
int player_go_fight(rpg_t *my_rpg);
int is_in_bush(rpg_t *my_rpg);
void create_main_pokemon(rpg_t *my_rpg);
void create_enemy_pokemon(rpg_t *my_rpg);
void check_life_pokemon(rpg_t *my_rpg);

/* view */
void view_on_player(rpg_t *my_rpg);
void reset_view_menu(rpg_t *my_rpg);

/* utils */
int my_strlen(const char *str);
int my_putstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int max);
int my_getnbr(char const *str);
char **my_str_to_word_array(const char *str, char delimiter);
sfRenderWindow *create_window(unsigned int width, unsigned int height);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char *src);
char *my_strcpy(char *dest, char *src);
char *my_revstr(char *str);
char *convert_to_str(int nb);
int is_same_rect(sfIntRect rect, sfIntRect other_rect);
int is_in_rect(sfVector2f object, sfIntRect rect);
sfVector2f create_vector(int x, int y);
sfIntRect create_rect(int left, int top, int width, int height);

/* liste chaine inventory and inventory */
int creat_inventory(rpg_t *rpg, invent_t **invent);
invent_t *ad_node(invent_t **list, INVENTORY type, trans_t *trans);
invent_t *ad_first_node(invent_t **list, INVENTORY type, trans_t *trans);
invent_t *my_put_list(invent_t **list, INVENTORY type, trans_t *trans);
invent_t * add_potion(invent_t *inv, INVENTORY type);
invent_t * add_objet(invent_t *inv, INVENTORY type);
invent_t * add_pok(invent_t *inv, INVENTORY type);
invent_t *add_to_invent(invent_t *invent, INVENTORY type, rpg_t *rpg);
trans_t *add_trans(sfIntRect rect, sfVector2f pos);
void add_other_element(int nb, sfIntRect rect, INVENTORY type,
                    invent_t *invent);
void display_inventory(invent_t **ivent, rpg_t *my_rpg, scene_t *scene);
invent_t *add_charact_poke(rpg_t *rpg, invent_t **invent);
void free_invent(rpg_t *my_rpg);
invent_t *my_puts_list(invent_t **list, INVENTORY type, trans_t *trans);
fight_t *init_strcut(rpg_t *rpg);

/* print quete*/
void print_objectf(rpg_t *rpg);

#endif /* PROTOTYPE_H_*/
