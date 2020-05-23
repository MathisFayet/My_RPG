##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC				= 	gcc

SRC				=	src/main.c 							\
					src/usage.c							\
					src/save_inf.c 						\
					src/get_map_info.c 					\
					src/save_game.c 					\
					src/env.c 							\
					src/struct_rpg.c 					\
					src/rpg.c							\
					src/list_scene.c 					\
					src/scenes_utils.c 					\
					src/game_scene.c 					\
					src/scenes.c 						\
					src/scenes2.c 						\
					src/scenes3.c 						\
					src/list_objects.c 					\
					src/create_objects.c 				\
					src/objects.c 						\
					src/objects2.c 						\
					src/objects3.c 						\
					src/objects4.c 						\
					src/list_map.c 						\
					src/new_map.c 						\
					src/actual_map.c 					\
					src/parsing_map/elements.c 			\
					src/struct_player.c 				\
					src/new_player.c 					\
					src/create_pokemon.c 				\
					src/player_pos.c 					\
					src/move_player.c 					\
					src/animation.c 					\
					src/player_finish.c 				\
					src/go_fight.c						\
					src/in_bush.c						\
					src/view.c 							\
					src/init_maps_struct.c 				\
					src/win_loose.c 					\
					src/list_texts.c 					\
					src/texts.c 						\
					src/update_texts.c 					\
					src/sounds.c 						\
					src/buttons/list_buttons.c 			\
					src/buttons/create_button.c 		\
					src/buttons/buttons.c 				\
					src/buttons/buttons2.c 				\
					src/buttons/buttons3.c 				\
					src/buttons/buttons4.c 				\
					src/buttons/buttons5.c 				\
					src/buttons/buttons_callback.c 		\
					src/buttons/buttons_callback2.c 	\
					src/buttons/buttons_callback3.c 	\
					src/buttons/buttons_callback4.c 	\
					src/menu_mouse_click.c 				\
					src/buttons/button_is_clicked.c		\
					src/create_text.c 					\
					src/events.c 						\
					src/mouse.c 						\
					src/interaction.c 					\
					src/free.c 							\
					src/free_map_elem.c 				\
					src/parsing_map/add_node.c			\
					src/parsing_map/open_read.c			\
					src/parsing_map/parsing_map.c		\
					src/parsing_map/open_dir.c			\
					src/parsing_map/add_to_link.c		\
					src/parsing_map/bush.c				\
					src/parsing_map/end.c				\
					src/parsing_map/ennemy.c			\
					src/parsing_map/fight.c				\
					src/parsing_map/house.c				\
					src/parsing_map/objet.c				\
					src/parsing_map/poke.c				\
					src/parsing_map/poke_leg.c			\
					src/parsing_map/potion.c			\
					src/parsing_map/rock.c				\
					src/parsing_map/sand.c				\
					src/parsing_map/start.c				\
					src/parsing_map/wall.c				\
					src/parsing_map/water.c				\
					src/utils/window.c					\
					src/utils/my_strlen.c 				\
					src/utils/my_strcat.c 				\
					src/utils/my_putstr.c				\
					src/utils/my_strcmp.c				\
					src/utils/my_strncmp.c				\
					src/utils/my_strdup.c				\
					src/utils/my_strcpy.c				\
					src/utils/my_str_to_word_array.c	\
					src/utils/my_getnbr.c				\
					src/utils/my_revstr.c 				\
					src/utils/conv.c					\
					src/utils/rect.c					\
					src/inventory/add_to_invent.c		\
					src/inventory/ad_node.c				\
					src/inventory/creat_inventory.c		\
					src/inventory/display_inventory.c	\
					src/inventory/until_to_invent.c		\
					src/inventory/add_sprite_invent.c	\
					src/print_quete.c					\
					src/init_struct.c

OBJ				=	$(SRC:.c=.o)

NAME			=	my_rpg

CFLAGS			= 	-I./include

LDFLAGS			= 	-L./lib/my -lmy

RM_F 			=	@rm -f

all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

clean:
				$(RM_F) $(OBJ)
				$(RM_F) lib/my/libmy.a
				$(RM_F) lib/libmy.a

fclean: 		clean
				$(RM_F) $(NAME)

%.o:			%.c
				@echo -n "Compiling RPG files: $<"
				@$(CC) $(CFLAGS) -c $< -o $@ && echo -e " [\033[32mOK\033[0m]" || echo -e " [\033[31mKO\033[0m]"

re:				fclean all

.PHONY:			all unit_test clean fclean re $(NAME)
