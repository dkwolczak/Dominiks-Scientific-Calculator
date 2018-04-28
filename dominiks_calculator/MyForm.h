#pragma once

namespace dominiks_calculator {

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

	protected:




	private: System::Windows::Forms::TextBox^  txtDisplay;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Label^  lblShowOP;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbltittle;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->lblShowOP = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbltittle = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::White;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txtDisplay->Location = System::Drawing::Point(12, 72);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->Size = System::Drawing::Size(422, 107);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(12, 562);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(86, 562);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 63);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button3->Location = System::Drawing::Point(160, 562);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 63);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(12, 493);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 63);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->Location = System::Drawing::Point(86, 493);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(68, 63);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(160, 493);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(68, 63);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->Location = System::Drawing::Point(12, 424);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 63);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->Location = System::Drawing::Point(86, 424);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 63);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button9->Location = System::Drawing::Point(160, 424);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(68, 63);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button11->Location = System::Drawing::Point(86, 631);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(68, 63);
			this->button11->TabIndex = 12;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button12->Location = System::Drawing::Point(160, 631);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(68, 63);
			this->button12->TabIndex = 13;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button13->Location = System::Drawing::Point(234, 424);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(68, 63);
			this->button13->TabIndex = 14;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_OP);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button14->Location = System::Drawing::Point(234, 493);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(68, 63);
			this->button14->TabIndex = 15;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_OP);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button15->Location = System::Drawing::Point(234, 562);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(68, 63);
			this->button15->TabIndex = 16;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_OP);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button16->Location = System::Drawing::Point(234, 631);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(68, 63);
			this->button16->TabIndex = 17;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_OP);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button17->Location = System::Drawing::Point(13, 341);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(68, 33);
			this->button17->TabIndex = 19;
			this->button17->Text = L"Exp";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button18->Location = System::Drawing::Point(86, 341);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(68, 33);
			this->button18->TabIndex = 20;
			this->button18->Text = L"Mod";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button19->Location = System::Drawing::Point(160, 341);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(68, 33);
			this->button19->TabIndex = 21;
			this->button19->Text = L"Oct";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button20->Location = System::Drawing::Point(234, 341);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(68, 33);
			this->button20->TabIndex = 22;
			this->button20->Text = L"Tanh";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button21->Location = System::Drawing::Point(13, 302);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(68, 33);
			this->button21->TabIndex = 23;
			this->button21->Text = L"Tan";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button22->Location = System::Drawing::Point(87, 302);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(68, 33);
			this->button22->TabIndex = 24;
			this->button22->Text = L"Hex";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button23->Location = System::Drawing::Point(161, 302);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(68, 33);
			this->button23->TabIndex = 25;
			this->button23->Text = L"Cosh";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button24->Location = System::Drawing::Point(234, 302);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(68, 33);
			this->button24->TabIndex = 26;
			this->button24->Text = L"Cos";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button25->Location = System::Drawing::Point(13, 263);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(68, 33);
			this->button25->TabIndex = 27;
			this->button25->Text = L"Bin";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button26->Location = System::Drawing::Point(13, 224);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(68, 33);
			this->button26->TabIndex = 28;
			this->button26->Text = L"Dec";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button27->Location = System::Drawing::Point(87, 263);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(68, 33);
			this->button27->TabIndex = 28;
			this->button27->Text = L"Log";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button28->Location = System::Drawing::Point(160, 263);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(68, 33);
			this->button28->TabIndex = 29;
			this->button28->Text = L"Sinh";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button29->Location = System::Drawing::Point(234, 263);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(68, 33);
			this->button29->TabIndex = 30;
			this->button29->Text = L"Sin";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button30->Location = System::Drawing::Point(87, 224);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(68, 33);
			this->button30->TabIndex = 31;
			this->button30->Text = L"Sqrt";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button31->Location = System::Drawing::Point(160, 185);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(68, 33);
			this->button31->TabIndex = 32;
			this->button31->Text = L"C";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button32->Location = System::Drawing::Point(234, 185);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(68, 33);
			this->button32->TabIndex = 33;
			this->button32->Text = L"CE";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Centaur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(160, 224);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 33);
			this->button10->TabIndex = 34;
			this->button10->Text = L"π";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button33->Location = System::Drawing::Point(234, 224);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(68, 33);
			this->button33->TabIndex = 35;
			this->button33->Text = L"±";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button34->Location = System::Drawing::Point(12, 631);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(68, 63);
			this->button34->TabIndex = 36;
			this->button34->Text = L"0";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// lblShowOP
			// 
			this->lblShowOP->AutoSize = true;
			this->lblShowOP->Location = System::Drawing::Point(120, 156);
			this->lblShowOP->Name = L"lblShowOP";
			this->lblShowOP->Size = System::Drawing::Size(0, 13);
			this->lblShowOP->TabIndex = 37;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(314, 224);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 355);
			this->listBox1->TabIndex = 38;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(310, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 24);
			this->label1->TabIndex = 39;
			this->label1->Text = L"History:";
			// 
			// lbltittle
			// 
			this->lbltittle->AutoSize = true;
			this->lbltittle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lbltittle->Location = System::Drawing::Point(80, 24);
			this->lbltittle->Name = L"lbltittle";
			this->lbltittle->Size = System::Drawing::Size(261, 31);
			this->lbltittle->TabIndex = 40;
			this->lbltittle->Text = L"Dominik\'s Calculator";
			this->lbltittle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button35->Location = System::Drawing::Point(13, 380);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(68, 33);
			this->button35->TabIndex = 41;
			this->button35->Text = L"x^2";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button36->Location = System::Drawing::Point(87, 380);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(68, 33);
			this->button36->TabIndex = 42;
			this->button36->Text = L"x^3";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button37->Location = System::Drawing::Point(234, 380);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(68, 33);
			this->button37->TabIndex = 43;
			this->button37->Text = L"In x";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button38->Location = System::Drawing::Point(160, 380);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(68, 33);
			this->button38->TabIndex = 43;
			this->button38->Text = L"1/x";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button39->Location = System::Drawing::Point(12, 185);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(68, 33);
			this->button39->TabIndex = 44;
			this->button39->Text = L"%";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click_1);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(442, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(442, 709);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->lbltittle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lblShowOP);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Dominik\'s Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		double a;
		String^ iOperator;
		char iOperation; 


	private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	MyForm::Width = 458;
	MyForm::Height = 748;
	txtDisplay->Width = 422;
	

}
private: System::Void txtDisplay_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{

}

