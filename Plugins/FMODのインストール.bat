@echo off
echo �C���X�g�[�����J�n���܂�
echo �J�n���邽�߂ɂ͂Ȃɂ��L�[�������Ă�������
echo �� FMOD ���C���X�g�[������O�� Unreal Engine 4 ���I�����Ă�������
pause
cls
echo FMOD ���C���X�g�[�����Ă��܂�
echo ���΂炭���҂�������...
powershell -command "Expand-Archive -Force '%~dp0fmodstudio20100ue4.24win64.zip' '%~dp0'"
echo �C���X�g�[�����������܂���
pause