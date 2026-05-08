#include <stdio.h>

typedef enum {
    ROCK,
    PAPER
} Choice;

typedef struct {
    int id;
    Choice choice;
} Player;

Player determine_winner(Player p1, Player p2);

void print_player(Player winner) {
    printf("Player %d wins!\n", winner.id);
}

int main() {
    Player player1 = {1, ROCK};
    Player player2 = {2, PAPER};

    Player winner = determine_winner(player1, player2);
    print_player(winner);

    return 0;
}

Player determine_winner(Player p1, Player p2) {
    if (p1.choice == ROCK && p2.choice == PAPER) {
        return p2;
    } else if (p1.choice == PAPER && p2.choice == ROCK) {
        return p1;
    } else {
        return p1;
    }
}
