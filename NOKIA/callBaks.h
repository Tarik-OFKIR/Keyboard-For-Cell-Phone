#ifndef CALLBACKS_H
#define CALLBACKS_H
#include<stdlib.h>
#include<gtk/gtk.h>
#include<glib.h>
#include <string.h>

typedef struct
{
	char* t;
	char* q;
	GtkWidget* entree;

}donnees;

void click_un(GtkWidget* pWidget, gpointer pData);
void click_deux(GtkWidget* pWidget, gpointer pData);
void click_trois(GtkWidget* pWidget, gpointer pData);
void click_quatre(GtkWidget* pWidget, gpointer pData);
void click_cinq(GtkWidget* pWidget, gpointer pData);
void click_six(GtkWidget* pWidget, gpointer pData);
void click_sept(GtkWidget* pWidget, gpointer pData);
void click_moin(GtkWidget* pWidget, gpointer pData);
void click_neuf(GtkWidget* pWidget, gpointer pData);
#endif /* CALLBACKS_H */
