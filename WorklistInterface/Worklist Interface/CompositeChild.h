#pragma once
#include <QMainWindow>

namespace ASAP::Worklist::GUI
{
	class CompositeChild : public QMainWindow
	{
		Q_OBJECT
		public:
			CompositeChild(QWidget *parent);

		/*public slots:
			virtual void IsCompositeChild(void) = 0;*/

		signals:
			void RequiresTabSwitch(int tab_id);
	};
}