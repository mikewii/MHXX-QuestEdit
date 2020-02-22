#include "Tools/wxBoxHelp.hpp"
#include "Strings/items.hpp"

void setItems(wxComboBox* itemBox) {
	itemBox->Set(wxItems);
	itemBox->AutoComplete(wxItems);
}