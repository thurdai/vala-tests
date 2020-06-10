/* window.c generated by valac 0.40.23, the Vala compiler
 * generated from window.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <gdk/gdk.h>


#define JARVIS_TYPE_WINDOW (jarvis_window_get_type ())
#define JARVIS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JARVIS_TYPE_WINDOW, JarvisWindow))
#define JARVIS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JARVIS_TYPE_WINDOW, JarvisWindowClass))
#define JARVIS_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JARVIS_TYPE_WINDOW))
#define JARVIS_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JARVIS_TYPE_WINDOW))
#define JARVIS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JARVIS_TYPE_WINDOW, JarvisWindowClass))

typedef struct _JarvisWindow JarvisWindow;
typedef struct _JarvisWindowClass JarvisWindowClass;
typedef struct _JarvisWindowPrivate JarvisWindowPrivate;
enum  {
	JARVIS_WINDOW_0_PROPERTY,
	JARVIS_WINDOW_NUM_PROPERTIES
};
static GParamSpec* jarvis_window_properties[JARVIS_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;

struct _JarvisWindow {
	GtkApplicationWindow parent_instance;
	JarvisWindowPrivate * priv;
	GSettings* settings;
};

struct _JarvisWindowClass {
	GtkApplicationWindowClass parent_class;
};


static gpointer jarvis_window_parent_class = NULL;

GType jarvis_window_get_type (void) G_GNUC_CONST;
GType application_get_type (void) G_GNUC_CONST;
JarvisWindow* jarvis_window_new (Application* app);
JarvisWindow* jarvis_window_construct (GType object_type,
                                       Application* app);
gboolean jarvis_window_before_destroy (JarvisWindow* self);
static GObject * jarvis_window_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties);
static gboolean _jarvis_window___lambda4_ (JarvisWindow* self,
                                    GdkEventAny* e);
static gboolean __jarvis_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                             GdkEventAny* event,
                                                             gpointer self);
static void jarvis_window_finalize (GObject * obj);


JarvisWindow*
jarvis_window_construct (GType object_type,
                         Application* app)
{
	JarvisWindow * self = NULL;
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 6 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	self = (JarvisWindow*) g_object_new (object_type, "application", app, NULL);
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return self;
#line 82 "window.c"
}


JarvisWindow*
jarvis_window_new (Application* app)
{
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return jarvis_window_construct (JARVIS_TYPE_WINDOW, app);
#line 91 "window.c"
}


gboolean
jarvis_window_before_destroy (JarvisWindow* self)
{
	gboolean result = FALSE;
	gint width = 0;
	gint height = 0;
	gint x = 0;
	gint y = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	GSettings* _tmp4_;
	GSettings* _tmp5_;
	GSettings* _tmp6_;
	GSettings* _tmp7_;
#line 27 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 29 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 29 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	width = _tmp0_;
#line 29 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	height = _tmp1_;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	x = _tmp2_;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	y = _tmp3_;
#line 32 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp4_ = self->settings;
#line 32 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_settings_set_int (_tmp4_, "pos-x", x);
#line 33 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp5_ = self->settings;
#line 33 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_settings_set_int (_tmp5_, "pos-y", y);
#line 34 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp6_ = self->settings;
#line 34 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_settings_set_int (_tmp6_, "window-width", width);
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp7_ = self->settings;
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_settings_set_int (_tmp7_, "window-height", height);
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	result = FALSE;
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return result;
#line 145 "window.c"
}


static gboolean
_jarvis_window___lambda4_ (JarvisWindow* self,
                           GdkEventAny* e)
{
	gboolean result = FALSE;
#line 20 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 21 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	result = jarvis_window_before_destroy (self);
#line 21 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return result;
#line 160 "window.c"
}


static gboolean
__jarvis_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                    GdkEventAny* event,
                                                    gpointer self)
{
	gboolean result;
	result = _jarvis_window___lambda4_ ((JarvisWindow*) self, event);
#line 20 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return result;
#line 173 "window.c"
}


static GObject *
jarvis_window_constructor (GType type,
                           guint n_construct_properties,
                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	JarvisWindow * self;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
	GSettings* _tmp2_;
	GSettings* _tmp3_;
	GSettings* _tmp4_;
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	parent_class = G_OBJECT_CLASS (jarvis_window_parent_class);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, JARVIS_TYPE_WINDOW, JarvisWindow);
#line 12 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_set_title ((GtkWindow*) self, "First Vala App");
#line 13 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 14 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 400, 400);
#line 16 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp0_ = g_settings_new ("com.github.thurdai.jarvis");
#line 16 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_g_object_unref0 (self->settings);
#line 16 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	self->settings = _tmp0_;
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp1_ = self->settings;
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp2_ = self->settings;
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp1_, "pos-x"), g_settings_get_int (_tmp2_, "pos-y"));
#line 18 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp3_ = self->settings;
#line 18 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_tmp4_ = self->settings;
#line 18 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp3_, "window-width"), g_settings_get_int (_tmp4_, "window-height"));
#line 20 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __jarvis_window___lambda4__gtk_widget_delete_event, self, 0);
#line 24 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	return obj;
#line 226 "window.c"
}


static void
jarvis_window_class_init (JarvisWindowClass * klass)
{
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	jarvis_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	G_OBJECT_CLASS (klass)->constructor = jarvis_window_constructor;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	G_OBJECT_CLASS (klass)->finalize = jarvis_window_finalize;
#line 239 "window.c"
}


static void
jarvis_window_instance_init (JarvisWindow * self)
{
}


static void
jarvis_window_finalize (GObject * obj)
{
	JarvisWindow * self;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, JARVIS_TYPE_WINDOW, JarvisWindow);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	_g_object_unref0 (self->settings);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/widgets/window.vala"
	G_OBJECT_CLASS (jarvis_window_parent_class)->finalize (obj);
#line 259 "window.c"
}


GType
jarvis_window_get_type (void)
{
	static volatile gsize jarvis_window_type_id__volatile = 0;
	if (g_once_init_enter (&jarvis_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (JarvisWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) jarvis_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (JarvisWindow), 0, (GInstanceInitFunc) jarvis_window_instance_init, NULL };
		GType jarvis_window_type_id;
		jarvis_window_type_id = g_type_register_static (gtk_application_window_get_type (), "JarvisWindow", &g_define_type_info, 0);
		g_once_init_leave (&jarvis_window_type_id__volatile, jarvis_window_type_id);
	}
	return jarvis_window_type_id__volatile;
}



