/*************************************************************************/
/*  gdre_npck_dlg.h                                                       */
/*************************************************************************/

#ifndef GODOT_RE_NPCK_DLG_H
#define GODOT_RE_NPCK_DLG_H

#include "core/map.h"
#include "core/resource.h"

#include "scene/gui/control.h"
#include "scene/gui/dialogs.h"
#include "scene/gui/file_dialog.h"
#include "scene/gui/item_list.h"
#include "scene/gui/line_edit.h"
#include "scene/gui/spin_box.h"
#include "scene/gui/text_edit.h"

#ifdef TOOLS_ENABLED
#include "editor/editor_node.h"
#else
#define EDSCALE 1.0
#endif

class NewPackDialog : public AcceptDialog {
	GDCLASS(NewPackDialog, AcceptDialog)

	TextEdit *message;

	SpinBox *ver_base;
	SpinBox *ver_major;
	SpinBox *ver_minor;
	SpinBox *ver_rev;

	LineEdit *wmark;

protected:
	void _notification(int p_notification);
	static void _bind_methods();

public:
	void set_message(const String &p_text);

	int get_version_pack() const;
	int get_version_major() const;
	int get_version_minor() const;
	int get_version_rev() const;
	String get_watermark() const;

	NewPackDialog();
	~NewPackDialog();
};

#endif
