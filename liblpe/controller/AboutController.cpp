/******************************************************************************
/ LivePresetsExtension
/
/ Window showing information about this extension
/
/ Copyright (c) 2020 and later Dr. med. Frederik Bertling
/
/
/ Permission is hereby granted, free of charge, to any person obtaining a copy
/ of this software and associated documentation files (the "Software"), to deal
/ in the Software without restriction, including without limitation the rights to
/ use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
/ of the Software, and to permit persons to whom the Software is furnished to
/ do so, subject to the following conditions:
/
/ The above copyright notice and this permission notice shall be included in all
/ copies or substantial portions of the Software.
/
/ THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
/ EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
/ OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
/ NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
/ HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
/ WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
/ FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
/ OTHER DEALINGS IN THE SOFTWARE.
/
******************************************************************************/

#include <liblpe/controller/AboutController.h>
#include <liblpe/resources/resource.h>
#include <wdlstring.h>
#include <version.h>

/**
 * Window showing about information like version and build date.
 */
AboutController::AboutController() : DockWindow(IDD_ABOUT, "LivePresetsExtension", "AboutController", 0) {
}

void AboutController::onInitDlg() {
    SetDlgItemText(mHwnd, IDC_ABOUT_VERSION, LPE_BUILD_VERSION);
    SetDlgItemText(mHwnd, IDC_ABOUT_DATE, LPE_BUILD_DATE);
}