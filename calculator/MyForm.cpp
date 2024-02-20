#include "MyForm.h"

using namespace System; //подключаем пространства имен
using namespace System::Windows::Forms;

[STAThreadAttribute] //привязываем функцию мэин к отдельному потоку данных

int main(array<String^>^ args)// создаем функцию маин с масивом args и авто очисткой памяти
{
	Application::SetCompatibleTextRenderingDefault(false);//задает значение по умолчанию в конкретных элементах управления
	Application::EnableVisualStyles();// включает визуальные стили для приложения
	calculator::MyForm form;//обращение к классу с запуском обекта
	Application::Run(% form);//передаем по сылке обьект form

	return 0;
}