#include "MyForm.h"

using namespace System; //���������� ������������ ����
using namespace System::Windows::Forms;

[STAThreadAttribute] //����������� ������� ���� � ���������� ������ ������

int main(array<String^>^ args)// ������� ������� ���� � ������� args � ���� �������� ������
{
	Application::SetCompatibleTextRenderingDefault(false);//������ �������� �� ��������� � ���������� ��������� ����������
	Application::EnableVisualStyles();// �������� ���������� ����� ��� ����������
	calculator::MyForm form;//��������� � ������ � �������� ������
	Application::Run(% form);//�������� �� ����� ������ form

	return 0;
}