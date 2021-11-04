#include <msclr\marshal_cppstd.h>
#include<string>
#include"Header.h"
System::String^ toSystemString(std::string value) {
	return gcnew System::String(value.c_str());
}
std::string toStdString(System::String^ value) {
	msclr::interop::marshal_context context;
	return context.marshal_as<std::string>(value);
}
namespace Project81 {
	calculator cal;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}












	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;

	private: System::Windows::Forms::Button^  button17;


	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;

	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;

	private: System::Windows::Forms::Button^  button28;

	private: System::Windows::Forms::Button^  button30;

	private: System::Windows::Forms::Button^  button32;



	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;

	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btn7;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button24;















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(398, 243);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 50);
			this->button12->TabIndex = 0;
			this->button12->Text = L"e";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(143, 99);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 50);
			this->button13->TabIndex = 0;
			this->button13->Text = L"c";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(91, 99);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 50);
			this->button14->TabIndex = 0;
			this->button14->Text = L"⌫";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(450, 243);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 50);
			this->button15->TabIndex = 0;
			this->button15->Text = L"π";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(248, 243);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 50);
			this->button17->TabIndex = 0;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(398, 100);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 50);
			this->button20->TabIndex = 0;
			this->button20->Text = L"sin";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(450, 100);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 50);
			this->button21->TabIndex = 0;
			this->button21->Text = L"cos";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(450, 195);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(55, 50);
			this->button22->TabIndex = 0;
			this->button22->Text = L"ln";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(502, 100);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(55, 50);
			this->button23->TabIndex = 0;
			this->button23->Text = L"tan";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(450, 147);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(55, 50);
			this->button25->TabIndex = 0;
			this->button25->Text = L"sqrt";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(502, 147);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(55, 50);
			this->button26->TabIndex = 0;
			this->button26->Text = L"log";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(398, 146);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(55, 50);
			this->button28->TabIndex = 0;
			this->button28->Text = L"cot";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(502, 195);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(55, 50);
			this->button30->TabIndex = 0;
			this->button30->Text = L"fact";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(194, 99);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(55, 50);
			this->button32->TabIndex = 0;
			this->button32->Text = L"(";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(398, 195);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(55, 50);
			this->button36->TabIndex = 0;
			this->button36->Text = L"pow";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(248, 99);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(55, 50);
			this->button37->TabIndex = 0;
			this->button37->Text = L")";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(502, 243);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(55, 50);
			this->button39->TabIndex = 0;
			this->button39->TabStop = false;
			this->button39->Text = L"logR";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageKey = L"(none)";
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(622, 59);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(1084, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(80, 242);
			this->panel1->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(143, 146);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 50);
			this->button8->TabIndex = 0;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(194, 146);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 50);
			this->button6->TabIndex = 0;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(248, 146);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 50);
			this->button7->TabIndex = 0;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(302, 243);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 50);
			this->button10->TabIndex = 0;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(302, 195);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 50);
			this->button11->TabIndex = 0;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(91, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 50);
			this->button5->TabIndex = 0;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(248, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 50);
			this->button4->TabIndex = 0;
			this->button4->Text = L"5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(194, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 50);
			this->button3->TabIndex = 0;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(194, 243);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(55, 50);
			this->button38->TabIndex = 0;
			this->button38->Text = L".";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(302, 99);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 50);
			this->button19->TabIndex = 0;
			this->button19->Text = L"/";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(302, 147);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 50);
			this->button18->TabIndex = 0;
			this->button18->Text = L"*";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(143, 195);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 50);
			this->button9->TabIndex = 0;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(91, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 50);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(143, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(91, 243);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(55, 50);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"0";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::Click_operator);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(1265, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(80, 242);
			this->panel2->TabIndex = 2;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(554, 146);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 50);
			this->button16->TabIndex = 3;
			this->button16->Text = L"powR";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(554, 195);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(55, 50);
			this->button24->TabIndex = 4;
			this->button24->Text = L"sqrtR";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(654, 311);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn7);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::Operator1_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstnum;
		double secondnum;
		//double result;
		double a;
		String^ textbox;
		String^ result;
		char operation;
		double argument1;
		double argument2;


	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		textbox = label1->Text;
		std::string a = toStdString(textbox);
		result = toSystemString(cal.big_numbers_calculate(a));
		std::string resultsin = toStdString(result);
		argument1 = std::stod(resultsin);
		label1->Text = " ";
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.cot(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	argument2 = std::stod(resultsin);
	std::string result1 = std::to_string(cal.log(argument1,argument2));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!label1->Text->Contains("."))
	{
	label1->Text = label1->Text + " . ";
	}
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 670;
	MyForm::Height = 350;
	label1->Width = 622;
	label1->Height = 59;
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = " ";
}

private: System::Void Operator1_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		textbox = label1->Text;
		std::string a = toStdString( textbox);
		result = toSystemString(cal.big_numbers_calculate(a));
		label1->Text = " ";
		label1->Text = result;
	}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void Button_Click1(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = label1->Text + "3.1415";
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = label1->Text + "2.7182";
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
		std::string a = toStdString( textbox);
		result = toSystemString(cal.big_numbers_calculate(a));
		std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.sin(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.cos(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.tan(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.fact(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	double argument = std::stod(resultsin);
	std::string result1 = std::to_string(cal.ln(argument));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void Click_Operators(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void Click_operator(System::Object^  sender, System::EventArgs^  e) {
	Button^numbers = safe_cast<Button^>(sender);
	if (label1->Text == "0")
	{
		label1->Text = numbers->Text;
	}
	else
	{
		label1->Text = label1->Text + numbers->Text;
	}
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = label1->Text->Remove(label1->Text->Length - 1);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	 argument1 = std::stod(resultsin);
	label1->Text = " ";
}

private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	argument1 = std::stod(resultsin);
	label1->Text = " ";
}
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	argument2 = std::stod(resultsin);
	std::string result1 = std::to_string(cal.tavan(argument1, argument2));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	textbox = label1->Text;
	std::string a = toStdString(textbox);
	result = toSystemString(cal.big_numbers_calculate(a));
	std::string resultsin = toStdString(result);
	argument2 = std::stod(resultsin);
	std::string result1 = std::to_string(cal.sqrt(argument1, argument2));
	result = toSystemString(result1);
	label1->Text = " ";
	label1->Text = result;
}
};
}
