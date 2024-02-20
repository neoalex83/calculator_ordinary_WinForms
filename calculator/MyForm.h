#pragma once

     namespace calculator {

        using namespace System;
        using namespace System::ComponentModel;
        using namespace System::Collections;
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;

        /// <summary>
        /// Сводка для MyForm
        /// </summary>
        public ref class MyForm : public System::Windows::Forms::Form
        {
        public:
            MyForm(void)
            {
                InitializeComponent();
                //
                //TODO: добавьте код конструктора
                //
            }

        protected:
            /// <summary>
            /// Освободить все используемые ресурсы.
            /// </summary>
            ~MyForm()
            {
                if (components)
                {
                    delete components;
                }
            }


        private: System::Windows::Forms::Button^ but_percent;

        private: System::Windows::Forms::Label^ label_result;
        private: System::Windows::Forms::Button^ but_clearing;
        private: System::Windows::Forms::Button^ but_minys_plus;

        private:

        private: System::Windows::Forms::Button^ but_divide;

        private: System::Windows::Forms::Button^ but_multiply;

        private: System::Windows::Forms::Button^ button10;
        private: System::Windows::Forms::Button^ button11;
        private: System::Windows::Forms::Button^ button12;
        private: System::Windows::Forms::Button^ but_minys;

        private: System::Windows::Forms::Button^ button14;
        private: System::Windows::Forms::Button^ button15;
        private: System::Windows::Forms::Button^ button16;
        private: System::Windows::Forms::Button^ but_plus;

        private: System::Windows::Forms::Button^ button18;
        private: System::Windows::Forms::Button^ button19;
        private: System::Windows::Forms::Button^ button20;
        private: System::Windows::Forms::Button^ but_equally;
        private: System::Windows::Forms::Button^ but_comma;
        private: System::Windows::Forms::Button^ button23;

        private:float first_num;
        private:char user_action = ' ';//защита прекращение действий при значении пробел

        protected:

        protected:


        protected:

        protected:

        private:
            /// <summary>
            /// Обязательная переменная конструктора.
            /// </summary>
            System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
            /// <summary>
            /// Требуемый метод для поддержки конструктора — не изменяйте 
            /// содержимое этого метода с помощью редактора кода.
            /// </summary>
            void InitializeComponent(void)
            {
                System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
                this->but_percent = (gcnew System::Windows::Forms::Button());
                this->label_result = (gcnew System::Windows::Forms::Label());
                this->but_clearing = (gcnew System::Windows::Forms::Button());
                this->but_minys_plus = (gcnew System::Windows::Forms::Button());
                this->but_divide = (gcnew System::Windows::Forms::Button());
                this->but_multiply = (gcnew System::Windows::Forms::Button());
                this->button10 = (gcnew System::Windows::Forms::Button());
                this->button11 = (gcnew System::Windows::Forms::Button());
                this->button12 = (gcnew System::Windows::Forms::Button());
                this->but_minys = (gcnew System::Windows::Forms::Button());
                this->button14 = (gcnew System::Windows::Forms::Button());
                this->button15 = (gcnew System::Windows::Forms::Button());
                this->button16 = (gcnew System::Windows::Forms::Button());
                this->but_plus = (gcnew System::Windows::Forms::Button());
                this->button18 = (gcnew System::Windows::Forms::Button());
                this->button19 = (gcnew System::Windows::Forms::Button());
                this->button20 = (gcnew System::Windows::Forms::Button());
                this->but_equally = (gcnew System::Windows::Forms::Button());
                this->but_comma = (gcnew System::Windows::Forms::Button());
                this->button23 = (gcnew System::Windows::Forms::Button());
                this->SuspendLayout();
                // 
                // but_percent
                // 
                this->but_percent->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_percent->BackColor = System::Drawing::Color::CornflowerBlue;
                this->but_percent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                this->but_percent->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_percent->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_percent->Location = System::Drawing::Point(9, 146);
                this->but_percent->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_percent->Name = L"but_percent";
                this->but_percent->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_percent->Size = System::Drawing::Size(80, 70);
                this->but_percent->TabIndex = 2;
                this->but_percent->Text = L"%";
                this->but_percent->UseVisualStyleBackColor = true;
                this->but_percent->UseWaitCursor = true;
                this->but_percent->Click += gcnew System::EventHandler(this, &MyForm::but_percent_Click);
                // 
                // label_result
                // 
                this->label_result->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->label_result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
                this->label_result->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->label_result->ForeColor = System::Drawing::Color::White;
                this->label_result->Location = System::Drawing::Point(14, 49);
                this->label_result->Name = L"label_result";
                this->label_result->Size = System::Drawing::Size(326, 74);
                this->label_result->TabIndex = 3;
                this->label_result->Text = L"0";
                this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
                this->label_result->UseWaitCursor = true;
                this->label_result->Click += gcnew System::EventHandler(this, &MyForm::label_result_Click);
                // 
                // but_clearing
                // 
                this->but_clearing->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_clearing->BackColor = System::Drawing::Color::OrangeRed;
                this->but_clearing->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_clearing->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_clearing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_clearing->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_clearing->Location = System::Drawing::Point(173, 146);
                this->but_clearing->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_clearing->Name = L"but_clearing";
                this->but_clearing->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_clearing->Size = System::Drawing::Size(80, 70);
                this->but_clearing->TabIndex = 5;
                this->but_clearing->Text = L"AC";
                this->but_clearing->UseVisualStyleBackColor = true;
                this->but_clearing->UseWaitCursor = true;
                this->but_clearing->Click += gcnew System::EventHandler(this, &MyForm::but_clearing_Click);
                // 
                // but_minys_plus
                // 
                this->but_minys_plus->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_minys_plus->BackColor = System::Drawing::Color::CornflowerBlue;
                this->but_minys_plus->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_minys_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_minys_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_minys_plus->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_minys_plus->Location = System::Drawing::Point(91, 146);
                this->but_minys_plus->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_minys_plus->Name = L"but_minys_plus";
                this->but_minys_plus->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_minys_plus->Size = System::Drawing::Size(80, 70);
                this->but_minys_plus->TabIndex = 6;
                this->but_minys_plus->Text = L"+/-";
                this->but_minys_plus->UseVisualStyleBackColor = true;
                this->but_minys_plus->UseWaitCursor = true;
                this->but_minys_plus->Click += gcnew System::EventHandler(this, &MyForm::but_minys_plus_Click);
                // 
                // but_divide
                // 
                this->but_divide->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_divide->BackColor = System::Drawing::Color::Goldenrod;
                this->but_divide->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_divide->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_divide->Location = System::Drawing::Point(255, 146);
                this->but_divide->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_divide->Name = L"but_divide";
                this->but_divide->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_divide->Size = System::Drawing::Size(80, 70);
                this->but_divide->TabIndex = 10;
                this->but_divide->Text = L"/";
                this->but_divide->UseVisualStyleBackColor = true;
                this->but_divide->UseWaitCursor = true;
                this->but_divide->Click += gcnew System::EventHandler(this, &MyForm::but_divide_Click);
                // 
                // but_multiply
                // 
                this->but_multiply->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_multiply->BackColor = System::Drawing::Color::Goldenrod;
                this->but_multiply->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_multiply->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_multiply->Location = System::Drawing::Point(255, 219);
                this->but_multiply->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_multiply->Name = L"but_multiply";
                this->but_multiply->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_multiply->Size = System::Drawing::Size(80, 70);
                this->but_multiply->TabIndex = 14;
                this->but_multiply->Text = L"*";
                this->but_multiply->UseVisualStyleBackColor = true;
                this->but_multiply->UseWaitCursor = true;
                this->but_multiply->Click += gcnew System::EventHandler(this, &MyForm::but_multiply_Click);
                // 
                // button10
                // 
                this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button10->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button10->Location = System::Drawing::Point(173, 219);
                this->button10->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button10->Name = L"button10";
                this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button10->Size = System::Drawing::Size(80, 70);
                this->button10->TabIndex = 13;
                this->button10->Text = L"9";
                this->button10->UseVisualStyleBackColor = true;
                this->button10->UseWaitCursor = true;
                this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button11
                // 
                this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button11->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button11->Location = System::Drawing::Point(91, 219);
                this->button11->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button11->Name = L"button11";
                this->button11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button11->Size = System::Drawing::Size(80, 70);
                this->button11->TabIndex = 12;
                this->button11->Text = L"8";
                this->button11->UseVisualStyleBackColor = true;
                this->button11->UseWaitCursor = true;
                this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button12
                // 
                this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button12->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button12->Location = System::Drawing::Point(9, 219);
                this->button12->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button12->Name = L"button12";
                this->button12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button12->Size = System::Drawing::Size(80, 70);
                this->button12->TabIndex = 11;
                this->button12->Text = L"7";
                this->button12->UseVisualStyleBackColor = true;
                this->button12->UseWaitCursor = true;
                this->button12->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // but_minys
                // 
                this->but_minys->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_minys->BackColor = System::Drawing::Color::Goldenrod;
                this->but_minys->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_minys->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_minys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_minys->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_minys->Location = System::Drawing::Point(255, 291);
                this->but_minys->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_minys->Name = L"but_minys";
                this->but_minys->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_minys->Size = System::Drawing::Size(80, 70);
                this->but_minys->TabIndex = 18;
                this->but_minys->Text = L"-";
                this->but_minys->UseVisualStyleBackColor = true;
                this->but_minys->UseWaitCursor = true;
                this->but_minys->Click += gcnew System::EventHandler(this, &MyForm::but_minys_Click);
                // 
                // button14
                // 
                this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button14->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button14->Location = System::Drawing::Point(173, 291);
                this->button14->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button14->Name = L"button14";
                this->button14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button14->Size = System::Drawing::Size(80, 70);
                this->button14->TabIndex = 17;
                this->button14->Text = L"6";
                this->button14->UseVisualStyleBackColor = true;
                this->button14->UseWaitCursor = true;
                this->button14->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button15
                // 
                this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button15->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button15->Location = System::Drawing::Point(91, 291);
                this->button15->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button15->Name = L"button15";
                this->button15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button15->Size = System::Drawing::Size(80, 70);
                this->button15->TabIndex = 16;
                this->button15->Text = L"5";
                this->button15->UseVisualStyleBackColor = true;
                this->button15->UseWaitCursor = true;
                this->button15->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button16
                // 
                this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button16->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button16->Location = System::Drawing::Point(9, 291);
                this->button16->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button16->Name = L"button16";
                this->button16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button16->Size = System::Drawing::Size(80, 70);
                this->button16->TabIndex = 15;
                this->button16->Text = L"4";
                this->button16->UseVisualStyleBackColor = true;
                this->button16->UseWaitCursor = true;
                this->button16->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // but_plus
                // 
                this->but_plus->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_plus->BackColor = System::Drawing::Color::Goldenrod;
                this->but_plus->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_plus->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_plus->Location = System::Drawing::Point(255, 363);
                this->but_plus->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_plus->Name = L"but_plus";
                this->but_plus->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_plus->Size = System::Drawing::Size(80, 70);
                this->but_plus->TabIndex = 22;
                this->but_plus->Text = L"+";
                this->but_plus->UseVisualStyleBackColor = true;
                this->but_plus->UseWaitCursor = true;
                this->but_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
                // 
                // button18
                // 
                this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button18->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button18->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button18->Location = System::Drawing::Point(173, 363);
                this->button18->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button18->Name = L"button18";
                this->button18->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button18->Size = System::Drawing::Size(80, 70);
                this->button18->TabIndex = 21;
                this->button18->Text = L"3";
                this->button18->UseVisualStyleBackColor = true;
                this->button18->UseWaitCursor = true;
                this->button18->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button19
                // 
                this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button19->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button19->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button19->Location = System::Drawing::Point(91, 363);
                this->button19->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button19->Name = L"button19";
                this->button19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button19->Size = System::Drawing::Size(80, 70);
                this->button19->TabIndex = 20;
                this->button19->Text = L"2";
                this->button19->UseVisualStyleBackColor = true;
                this->button19->UseWaitCursor = true;
                this->button19->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // button20
                // 
                this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button20->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button20->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button20->Location = System::Drawing::Point(9, 363);
                this->button20->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button20->Name = L"button20";
                this->button20->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button20->Size = System::Drawing::Size(80, 70);
                this->button20->TabIndex = 19;
                this->button20->Text = L"1";
                this->button20->UseVisualStyleBackColor = true;
                this->button20->UseWaitCursor = true;
                this->button20->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // but_equally
                // 
                this->but_equally->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_equally->BackColor = System::Drawing::Color::ForestGreen;
                this->but_equally->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_equally->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_equally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_equally->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_equally->Location = System::Drawing::Point(173, 436);
                this->but_equally->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_equally->Name = L"but_equally";
                this->but_equally->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_equally->Size = System::Drawing::Size(162, 70);
                this->but_equally->TabIndex = 26;
                this->but_equally->Text = L"=";
                this->but_equally->UseVisualStyleBackColor = true;
                this->but_equally->UseWaitCursor = true;
                this->but_equally->Click += gcnew System::EventHandler(this, &MyForm::but_equally_Click);
                // 
                // but_comma
                // 
                this->but_comma->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->but_comma->BackColor = System::Drawing::Color::CornflowerBlue;
                this->but_comma->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->but_comma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->but_comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->but_comma->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->but_comma->Location = System::Drawing::Point(9, 436);
                this->but_comma->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->but_comma->Name = L"but_comma";
                this->but_comma->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->but_comma->Size = System::Drawing::Size(80, 70);
                this->but_comma->TabIndex = 25;
                this->but_comma->Text = L",";
                this->but_comma->UseVisualStyleBackColor = true;
                this->but_comma->UseWaitCursor = true;
                this->but_comma->Click += gcnew System::EventHandler(this, &MyForm::but_comma_Click);
                // 
                // button23
                // 
                this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
                this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
                this->button23->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(204)));
                this->button23->ForeColor = System::Drawing::SystemColors::ButtonFace;
                this->button23->Location = System::Drawing::Point(91, 436);
                this->button23->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
                this->button23->Name = L"button23";
                this->button23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                this->button23->Size = System::Drawing::Size(80, 70);
                this->button23->TabIndex = 24;
                this->button23->Text = L"0";
                this->button23->UseVisualStyleBackColor = true;
                this->button23->UseWaitCursor = true;
                this->button23->Click += gcnew System::EventHandler(this, &MyForm::btn_Number_Click);
                // 
                // MyForm
                // 
                this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
                this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                this->AutoSize = true;
                this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
                    static_cast<System::Int32>(static_cast<System::Byte>(179)));
                this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                this->ClientSize = System::Drawing::Size(344, 511);
                this->Controls->Add(this->but_equally);
                this->Controls->Add(this->but_comma);
                this->Controls->Add(this->button23);
                this->Controls->Add(this->but_plus);
                this->Controls->Add(this->button18);
                this->Controls->Add(this->button19);
                this->Controls->Add(this->button20);
                this->Controls->Add(this->but_minys);
                this->Controls->Add(this->button14);
                this->Controls->Add(this->button15);
                this->Controls->Add(this->button16);
                this->Controls->Add(this->but_multiply);
                this->Controls->Add(this->button10);
                this->Controls->Add(this->button11);
                this->Controls->Add(this->button12);
                this->Controls->Add(this->but_divide);
                this->Controls->Add(this->but_minys_plus);
                this->Controls->Add(this->but_clearing);
                this->Controls->Add(this->but_percent);
                this->Controls->Add(this->label_result);
                this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
                this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
                this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
                this->MinimizeBox = false;
                this->MinimumSize = System::Drawing::Size(360, 550);
                this->Name = L"MyForm";
                this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                this->Text = L"Калькулятор 1.0";
                this->UseWaitCursor = true;
                this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
                this->ResumeLayout(false);

            }
