/*To save money, Santa Claus has started hiring other animals besides reindeer to pull his sleigh via short
term contracts. As a result, the actual animals that show up to pull his sleigh for any given trip can vary
greatly in size.
Last week he had 2 buffalo, 37 voles and a schnauzer. Unfortunately, both buffalo were hitched on the
left side and the entire sleigh flipped over in mid-flight due to the weight imbalance.
To prevent such accidents in the future, Santa needs to divide the animals for a given trip into two groups
such that the sum of the weights of all animals in one group equals the sum of the weights of all animals
in the other. To make the hitching process efficient, Santa is seeking an integer target weight t such that
all animals that are lighter than t go in one group and those heavier than t go into the other. If there are
multiple such t, he wants the smallest one. There’s one small wrinkle: what should be done if there some
animals have weight exactly equal to t? Santa solves the problem this way: if there are an even number of
such animals, he divides them equally among the two groups (thus distributing the weight evenly). But
if there are an odd number of such animals, then one of those animals is sent to work with the elves to
make toys (it is not put in either group), and the remaining (now an even number) are divided evenly
among the two groups.
Input
The first line contains an integer n (2 ≤ n ≤ 105
), indicating the number of animals.
Each of the next n lines contain a positive integer w (1 ≤ w ≤ 2 · 105
). These are the weights of the
animals (in ounces).
Output
Output the smallest integer target weight t, as described above. It’s guaranteed that it is possible to find
such an integer.*/

