@echo off
echo インストールを開始します
echo 開始するためにはなにかキーを押してください
echo ※ FMOD をインストールする前に Unreal Engine 4 を終了してください
pause
cls
echo FMOD をインストールしています
echo しばらくお待ち下さい...
powershell -command "Expand-Archive -Force '%~dp0fmodstudio20100ue4.24win64.zip' '%~dp0'"
echo インストールが完了しました
pause