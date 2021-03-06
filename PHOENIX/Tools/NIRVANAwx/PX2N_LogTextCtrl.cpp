// PX2N_LogTextCtrl.cpp

#include "PX2N_LogTextCtrl.hpp"
#include "PX2EventWorld.hpp"
using namespace NA;
using namespace PX2;

BEGIN_EVENT_TABLE(LogTextCtrl, wxTextCtrl)
END_EVENT_TABLE()

//-----------------------------------------------------------------------------
LogTextCtrl::LogTextCtrl(wxWindow *parent) :
wxTextCtrl(parent, wxID_ANY, wxT("Logger"), wxPoint(0, 250), wxSize(100, 50),
wxTE_RICH | wxTE_MULTILINE | wxTE_READONLY | wxNO_BORDER),
LogHandler(LT_INFO | LT_ERROR | LT_USER)
{
	Clear();
	SetBackgroundColour(wxColour(255, 255, 255));

	Logger::GetSingleton().AddHandler(this);
}
//-----------------------------------------------------------------------------
LogTextCtrl::~LogTextCtrl()
{
	Logger::GetSingleton().RemoveHandler(this);
}
//-----------------------------------------------------------------------------
void LogTextCtrl::Handle(const LogBuffer *logBuffer,
	const char *timeStamp)
{
	std::string timeStampStr(timeStamp);
	std::string logStr = timeStampStr + std::string((char*)logBuffer->Buffer);

	int level = logBuffer->Level;

	if (PX2::LT_INFO == level)
	{
		SetDefaultStyle(wxTextAttr(*wxBLACK, wxColour(240, 240, 240)));
	}
	else if (PX2::LT_ERROR == level)
	{
		SetDefaultStyle(wxTextAttr(*wxRED, wxColour(240, 240, 240)));
	}
	else if (PX2::LT_USER == level)
	{
		SetDefaultStyle(wxTextAttr(*wxGREEN, wxColour(240, 240, 240)));
	}

	AppendText(logStr);
}
//-----------------------------------------------------------------------------