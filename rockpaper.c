#include <gtk/gtk.h>
#include <stdlib.h>
#include <time.h>

GtkWidget *result_label;
GtkWidget *player_button_rock;
GtkWidget *player_button_paper;
GtkWidget *player_button_scissors;

const char *choices[] = {"Rock", "Paper", "Scissors"};

void playGame(GtkWidget *widget, gpointer data) {
    int computer_choice = rand() % 3;  // 0: Rock, 1: Paper, 2: Scissors
    
    int player_choice;
    if (widget == player_button_rock) {
        player_choice = 0;
    } else if (widget == player_button_paper) {
        player_choice = 1;
    } else if (widget == player_button_scissors) {
        player_choice = 2;
    }
    
    const char *result;
    if (player_choice == computer_choice) {
        result = "It's a tie!";
    } else if ((player_choice == 0 && computer_choice == 2) ||
               (player_choice == 1 && computer_choice == 0) ||
               (player_choice == 2 && computer_choice == 1)) {
        result = "You win!";
    } else {
        result = "Computer wins!";
    }
    
    char result_text[100];
    snprintf(result_text, sizeof(result_text), "You chose %s\nComputer chose %s\n%s",
             choices[player_choice], choices[computer_choice], result);
    
    gtk_label_set_text(GTK_LABEL(result_label), result_text);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);
    
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Rock, Paper, Scissors Game");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    result_label = gtk_label_new("Click a button to play!");
    
    player_button_rock = gtk_button_new_with_label("Rock");
    player_button_paper = gtk_button_new_with_label("Paper");
    player_button_scissors = gtk_button_new_with_label("Scissors");
    
    g_signal_connect(player_button_rock, "clicked", G_CALLBACK(playGame), NULL);
    g_signal_connect(player_button_paper, "clicked", G_CALLBACK(playGame), NULL);
    g_signal_connect(player_button_scissors, "clicked", G_CALLBACK(playGame), NULL);
    
    GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    gtk_box_pack_start(GTK_BOX(hbox), player_button_rock, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), player_button_paper, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), player_button_scissors, TRUE, TRUE, 0);
    
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), result_label, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), hbox, TRUE, TRUE, 0);
    
    gtk_container_add(GTK_CONTAINER(window), vbox);
    
    srand(time(NULL));
    
    gtk_widget_show_all(window);
    
    gtk_main();
    
    return 0;
}
