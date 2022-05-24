#pragma once
#include <string>
#include <stdexcept>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 

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
	private: System::Windows::Forms::Label^ Title;
	protected:
	private: System::Windows::Forms::Label^ Monday;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ LunchIn;
	private: System::Windows::Forms::Label^ LunchOut;
	private: System::Windows::Forms::TextBox^ TimeInText;
	private: System::Windows::Forms::TextBox^ LunchInText;
	private: System::Windows::Forms::TextBox^ LunchOutText;
	private: System::Windows::Forms::TextBox^ TimeOutText;
	private: System::Windows::Forms::TextBox^ TimeInText2;
	private: System::Windows::Forms::TextBox^ LunchInText2;
	private: System::Windows::Forms::TextBox^ LunchOutText2;
	private: System::Windows::Forms::TextBox^ TimeOutText2;
	private: System::Windows::Forms::Button^ Submit;
	private: System::Windows::Forms::TextBox^ TotalHoursText;

	private: System::Windows::Forms::TextBox^ TotalWage;
	private: System::Windows::Forms::TextBox^ TotalSalary;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Monday = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LunchIn = (gcnew System::Windows::Forms::Label());
			this->LunchOut = (gcnew System::Windows::Forms::Label());
			this->TimeInText = (gcnew System::Windows::Forms::TextBox());
			this->LunchInText = (gcnew System::Windows::Forms::TextBox());
			this->LunchOutText = (gcnew System::Windows::Forms::TextBox());
			this->TimeOutText = (gcnew System::Windows::Forms::TextBox());
			this->TimeInText2 = (gcnew System::Windows::Forms::TextBox());
			this->LunchInText2 = (gcnew System::Windows::Forms::TextBox());
			this->LunchOutText2 = (gcnew System::Windows::Forms::TextBox());
			this->TimeOutText2 = (gcnew System::Windows::Forms::TextBox());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->TotalHoursText = (gcnew System::Windows::Forms::TextBox());
			this->TotalWage = (gcnew System::Windows::Forms::TextBox());
			this->TotalSalary = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BackColor = System::Drawing::Color::LightCyan;
			this->Title->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(438, 34);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(142, 26);
			this->Title->TabIndex = 0;
			this->Title->Text = L"TimeSheet ";
			// 
			// Monday
			// 
			this->Monday->AutoSize = true;
			this->Monday->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday->Location = System::Drawing::Point(35, 210);
			this->Monday->Name = L"Monday";
			this->Monday->Size = System::Drawing::Size(111, 26);
			this->Monday->TabIndex = 1;
			this->Monday->Text = L"Monday:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tuesday: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(231, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Time In ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(814, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Time Out";
			// 
			// LunchIn
			// 
			this->LunchIn->AutoSize = true;
			this->LunchIn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LunchIn->Location = System::Drawing::Point(425, 151);
			this->LunchIn->Name = L"LunchIn";
			this->LunchIn->Size = System::Drawing::Size(102, 24);
			this->LunchIn->TabIndex = 5;
			this->LunchIn->Text = L"Lunch In";
			// 
			// LunchOut
			// 
			this->LunchOut->AutoSize = true;
			this->LunchOut->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LunchOut->Location = System::Drawing::Point(613, 151);
			this->LunchOut->Name = L"LunchOut";
			this->LunchOut->Size = System::Drawing::Size(117, 24);
			this->LunchOut->TabIndex = 6;
			this->LunchOut->Text = L"Lunch Out";
			// 
			// TimeInText
			// 
			this->TimeInText->Location = System::Drawing::Point(220, 210);
			this->TimeInText->Name = L"TimeInText";
			this->TimeInText->Size = System::Drawing::Size(100, 20);
			this->TimeInText->TabIndex = 7;
			// 
			// LunchInText
			// 
			this->LunchInText->Location = System::Drawing::Point(429, 210);
			this->LunchInText->Name = L"LunchInText";
			this->LunchInText->Size = System::Drawing::Size(100, 20);
			this->LunchInText->TabIndex = 8;
			// 
			// LunchOutText
			// 
			this->LunchOutText->Location = System::Drawing::Point(617, 210);
			this->LunchOutText->Name = L"LunchOutText";
			this->LunchOutText->Size = System::Drawing::Size(100, 20);
			this->LunchOutText->TabIndex = 9;
			// 
			// TimeOutText
			// 
			this->TimeOutText->Location = System::Drawing::Point(818, 210);
			this->TimeOutText->Name = L"TimeOutText";
			this->TimeOutText->Size = System::Drawing::Size(100, 20);
			this->TimeOutText->TabIndex = 10;
			// 
			// TimeInText2
			// 
			this->TimeInText2->Location = System::Drawing::Point(220, 425);
			this->TimeInText2->Name = L"TimeInText2";
			this->TimeInText2->Size = System::Drawing::Size(100, 20);
			this->TimeInText2->TabIndex = 11;
			// 
			// LunchInText2
			// 
			this->LunchInText2->Location = System::Drawing::Point(429, 425);
			this->LunchInText2->Name = L"LunchInText2";
			this->LunchInText2->Size = System::Drawing::Size(100, 20);
			this->LunchInText2->TabIndex = 12;
			// 
			// LunchOutText2
			// 
			this->LunchOutText2->Location = System::Drawing::Point(617, 425);
			this->LunchOutText2->Name = L"LunchOutText2";
			this->LunchOutText2->Size = System::Drawing::Size(100, 20);
			this->LunchOutText2->TabIndex = 13;
			// 
			// TimeOutText2
			// 
			this->TimeOutText2->Location = System::Drawing::Point(820, 425);
			this->TimeOutText2->Name = L"TimeOutText2";
			this->TimeOutText2->Size = System::Drawing::Size(100, 20);
			this->TimeOutText2->TabIndex = 14;
			// 
			// Submit
			// 
			this->Submit->Location = System::Drawing::Point(40, 536);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(110, 91);
			this->Submit->TabIndex = 15;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = true;
			this->Submit->Click += gcnew System::EventHandler(this, &MyForm::Submit_Click);
			// 
			// TotalHoursText
			// 
			this->TotalHoursText->Location = System::Drawing::Point(220, 607);
			this->TotalHoursText->Name = L"TotalHoursText";
			this->TotalHoursText->ReadOnly = true;
			this->TotalHoursText->Size = System::Drawing::Size(100, 20);
			this->TotalHoursText->TabIndex = 16;
			// 
			// TotalWage
			// 
			this->TotalWage->Location = System::Drawing::Point(514, 607);
			this->TotalWage->Name = L"TotalWage";
			this->TotalWage->ReadOnly = true;
			this->TotalWage->Size = System::Drawing::Size(100, 20);
			this->TotalWage->TabIndex = 17;
			this->TotalWage->Text = L"$15.66";
			// 
			// TotalSalary
			// 
			this->TotalSalary->Location = System::Drawing::Point(820, 607);
			this->TotalSalary->Name = L"TotalSalary";
			this->TotalSalary->ReadOnly = true;
			this->TotalSalary->Size = System::Drawing::Size(100, 20);
			this->TotalSalary->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(226, 589);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 15);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Total Hours: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(520, 589);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 15);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Total Wage:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(821, 589);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 15);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Total Salary: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 666);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TotalSalary);
			this->Controls->Add(this->TotalWage);
			this->Controls->Add(this->TotalHoursText);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->TimeOutText2);
			this->Controls->Add(this->LunchOutText2);
			this->Controls->Add(this->LunchInText2);
			this->Controls->Add(this->TimeInText2);
			this->Controls->Add(this->TimeOutText);
			this->Controls->Add(this->LunchOutText);
			this->Controls->Add(this->LunchInText);
			this->Controls->Add(this->TimeInText);
			this->Controls->Add(this->LunchOut);
			this->Controls->Add(this->LunchIn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Monday);
			this->Controls->Add(this->Title);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double totalHours; 
		double totalSalary; 
		double totalWage = 15.66; 
		String^ myStr = "$"; 
		String^ myStr2 = " Hours"; 
