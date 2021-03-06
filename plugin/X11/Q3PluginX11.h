#ifndef Q3PLUGINX11_H
#define Q3PLUGINX11_H

#include "../Q3Plugin.h"

class Q3PluginX11 : public Q3Plugin {
public:
	Q3PluginX11();
	virtual ~Q3PluginX11();

protected:
	virtual void ProcessMessage(message_t& msg);

	virtual bool onKeyDown(FB::KeyDownEvent *evt, FB::PluginWindow *window);
	virtual bool onKeyUp(FB::KeyUpEvent *evt, FB::PluginWindow *window);
	virtual bool onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *window);
	virtual bool onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *window);
	virtual bool onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *window);

private:
	bool mouseLocked_;
};

#endif