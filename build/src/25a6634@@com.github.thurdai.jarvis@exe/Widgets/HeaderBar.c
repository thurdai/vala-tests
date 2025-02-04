/* HeaderBar.c generated by valac 0.40.23, the Vala compiler
 * generated from HeaderBar.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define JARVIS_TYPE_HEADER_BAR (jarvis_header_bar_get_type ())
#define JARVIS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JARVIS_TYPE_HEADER_BAR, JarvisHeaderBar))
#define JARVIS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JARVIS_TYPE_HEADER_BAR, JarvisHeaderBarClass))
#define JARVIS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JARVIS_TYPE_HEADER_BAR))
#define JARVIS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JARVIS_TYPE_HEADER_BAR))
#define JARVIS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JARVIS_TYPE_HEADER_BAR, JarvisHeaderBarClass))

typedef struct _JarvisHeaderBar JarvisHeaderBar;
typedef struct _JarvisHeaderBarClass JarvisHeaderBarClass;
typedef struct _JarvisHeaderBarPrivate JarvisHeaderBarPrivate;

#define JARVIS_TYPE_WINDOW (jarvis_window_get_type ())
#define JARVIS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JARVIS_TYPE_WINDOW, JarvisWindow))
#define JARVIS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JARVIS_TYPE_WINDOW, JarvisWindowClass))
#define JARVIS_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JARVIS_TYPE_WINDOW))
#define JARVIS_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JARVIS_TYPE_WINDOW))
#define JARVIS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JARVIS_TYPE_WINDOW, JarvisWindowClass))

typedef struct _JarvisWindow JarvisWindow;
typedef struct _JarvisWindowClass JarvisWindowClass;
enum  {
	JARVIS_HEADER_BAR_0_PROPERTY,
	JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY,
	JARVIS_HEADER_BAR_NUM_PROPERTIES
};
static GParamSpec* jarvis_header_bar_properties[JARVIS_HEADER_BAR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _JarvisHeaderBar {
	GtkHeaderBar parent_instance;
	JarvisHeaderBarPrivate * priv;
};

struct _JarvisHeaderBarClass {
	GtkHeaderBarClass parent_class;
};

struct _JarvisHeaderBarPrivate {
	JarvisWindow* _main_window;
};


static gpointer jarvis_header_bar_parent_class = NULL;

GType jarvis_header_bar_get_type (void) G_GNUC_CONST;
GType jarvis_window_get_type (void) G_GNUC_CONST;
#define JARVIS_HEADER_BAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), JARVIS_TYPE_HEADER_BAR, JarvisHeaderBarPrivate))
JarvisHeaderBar* jarvis_header_bar_new (JarvisWindow* window);
JarvisHeaderBar* jarvis_header_bar_construct (GType object_type,
                                              JarvisWindow* window);
void jarvis_header_bar_open_dialog (JarvisHeaderBar* self);
JarvisWindow* jarvis_header_bar_get_main_window (JarvisHeaderBar* self);
static void jarvis_header_bar_set_main_window (JarvisHeaderBar* self,
                                        JarvisWindow* value);
static GObject * jarvis_header_bar_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
static void _jarvis_header_bar_open_dialog_gtk_button_clicked (GtkButton* _sender,
                                                        gpointer self);
GtkStack* jarvis_window_get_stack (JarvisWindow* self);
static void jarvis_header_bar_finalize (GObject * obj);
static void _vala_jarvis_header_bar_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec);
static void _vala_jarvis_header_bar_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec);


JarvisHeaderBar*
jarvis_header_bar_construct (GType object_type,
                             JarvisWindow* window)
{
	JarvisHeaderBar * self = NULL;
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 6 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	self = (JarvisHeaderBar*) g_object_new (object_type, "main-window", window, NULL);
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	return self;
#line 94 "HeaderBar.c"
}


JarvisHeaderBar*
jarvis_header_bar_new (JarvisWindow* window)
{
#line 5 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	return jarvis_header_bar_construct (JARVIS_TYPE_HEADER_BAR, window);
#line 103 "HeaderBar.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 47 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	return self ? g_object_ref (self) : NULL;
#line 112 "HeaderBar.c"
}


void
jarvis_header_bar_open_dialog (JarvisHeaderBar* self)
{
	GtkDialog* dialog = NULL;
	JarvisWindow* _tmp0_;
	GtkDialog* _tmp1_;
	GtkLabel* label = NULL;
	GtkLabel* _tmp2_;
	GtkBox* content_area = NULL;
	GtkBox* _tmp3_;
	GtkBox* _tmp4_;
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp0_ = self->priv->_main_window;
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp1_ = (GtkDialog*) gtk_dialog_new_with_buttons ("Add a note", (GtkWindow*) _tmp0_, GTK_DIALOG_MODAL | GTK_DIALOG_DESTROY_WITH_PARENT, "Button 1", 1, "Button 2", 2, NULL, NULL);
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp1_);
#line 37 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	dialog = _tmp1_;
#line 46 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp2_ = (GtkLabel*) gtk_label_new ("This is content");
#line 46 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp2_);
#line 46 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	label = _tmp2_;
#line 47 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp3_ = gtk_dialog_get_content_area (dialog);
#line 47 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 47 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	content_area = _tmp4_;
#line 48 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_container_add ((GtkContainer*) content_area, (GtkWidget*) label);
#line 50 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_widget_show_all ((GtkWidget*) dialog);
#line 51 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_window_present ((GtkWindow*) dialog);
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (content_area);
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (label);
#line 35 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (dialog);
#line 161 "HeaderBar.c"
}


JarvisWindow*
jarvis_header_bar_get_main_window (JarvisHeaderBar* self)
{
	JarvisWindow* result;
	JarvisWindow* _tmp0_;
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp0_ = self->priv->_main_window;
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	result = _tmp0_;
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	return result;
#line 178 "HeaderBar.c"
}


static void
jarvis_header_bar_set_main_window (JarvisHeaderBar* self,
                                   JarvisWindow* value)
{
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_return_if_fail (self != NULL);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	if (jarvis_header_bar_get_main_window (self) != value) {
#line 190 "HeaderBar.c"
		JarvisWindow* _tmp0_;
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (self->priv->_main_window);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		self->priv->_main_window = _tmp0_;
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		g_object_notify_by_pspec ((GObject *) self, jarvis_header_bar_properties[JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY]);
#line 200 "HeaderBar.c"
	}
}


static void
_jarvis_header_bar_open_dialog_gtk_button_clicked (GtkButton* _sender,
                                                   gpointer self)
{
#line 26 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	jarvis_header_bar_open_dialog ((JarvisHeaderBar*) self);
#line 211 "HeaderBar.c"
}


static GObject *
jarvis_header_bar_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	JarvisHeaderBar * self;
	GtkButton* menu_button = NULL;
	GtkButton* _tmp0_;
	GtkButton* _tmp1_;
	GtkButton* _tmp2_;
	GtkButton* add_button = NULL;
	GtkButton* _tmp3_;
	GtkButton* _tmp4_;
	GtkStyleContext* _tmp5_;
	GtkButton* _tmp6_;
	GtkButton* _tmp7_;
	GtkButton* _tmp8_;
	GtkStackSwitcher* stack_switcher = NULL;
	GtkStackSwitcher* _tmp9_;
	GtkStackSwitcher* _tmp10_;
	JarvisWindow* _tmp11_;
	GtkStack* _tmp12_;
	GtkStack* _tmp13_;
	GtkStackSwitcher* _tmp14_;
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	parent_class = G_OBJECT_CLASS (jarvis_header_bar_parent_class);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, JARVIS_TYPE_HEADER_BAR, JarvisHeaderBar);
#line 15 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) self, TRUE);
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp0_ = (GtkButton*) gtk_button_new_from_icon_name ("applications-system-symbolic", (GtkIconSize) GTK_ICON_SIZE_BUTTON);
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp0_);
#line 17 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	menu_button = _tmp0_;
#line 18 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp1_ = menu_button;
#line 18 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp1_, GTK_ALIGN_CENTER);
#line 19 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp2_ = menu_button;
#line 19 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_start ((GtkHeaderBar*) self, (GtkWidget*) _tmp2_);
#line 21 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp3_ = (GtkButton*) gtk_button_new_with_label ("Add");
#line 21 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp3_);
#line 21 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	add_button = _tmp3_;
#line 22 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp4_ = add_button;
#line 22 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
#line 22 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_style_context_add_class (_tmp5_, "suggested-action");
#line 23 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp6_ = add_button;
#line 23 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp6_, GTK_ALIGN_CENTER);
#line 24 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp7_ = add_button;
#line 24 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_start ((GtkHeaderBar*) self, (GtkWidget*) _tmp7_);
#line 26 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp8_ = add_button;
#line 26 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_signal_connect_object (_tmp8_, "clicked", (GCallback) _jarvis_header_bar_open_dialog_gtk_button_clicked, self, 0);
#line 28 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp9_ = (GtkStackSwitcher*) gtk_stack_switcher_new ();
#line 28 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp9_);
#line 28 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	stack_switcher = _tmp9_;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp10_ = stack_switcher;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp11_ = self->priv->_main_window;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp12_ = jarvis_window_get_stack (_tmp11_);
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp13_ = _tmp12_;
#line 30 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_stack_switcher_set_stack (_tmp10_, _tmp13_);
#line 32 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_tmp14_ = stack_switcher;
#line 32 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_custom_title ((GtkHeaderBar*) self, (GtkWidget*) _tmp14_);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (stack_switcher);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (add_button);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (menu_button);
#line 11 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	return obj;
#line 315 "HeaderBar.c"
}


static void
jarvis_header_bar_class_init (JarvisHeaderBarClass * klass)
{
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	jarvis_header_bar_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_type_class_add_private (klass, sizeof (JarvisHeaderBarPrivate));
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_jarvis_header_bar_get_property;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_jarvis_header_bar_set_property;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->constructor = jarvis_header_bar_constructor;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->finalize = jarvis_header_bar_finalize;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY, jarvis_header_bar_properties[JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY] = g_param_spec_object ("main-window", "main-window", "main-window", JARVIS_TYPE_WINDOW, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 336 "HeaderBar.c"
}


static void
jarvis_header_bar_instance_init (JarvisHeaderBar * self)
{
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	self->priv = JARVIS_HEADER_BAR_GET_PRIVATE (self);
#line 345 "HeaderBar.c"
}


static void
jarvis_header_bar_finalize (GObject * obj)
{
	JarvisHeaderBar * self;
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, JARVIS_TYPE_HEADER_BAR, JarvisHeaderBar);
#line 3 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (self->priv->_main_window);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (jarvis_header_bar_parent_class)->finalize (obj);
#line 359 "HeaderBar.c"
}


GType
jarvis_header_bar_get_type (void)
{
	static volatile gsize jarvis_header_bar_type_id__volatile = 0;
	if (g_once_init_enter (&jarvis_header_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (JarvisHeaderBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) jarvis_header_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (JarvisHeaderBar), 0, (GInstanceInitFunc) jarvis_header_bar_instance_init, NULL };
		GType jarvis_header_bar_type_id;
		jarvis_header_bar_type_id = g_type_register_static (gtk_header_bar_get_type (), "JarvisHeaderBar", &g_define_type_info, 0);
		g_once_init_leave (&jarvis_header_bar_type_id__volatile, jarvis_header_bar_type_id);
	}
	return jarvis_header_bar_type_id__volatile;
}


static void
_vala_jarvis_header_bar_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec)
{
	JarvisHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, JARVIS_TYPE_HEADER_BAR, JarvisHeaderBar);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	switch (property_id) {
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		case JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY:
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		g_value_set_object (value, jarvis_header_bar_get_main_window (self));
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		break;
#line 393 "HeaderBar.c"
		default:
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		break;
#line 399 "HeaderBar.c"
	}
}


static void
_vala_jarvis_header_bar_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec)
{
	JarvisHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, JARVIS_TYPE_HEADER_BAR, JarvisHeaderBar);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
	switch (property_id) {
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		case JARVIS_HEADER_BAR_MAIN_WINDOW_PROPERTY:
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		jarvis_header_bar_set_main_window (self, g_value_get_object (value));
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		break;
#line 420 "HeaderBar.c"
		default:
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/thurdai/Documents/apps/vala-tests/src/Widgets/HeaderBar.vala"
		break;
#line 426 "HeaderBar.c"
	}
}