private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{


		DateTime startTimeMonday;
		DateTime endTimeMonday;
		DateTime startTimeTuesday;
		DateTime endTimeTuesday;
		DateTime startTimeLunchMonday;
		DateTime endTimeLunchMonday;
		DateTime startTimeLunchTuesday;
		DateTime endTimeLunchTuesday;

		startTimeMonday = Convert::ToDateTime(this->TimeInText->Text);
		endTimeMonday = Convert::ToDateTime(this->TimeOutText->Text);
		startTimeTuesday = Convert::ToDateTime(this->TimeInText2->Text);
		endTimeTuesday = Convert::ToDateTime(this->TimeOutText2->Text);
		startTimeLunchMonday = Convert::ToDateTime(this->LunchInText->Text);
		endTimeLunchMonday = Convert::ToDateTime(this->LunchOutText->Text);
		startTimeLunchTuesday = Convert::ToDateTime(this->LunchInText2->Text);
		endTimeLunchTuesday = Convert::ToDateTime(this->LunchOutText2->Text);

		TimeSpan timeBetweenStartAndEnd;
		TimeSpan timeBetweenStartAndEnd2;
		TimeSpan lunchBetweenStartAndEnd;
		TimeSpan lunchbetweenStartAndEnd2;

		timeBetweenStartAndEnd = endTimeMonday - startTimeMonday;
		timeBetweenStartAndEnd2 = endTimeTuesday - startTimeTuesday;
		lunchBetweenStartAndEnd = endTimeLunchMonday - startTimeLunchMonday;
		lunchbetweenStartAndEnd2 = endTimeLunchTuesday - startTimeLunchTuesday;

		totalHours = (timeBetweenStartAndEnd.Hours + timeBetweenStartAndEnd2.Hours) - (lunchBetweenStartAndEnd.Hours + lunchbetweenStartAndEnd2.Hours);

		this->TotalHoursText->Text = Convert::ToString(totalHours + myStr2);

		totalSalary = totalWage * totalHours;


		this->TotalSalary->Text = Convert::ToString(myStr + totalSalary);
	}
	catch (FormatException^ myException)
	{
		MessageBox::Show("Incorrect Format"); 
	}
	finally
	{
		MessageBox::Show("Have a Great Day!");
	}
	 
}
};
}
