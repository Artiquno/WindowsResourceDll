# WindowsResourceDll
### A complicated solution to a simple problem!

Basically just a project to try out how resource-only DLLs work in Win32 projects.
The goal is to have some "localized" DLLs for use within a Windows desktop application,
preferably without making the code a complete mess with a hundred localization projects.

Ideally it would have been nice to get the resources by their name instead of their numeric
ID, but it's always possible to include the `resource.h` file so we can get the IDs from there.
Then we can share the same header for all the resource files and voila! it's done! Probably...

## Structure

The main project is _Resource Files_, all the others are just DLL projects with resource files inside