#pragma endregion


            /*private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
                this->Close();
            }*/
        private: System::Void btn_Number_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            Button^ button = safe_cast<Button^>(sender);//считывание нажатой кнопки 
            if (this->label_result->Text == "0")// если ноль то ввод числа с кнопки
                this->label_result->Text = button->Text;//помещение текста из кнопки в текст
            else
                this->label_result->Text = this->label_result->Text + button->Text;//добавление текста к прошлому
        }
        private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e)
        {
            math_action('+');
        }
        private: System::Void but_minys_Click(System::Object^ sender, System::EventArgs^ e)
        {
            math_action('-');
        }
        private: System::Void but_multiply_Click(System::Object^ sender, System::EventArgs^ e)
        {
            math_action('*');//передаем знак в math_action
        }
        private: System::Void but_divide_Click(System::Object^ sender, System::EventArgs^ e)
        {
            math_action('/');
        }
        private: System::Void math_action(char action)
        {
            this->first_num = System::Convert::ToDouble(this->label_result->Text);//помещаем в паять то что написано в циферблате
            this->user_action = action;//записываем математическое дествий
            this->label_result->Text = "0";//выводит 0 на циферблат после математического действия
        }
        private: System::Void but_equally_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (user_action == ' ')//защита прекращение действий при значении пробел
                return;
            float second = System::Convert::ToDouble(this->label_result->Text);//сохранение второго числа введеного пользователем
            float res;//3я переменная после действия равно

            switch (this->user_action)
            {
            case '+': res = this->first_num + second;
                break;

            case '-': res = this->first_num - second;
                break;

            case '*': res = this->first_num * second;
                break;

            case '%': res = this->first_num * second / 100;
                break;

            case '/':
                if (second == 0)//устранение ошибки деления на 0
                {
                    res = 0;//всплывающее окно ошибки при делении на 0
                    MessageBox::Show(this, "Не делится на 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                else
                    res = this->first_num / second;
                break;
            }
            this->label_result->Text = System::Convert::ToString(res);//выводим результат на циферблат
        }
        private: System::Void but_clearing_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->label_result->Text = "0";//сбрасываем значение
            this->first_num = 0;// задаем значение по умолчанию
            this->user_action = ' ';// задаем значение по умолчанию

        }
        private: System::Void but_minys_plus_Click(System::Object^ sender, System::EventArgs^ e)
        {
            float num = System::Convert::ToDouble(this->label_result->Text);
            num *= -1;//умножаем на -1 для смены знака
            this->label_result->Text = System::Convert::ToString(num);//водим новое значение
        }
        private: System::Void but_percent_Click(System::Object^ sender, System::EventArgs^ e)
        {
            math_action('%');
        }
        private: System::Void but_comma_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ text = this->label_result->Text;
            if (!text->Contains(",")) //проверка есть ли уже запятая 
                this->label_result->Text = text + ","; //добавление запятой к числу

        }

        private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
        private: System::Void label_result_Click(System::Object^ sender, System::EventArgs^ e) {}
        };
    }
