/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:02:24 by ebouvier          #+#    #+#             */
/*   Updated: 2023/08/30 15:35:54 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	union
	{
		int				n;
		void			*content;
	};
	struct s_list		*next;
}						t_list;

typedef struct s_dbl_list
{
	void				*content;
	struct s_dbl_list	*next;
	struct s_dbl_list	*prev;
}						t_dbl_list;

t_list					*ft_lstnew(void *content);
t_list					*ft_lstnew_int(int n);
void					ft_lstprint_int(t_list *head);
void					ft_lstprint_str(t_list *head);
void					ft_lstadd_front(t_list **lst, t_list *new_node);
t_list					*ft_lstreverse(t_list *head);
int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **lst, t_list *new_node);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));

#endif