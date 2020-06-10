public class Application : Gtk.Application {

    public Application() {
        Object (
            application_id: "com.github.thurdai.jarvis",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate() {

        Gtk.Window window = new Jarvis.Window(this);
        add_window (window);  

    }

}