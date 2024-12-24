/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-moue <hel-moue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:31:07 by hel-moue          #+#    #+#             */
/*   Updated: 2024/12/24 13:14:21 by hel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/libft.h"
#include <stdio.h>

void del(void *content){

	printf(" %s\n", content);
	free(content);
}


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list	*current;
    t_list	*next;

    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}