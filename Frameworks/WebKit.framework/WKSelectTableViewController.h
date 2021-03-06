/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKContentView, WKSelectPopover;

@interface WKSelectTableViewController : UITableViewController <UIKeyInput> {
    BOOL _allowsMultipleSelection;
    WKContentView *_contentView;
    float _fontSize;
    float _maximumTextWidth;
    int _numberOfSections;
    WKSelectPopover *_popover;
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    int _textAlignment;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property int keyboardAppearance;
@property int keyboardType;
@property WKSelectPopover * popover;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property int spellCheckingType;
@property(readonly) Class superclass;

- (void)deleteBackward;
- (struct OptionItem { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; boolx2; boolx3; boolx4; int x5; }*)findItemAt:(id)arg1;
- (int)findItemIndexAt:(id)arg1;
- (BOOL)hasText;
- (id)initWithView:(id)arg1 hasGroups:(BOOL)arg2;
- (void)insertText:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)popover;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; boolx2; boolx3; boolx4; int x5; }*)arg2;
- (void)setPopover:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
