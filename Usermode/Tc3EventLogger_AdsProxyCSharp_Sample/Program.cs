// Simple Sample from NuGet.org for the TwinCAT 3 Eventlogger AdsProxy 
// This Sample combines the two code snippets provided at the NuGet Packet Description 
// TwinCAT provided Win32EventClass is used  - this needs to be used on the project. For example please use the Tc3EventLogger_ListenerSample to transfer texts

using TcEventLoggerAdsProxyLib;
using System.Globalization;

var logger = new TcEventLogger();


//Receiving Events
logger.MessageSent += (TcMessage message) => Console.WriteLine("Received Message: " + message.GetText(CultureInfo.CurrentCulture.LCID));
logger.AlarmRaised += (TcAlarm alarm) => Console.WriteLine("Alarm Raised: " + alarm.GetText(CultureInfo.CurrentCulture.LCID));
logger.AlarmCleared += (TcAlarm alarm, bool bRemove) => Console.WriteLine((bRemove ? "Alarm Cleared and was Confirmed: " : "Alarm Cleared: ") + alarm.GetText(CultureInfo.CurrentCulture.LCID));
logger.AlarmConfirmed += (TcAlarm alarm, bool bRemove) => Console.WriteLine((bRemove ? "Alarm Confirmed and was Cleared: " : "Alarm Confirmed: ") + alarm.GetText(CultureInfo.CurrentCulture.LCID));

//Sending Event
var cls = Guid.Parse("{1d0c4bac-ecf3-4f33-8f20-a12e77ab6387}"); //used EventGuid from Win32EventClass 
var id = 0u;                                                    //used EventId from Win32EventClass 
var severity = SeverityLevelEnum.Error;
var source = new TcSourceInfo
{
    Name = "SendTcMessageSample",
    Id = 999
};
var event_args = new TcArguments 
{
    "X_Axis_Position",
    123
};


logger.Connect(); //connect to localhost

Console.WriteLine("Press 's' to send and 'x' or CTRL+C to quit");
while (true)
{
    var input = Console.ReadKey(true);
    if (input.Key == ConsoleKey.S)
        logger.SendTcMessage(cls, id, severity, "{ axis : { name : 'X-Axis', index : 2 }", source, event_args);
    else if (input.Key == ConsoleKey.X) break;

}