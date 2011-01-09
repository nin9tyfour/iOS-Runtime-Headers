/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, UIModalView;



@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate>
{
    struct __CFDictionary { } *_sheets;
    UIModalView *_sheet;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    NSInteger _actionToPerform;
}


- (id)initWithDelegate:(id)arg1;
- (NSInteger)panelType;
- (NSInteger)panelState;
- (NSInteger)pausesPages;
- (BOOL)disablesStatusBarPress;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)hideSheet;
- (void)didDismissAlertSheet:(id)arg1;
- (void)tableSelectionDidChange:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)dealloc;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3;
- (void)setDelegate:(id)arg1;

@end