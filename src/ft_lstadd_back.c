/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-moue <hel-moue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:31:57 by hel-moue          #+#    #+#             */
/*   Updated: 2024/12/24 13:14:21 by hel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}
/*
**#include <stdio.h>
**int main()
**{
**	t_list *lst = NULL;
**	t_list *new = malloc(sizeof(t_list));
**	new->content = "first";
**	new->next = NULL;
**	ft_lstadd_back(&lst, new);
**	new = malloc(sizeof(t_list));
**	new->content = "second";
**	new->next = NULL;
**	ft_lstadd_back(&lst, new);
**	new = malloc(sizeof(t_list));
**	new->content = "third";
**	new->next = NULL;
**	ft_lstadd_back(&lst, new);
**	while (lst)
**	{
**		printf("%s\n", lst->content);
**		lst = lst->next;
**	}
**}
*/