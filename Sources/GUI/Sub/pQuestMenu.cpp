#include "pQuestMenu.h"
#include "pGMDPanel.h"
#include "pSUPPanel.h"
#include "pSEMPanel.h"
#include "pEXTPanel.h"
#include "pREMPanel.h"

pQuestMenu::pQuestMenu( wxWindow* parent )
:
QuestMenu( parent )
{
	pGMDPanel* gmdPanel = new pGMDPanel(m_notebook);
	m_notebook->AddPage(gmdPanel, "Text");
	
	pSUPPanel* supPanel = new pSUPPanel(m_notebook);
	m_notebook->AddPage(supPanel, "ItemSupply");
	
	pREMPanel* remPanel = new pREMPanel(m_notebook);
	m_notebook->AddPage(remPanel, "Reward Items");
	
	pSEMPanel* semPanel = new pSEMPanel(m_notebook);
	m_notebook->AddPage(semPanel, "SEM");
	
	pEXTPanel* extPanel = new pEXTPanel(m_notebook);
	m_notebook->AddPage(extPanel, "mib");
}