#include<stdlib.h>
#include<gtk/gtk.h>
#include<glib.h>
#include <string.h>
#include "callBaks.h"

#define	g_signal_connect();

//typedef struct listemots* ListeMots;
//struct listemots {
//	char mot[256];
//	ListeMots suivant;
//};
//
//typedef struct noeud* Noeud;
//struct noeud {
//	ListeMots mots;
//	Noeud fils[8]; /* de 2 à 9 */
//};










int main(int argc, char** argv)
{
	GtkWidget* pWindow_1, * pWindow_2, * p_button_1, * p_button_2, * p_button_3,
		* p_button_4, * p_button_5, * p_button_6, * p_button_7, * p_button_8,
		* p_button_9, * p_label_1, * p_label_2, * p_label_3, * p_label_1_1, * p_label_2_1, * p_label_3_1,
		* p_grid, * pVBox, * pEntry_1, * pEntry_2, * pEntry_3, * p_label, * p_labelkk, * pVBoxFrame_1, * pVBoxFrame_2, * pVBoxFrame_3, * pFrame_1, * pFrame_2, * pFrame_3;
	pEntry_1 = NULL;
	pEntry_2 = NULL;
	pEntry_3 = NULL;

	gint val_1, val_2, val_3, val_4, val_5, val_6, val_7, val_8, val_9;
	val_1 = 1, val_2 = 2, val_3 = 3, val_4 = 4, val_5 = 5, val_6 = 6, val_7 = 7, val_8 = 8, val_9 = 9;
	gchar* chaine_1, * chaine_2, * chaine_3, * chaine_4, * chaine_5, * chaine_6,
		* chaine_7, * chaine_8, * chaine_9;
	chaine_1 = NULL, chaine_2 = NULL, chaine_3 = NULL, chaine_4 = NULL,
		chaine_5 = NULL, chaine_6 = NULL, chaine_7 = NULL, chaine_8 = NULL, chaine_9 = NULL;

	donnees d = { 0 };



	/* Initialisation de GTK+ */
	gtk_init(&argc, &argv);

	pWindow_1 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	p_label_1 = gtk_label_new("Mots exacts :");
	p_label_2 = gtk_label_new("Code:");
	p_label_3 = gtk_label_new("Completions :");




	p_button_1 = gtk_button_new_with_label("1");
	p_button_2 = gtk_button_new_with_label("  2\n abc");
	p_button_3 = gtk_button_new_with_label("  3\n def");
	p_button_4 = gtk_button_new_with_label("  4\n ghi");
	p_button_5 = gtk_button_new_with_label("  5\n jkl");
	p_button_6 = gtk_button_new_with_label("  6\n mno");
	p_button_7 = gtk_button_new_with_label("  7\n pqrs");
	p_button_8 = gtk_button_new_with_label("  8\n tuv");
	p_button_9 = gtk_button_new_with_label("   9\n wxyz");
	p_grid = gtk_grid_new();




	/*Personnalisation des composants: */

	gtk_window_set_title(GTK_WINDOW(pWindow_1), "Interface de saisie");
	gtk_window_set_position(GTK_WINDOW(pWindow_1), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(pWindow_1), 500, 500);
	/*(destruction de la fenêtre = quitter la boucle évènementielle)*/
	g_signal_connect(G_OBJECT(pWindow_1), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	/*On précise que les cases de notre grille doivent avoir la même hauteur et largeur :*/
	gtk_grid_set_row_homogeneous(GTK_GRID(p_grid), TRUE);
	gtk_grid_set_column_homogeneous(GTK_GRID(p_grid), TRUE);



	/*Placement des composants*/
	gtk_container_add(GTK_CONTAINER(pWindow_1), p_grid); /*Ajout de la grille à la fenêtre*/
	pWindow_2 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(pWindow_2), "dialoge");
	gtk_window_set_position(GTK_WINDOW(pWindow_2), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(pWindow_2), 200, 200);
	/*(destruction de la fenêtre = quitter la boucle évènementielle)*/
	g_signal_connect(G_OBJECT(pWindow_2), "destroy", G_CALLBACK(gtk_main_quit), NULL);


	pVBox = gtk_vbox_new(TRUE, 0);
	gtk_container_add(GTK_CONTAINER(pWindow_2), pVBox);

	/* Creation du premier GtkFrame */
	pFrame_1 = gtk_frame_new("code :");
	gtk_box_pack_start(GTK_BOX(pVBox), pFrame_1, TRUE, FALSE, 0);

	/* Creation et insertion d une boite pour le premier GtkFrame */
	pVBoxFrame_1 = gtk_vbox_new(TRUE, 0);
	gtk_container_add(GTK_CONTAINER(pFrame_1), pVBoxFrame_1);

	/* Creation et insertion des éléments contenus dans le premier GtkFrame */
	p_label_1_1 = gtk_label_new("code");
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_1), p_label_1_1, TRUE, FALSE, 0);
	pEntry_1 = gtk_entry_new();
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_1), pEntry_1, TRUE, FALSE, 0);
	d.q = NULL;
	d.t = NULL;
	d.entree = pEntry_1;


	/* Creation du premier GtkFrame */
	pFrame_2 = gtk_frame_new("Mots exacts :");
	gtk_box_pack_start(GTK_BOX(pVBox), pFrame_2, TRUE, FALSE, 0);

	/* Creation et insertion d une boite pour le premier GtkFrame */
	pVBoxFrame_2 = gtk_vbox_new(TRUE, 0);
	gtk_container_add(GTK_CONTAINER(pFrame_2), pVBoxFrame_2);

	/* Creation et insertion des éléments contenus dans le premier GtkFrame */
	p_label_2_1 = gtk_label_new("Mots exacts");
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_2), p_label_2_1, TRUE, FALSE, 0);
	pEntry_2 = gtk_entry_new();
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_2), pEntry_2, TRUE, FALSE, 0);


	/* Creation du premier GtkFrame */
	pFrame_3 = gtk_frame_new("Completions");
	gtk_box_pack_start(GTK_BOX(pVBox), pFrame_3, TRUE, FALSE, 0);

	/* Creation et insertion d une boite pour le premier GtkFrame */
	pVBoxFrame_3 = gtk_vbox_new(TRUE, 0);
	gtk_container_add(GTK_CONTAINER(pFrame_3), pVBoxFrame_3);

	/* Creation et insertion des éléments contenus dans le premier GtkFrame */
	p_label_3_1 = gtk_label_new("Completions :");
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_3), p_label_3_1, TRUE, FALSE, 0);
	pEntry_3 = gtk_entry_new();
	gtk_box_pack_start(GTK_BOX(pVBoxFrame_3), pEntry_3, TRUE, FALSE, 0);



	/*Ajout du label 1 à la grille, en coordonnées (3,0), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_label_1, 3, 0, 2, 1);
	gtk_grid_attach(GTK_GRID(p_grid), p_label_3, 3, 2, 2, 1);
	/*Ajout du label 2 à la grille, en coordonnées (0,4), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_label_2, 0, 4, 1, 1);




	/*Ajout du bouton 1 à la grille, en coordonnées (0,0), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_1, 0, 0, 1, 1);
	/*Ajout du bouton 2 à la grille, en coordonnées (0,1), et de dimension 1 sur 3*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_2, 1, 0, 1, 1);
	/*Ajout du bouton 1 à la grille, en coordonnées (0,2), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_3, 2, 0, 1, 1);
	/*Ajout du bouton 2 à la grille, en coordonnées (0,3), et de dimension 1 sur 3*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_4, 0, 1, 1, 1);
	/*Ajout du bouton 1 à la grille, en coordonnées (0,4), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_5, 1, 1, 1, 1);
	/*Ajout du bouton 2 à la grille, en coordonnées (1,0), et de dimension 1 sur 3*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_6, 2, 1, 1, 1);
	/*Ajout du bouton 1 à la grille, en coordonnées (1,1), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_7, 0, 2, 1, 1);
	/*Ajout du bouton 2 à la grille, en coordonnées (1,2), et de dimension 1 sur 3*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_8, 1, 2, 1, 1);
	/*Ajout du bouton 1 à la grille, en coordonnées (1,3), et de dimension 1 sur 1*/
	gtk_grid_attach(GTK_GRID(p_grid), p_button_9, 2, 2, 1, 1);



	g_signal_connect(G_OBJECT(p_button_1), "clicked", GTK_SIGNAL_FUNC(click_un), &d);
	g_signal_connect(G_OBJECT(p_button_2), "clicked", GTK_SIGNAL_FUNC(click_deux), &d);
	g_signal_connect(G_OBJECT(p_button_3), "clicked", GTK_SIGNAL_FUNC(click_trois), &d);
	g_signal_connect(G_OBJECT(p_button_4), "clicked", GTK_SIGNAL_FUNC(click_quatre), &d);
	g_signal_connect(G_OBJECT(p_button_5), "clicked", GTK_SIGNAL_FUNC(click_cinq), &d);
	g_signal_connect(G_OBJECT(p_button_6), "clicked", GTK_SIGNAL_FUNC(click_six), &d);
	g_signal_connect(G_OBJECT(p_button_7), "clicked", GTK_SIGNAL_FUNC(click_sept), &d);
	g_signal_connect(G_OBJECT(p_button_8), "clicked", GTK_SIGNAL_FUNC(click_huit), &d);
	g_signal_connect(G_OBJECT(p_button_9), "clicked", GTK_SIGNAL_FUNC(click_neuf), &d);









	/*Afficher les composants IHM*/
	gtk_widget_show_all(pWindow_1);
	gtk_widget_show_all(pWindow_2);


	/*Lancer la boucle évènementielle*/
	gtk_main();

	return EXIT_SUCCESS;
}


