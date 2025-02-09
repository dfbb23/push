#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a);
void	ft_error(void);
int	ft_isalpha(int c);
int	sign(int c);
int	digit(int c);
int	space(int c);
void	check_error(char **argv, int i, int j);
int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int	ft_case_rarb(t_stack *a, t_stack *b, int c);
int	ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int	ft_case_rrarb(t_stack *a, t_stack *b, int c);
int	ft_case_rarrb(t_stack *a, t_stack *b, int c);
int	ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c);

int	ft_checksorted(t_stack *stack_a);
t_stack	*ft_lstlast(t_stack *lst);
int	ft_lstsize(t_stack *lst);
int	ft_min(t_stack *a);
int	ft_max(t_stack *a);
int	ft_find_index(t_stack *a, int nbr);
int	ft_find_place_b(t_stack *stack_b, int nbr_push);
int	ft_find_place_a(t_stack *stack_a, int nbr_push);

void	ft_free(t_stack **lst);

int	ft_rotate_type_ba(t_stack *a, t_stack *b);
int	ft_rotate_type_ab(t_stack *a, t_stack *b);

#endif
