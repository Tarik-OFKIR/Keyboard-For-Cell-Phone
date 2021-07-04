#include<stdlib.h>
#include<gtk/gtk.h>
#include<glib.h>
#include <string.h>
#include "callBaks.h"


void click_un(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "1");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_deux(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "2");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_trois(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "3");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_quatre(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "4");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_cinq(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "5");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_six(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "6");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_sept(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "7");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_huit(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "8");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}

void click_neuf(GtkWidget* pWidget, gpointer pData)
{
	char texte[50] = { 0 };

	donnees* don = (donnees*)pData;

	sprintf(texte, "%s", (char*)(gtk_entry_get_text(GTK_ENTRY(don->entree))));
	strcat(texte, "9");
	gtk_entry_set_text(GTK_ENTRY(don->entree), texte);
}