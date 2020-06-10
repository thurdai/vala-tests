public class Jarvis.HeaderBar : Gtk.HeaderBar {

    public Jarvis.Window main_window { get; construct; }

    public HeaderBar (Jarvis.Window window) {
        Object (
            main_window: window
        );
    }

    construct {
        //title = "New Vala App";
        //subtitle = "Subtitle of the app";

        show_close_button = true;

        Gtk.Button menu_button = new Gtk.Button.from_icon_name ("applications-system-symbolic", Gtk.IconSize.BUTTON);
        menu_button.valign = Gtk.Align.CENTER; 
        pack_start (menu_button);

        Gtk.Button add_button = new Gtk.Button.with_label ("Add");
        add_button.get_style_context ().add_class ("suggested-action");
        add_button.valign = Gtk.Align.CENTER; 
        pack_start (add_button);

        add_button.clicked.connect (open_dialog);

        Gtk.StackSwitcher stack_switcher = new Gtk.StackSwitcher ();

        stack_switcher.stack = main_window.stack;

        set_custom_title (stack_switcher);
    }
    
    public void open_dialog () {

        Gtk.Dialog dialog = new Gtk.Dialog.with_buttons (
            "Add a note",
            main_window,
            Gtk.DialogFlags.MODAL |
            Gtk.DialogFlags.DESTROY_WITH_PARENT,
            //| Gtk.DialogFlags.USE_HEADER_BAR,
            "Button 1", 1, "Button 2", 2, null
        );

        Gtk.Label label = new Gtk.Label ("This is content");
        var content_area = dialog.get_content_area ();
        content_area.add (label);

        dialog.show_all ();
            dialog.present ();
    }
}