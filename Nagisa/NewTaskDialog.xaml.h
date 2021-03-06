﻿//
// NewTaskDialog.xaml.h
// NewTaskDialog 类的声明
//

#pragma once

#include "NewTaskDialog.g.h"

namespace Nagisa
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class NewTaskDialog sealed
	{
	public:
		NewTaskDialog();
	private:
		void OKButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args);
		void CancelButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args);
	};
}
