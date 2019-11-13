/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:35:35 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 19:52:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc < 2 || argc > 2) {
		write (1, "\n", 1);
		return (0);
	}
	int i;
   	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'z' || argv[1][i] == 'Z'){
			argv[1][i] -= 25;
			write (1, &argv[1][i], 1);
			i++; }

		if (argv[1][i] == 'y' || argv[1][i] == 'Y'){
            argv[1][i] -= 23;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'x' || argv[1][i] == 'X'){
            argv[1][i] -= 21;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'w' || argv[1][i] == 'W'){
            argv[1][i] -= 19;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'v' || argv[1][i] == 'V'){
            argv[1][i] -= 17;
            write (1, &argv[1][i], 1);
            i++; }
		
        if (argv[1][i] == 'u' || argv[1][i] == 'U'){
            argv[1][i] -= 15;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'T' || argv[1][i] == 'T'){
            argv[1][i] -= 13;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 's' || argv[1][i] == 'S'){
            argv[1][i] -= 11;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'r' || argv[1][i] == 'R'){
            argv[1][i] -= 9;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'q' || argv[1][i] == 'Q'){
            argv[1][i] -= 7;
            write (1, &argv[1][i], 1);
            i++; }
		if (argv[1][i] == 'p' || argv[1][i] == 'P'){
            argv[1][i] -= 5;
            write (1, &argv[1][i], 1);
            i++; }

		if (argv[1][i] == 'o' || argv[1][i] == 'O'){
            argv[1][i] -= 3;
            write (1, &argv[1][i], 1);
            i++; }

		if (argv[1][i] == 'n' || argv[1][i] == 'N'){
            argv[1][i] -= 1;
            write (1, &argv[1][i], 1);
            i++; }

		if (argv[1][i] == 'm' || argv[1][i] == 'M'){
            argv[1][i] += 1;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'l' || argv[1][i] == 'L'){
            argv[1][i] += 3;
            write (1, &argv[1][i], 1);
            i++; }

		if (argv[1][i] == 'k' || argv[1][i] == 'K'){
            argv[1][i] += 5;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'j' || argv[1][i] == 'J'){
            argv[1][i] += 7;
            write (1, &argv[1][i], 1);
			i++; }

		if (argv[1][i] == 'i' || argv[1][i] == 'I'){
            argv[1][i] += 9;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'h' || argv[1][i] == 'H'){
            argv[1][i] += 11;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'g' || argv[1][i] == 'G'){
            argv[1][i] += 13;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'f' || argv[1][i] == 'F'){
            argv[1][i] += 15;
            write (1, &argv[1][i], 1);
            i++; }


        if (argv[1][i] == 'e' || argv[1][i] == 'E'){
            argv[1][i] += 17;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'd' || argv[1][i] == 'D'){
            argv[1][i] += 19;
            write (1, &argv[1][i], 1);
            i++; }
        if (argv[1][i] == 'c' || argv[1][i] == 'C'){
            argv[1][i] += 21;
            write (1, &argv[1][i], 1);
            i++; }

        if (argv[1][i] == 'b' || argv[1][i] == 'B'){
            argv[1][i] += 23;
            write (1, &argv[1][i], 1);
            i++; }
        if (argv[1][i] == 'a' || argv[1][i] == 'A'){
            argv[1][i] += 25;
            write (1, &argv[1][i], 1);
            i++; }

			if ((argv[1][i] == ' ') || (argv[1][i] >= 9 && argv[1][i] <= 13) || (argv[1][i] >=32 & argv[1][i] <= 64)) {
			write (1, &argv[1][i], 1);
		   	i++; }
	}
	write (1, "\n", 1);
	return (0);
}