private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) 
{

	Button ^ Numbers = safe_cast<Button^>(sender);

	//Below is the code for the number buttons:
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text; 
	}

}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Clear();

}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtDisplay->Clear();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Below is the decimal point part:
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}

}
private: System::Void Arithmetic_OP(System::Object^  sender, System::EventArgs^  e) {
	//Arithmetic operators (+, -, /, x):
	
	Button ^ OP = safe_cast<Button^>(sender);

	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = OP->Text;
	lblShowOP->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
    // +/- operator code: 
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;

	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	// lblHhowOP->Text =";
	iSecondnum = Double::Parse(txtDisplay->Text);
	if (iOperator == "+")
	{
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));

	}
	else if (iOperator == "-")
	{
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	}
	else if (iOperator == "*")
	{
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	}
	else if (iOperator == "/")
	{
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	}
	else if (iOperator == "Mod")
	{
		int iFirst, iSecond, iResults;
		iFirst = Convert::ToInt32(iFirstnum);
		iSecond = Convert::ToInt32(iSecondnum);
		iResults = iFirst % iSecond;
		txtDisplay->Text = System::Convert::ToString(iResults);
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));

	}
	else if (iOperator == "Exp")
	{
		iResult = (iFirstnum, (1 / iSecondnum));
		txtDisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
		listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	}
}
private: System::Void historyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = ("3.14159265358997632384626433832795");
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	//Log:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("log" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	//Squareroot: 
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));///

}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	//sinh:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("sinh " + "(" + (txtDisplay->Text) + ")");
	a = Math::Sinh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(lblShowOP->Text);

}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	//sin:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("sind " + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);

}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	//Dec - Switch to decimal mode:
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));


}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	//Cosh:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("Cosh " + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	a = Math::Cosh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	lblShowOP->Text = "";
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	//Cos:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("cosd " + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	a = Math::Cos(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	//Bin:
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 2);
	lblShowOP->Text = "";
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	//tan:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString(lblShowOP->Text);
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);

}   


private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	//Tanh:
	a = Double::Parse(txtDisplay->Text);
	lblShowOP->Text = System::Convert::ToString("tanh " + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOP->Text));
	a = Math::Tanh(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	//Hex:
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 16);
	lblShowOP->Text = "";
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	//Oct:
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 8);
	lblShowOP->Text = "";

}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {

	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {

	a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);


}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	        MessageBox::Show("Version: 1.0. | Made by Dominik Kwolczak",
			"About", MessageBoxButtons::OK,
			MessageBoxIcon::Asterisk);


}
	private: System::Void exitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
