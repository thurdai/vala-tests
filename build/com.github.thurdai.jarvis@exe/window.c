/* window.c generated by valac 0.40.23, the Vala compiler
 * generated from window.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define MY_APP_TYPE_WINDOW (my_app_window_get_type ())
#define MY_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MY_APP_TYPE_WINDOW, MyAppWindow))
#define MY_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MY_APP_TYPE_WINDOW, MyAppWindowClass))
#define MY_APP_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MY_APP_TYPE_WINDOW))
#define MY_APP_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MY_APP_TYPE_WINDOW))
#define MY_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MY_APP_TYPE_WINDOW, MyAppWindowClass))

typedef struct _MyAppWindow MyAppWindow;
typedef struct _MyAppWindowClass MyAppWindowClass;
typedef struct _MyAppWindowPrivate MyAppWindowPrivate;
enum  {
	MY_APP_WINDOW_0_PROPERTY,
	MY_APP_WINDOW_NUM_PROPERTIES
};
static GParamSpec* my_app_window_properties[MY_APP_WINDOW_NUM_PROPERTIES];

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;

struct _MyAppWindow {
	GtkApplicationWindow parent_instance;
	MyAppWindowPrivate * priv;
};

struct _MyAppWindowClass {
	GtkApplicationWindowClass parent_class;
};


static gpointer my_app_window_parent_class = NULL;

GType my_app_window_get_type (void) G_GNUC_CONST;
GType application_get_type (void) G_GNUC_CONST;
MyAppWindow* my_app_window_new (Application* app);
MyAppWindow* my_app_window_construct (GType object_type,
                                      Application* app);
static GObject * my_app_window_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties);


MyAppWindow*
my_app_window_construct (GType object_type,
                         Application* app)
{
	MyAppWindow * self = NULL;
#line 3 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 4 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	self = (MyAppWindow*) g_object_new (object_type, "application", app, NULL);
#line 3 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	return self;
#line 71 "window.c"
}


MyAppWindow*
my_app_window_new (Application* app)
{
#line 3 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	return my_app_window_construct (MY_APP_TYPE_WINDOW, app);
#line 80 "window.c"
}


static GObject *
my_app_window_constructor (GType type,
                           guint n_construct_properties,
                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	MyAppWindow * self;
#line 9 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	parent_class = G_OBJECT_CLASS (my_app_window_parent_class);
#line 9 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 9 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MY_APP_TYPE_WINDOW, MyAppWindow);
#line 10 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	gtk_window_set_title ((GtkWindow*) self, "First Vala App");
#line 11 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 12 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 400, 400);
#line 14 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 9 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	return obj;
#line 108 "window.c"
}


static void
my_app_window_class_init (MyAppWindowClass * klass)
{
#line 1 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	my_app_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/thurdai/Documents/apps/vala-tests/window.vala"
	G_OBJECT_CLASS (klass)->constructor = my_app_window_constructor;
#line 119 "window.c"
}


static void
my_app_window_instance_init (MyAppWindow * self)
{
}


GType
my_app_window_get_type (void)
{
	static volatile gsize my_app_window_type_id__volatile = 0;
	if (g_once_init_enter (&my_app_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MyAppWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) my_app_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MyAppWindow), 0, (GInstanceInitFunc) my_app_window_instance_init, NULL };
		GType my_app_window_type_id;
		my_app_window_type_id = g_type_register_static (gtk_application_window_get_type (), "MyAppWindow", &g_define_type_info, 0);
		g_once_init_leave (&my_app_window_type_id__volatile, my_app_window_type_id);
	}
	return my_app_window_type_id__volatile;
}


