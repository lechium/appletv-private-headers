/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, BRGridView, BRTextEntryControl, BRKeyboardControl, BRControl, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRKeyboard : XXUnknownSuperclass {
	BRTextEntryControl *_textEntryControl;	// 4 = 0x4
	BRControl *_baseKeyControl;	// 8 = 0x8
	BRKeyboard *_baseKeyboard;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BRKeyboardControl *_keyboardControl;	// 20 = 0x14
	BRGridView *_mainKeysGrid;	// 24 = 0x18
	NSMutableArray *_mainKeyControls;	// 28 = 0x1c
	BRControl *_actionKeysContainer;	// 32 = 0x20
	NSMutableArray *_actionKeyControls;	// 36 = 0x24
	NSArray *_keyDataDictionaries;	// 40 = 0x28
	BOOL _shouldShowLanguageSwitchButton;	// 44 = 0x2c
	BOOL _constrainCursorToPopupKeyboard;	// 45 = 0x2d
	BOOL _canWrapHorizontally;	// 46 = 0x2e
	BOOL _canWrapVertically;	// 47 = 0x2f
}
@property(retain) BRControl *baseKeyControl;	// G=0x30b685; S=0x30b675; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x30b6a5; S=0x30b695; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x30b631; S=0x30b641; converted property
@property(assign) BOOL canWrapVertically;	// G=0x30b651; S=0x30b661; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x30baa1; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x30b6b9; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x30ba91; converted property
@property(readonly, retain) NSString *name;	// G=0x30b6b5; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x30be61; S=0x30be51; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x30b5a5; S=0x30b5b5; converted property
- (id)init;	// 0x30b351
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x30b471
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x30dd31
- (float)_actionKeysContainerSpacing;	// 0x30e925
- (float)_actionKeysContainerWidth;	// 0x30e921
- (id)_controlForData:(id)data;	// 0x30ded1
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x30dc85
- (void)_createMainAndActionKeyControls;	// 0x30cac1
- (id)_filterRawKeyboardData:(id)data;	// 0x30d2c1
- (id)_glyphDataForImage:(id)image;	// 0x30dd45
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x30d8c1
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x30d6b1
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x30e561
- (Class)_keyboardControlClass;	// 0x30e445
- (id)_keyboardDataFileName;	// 0x30d2bd
- (id)_mainKeyRowPlane;	// 0x30e4e1
- (float)_mainKeysHorizontalSpacing;	// 0x30e55d
- (float)_mainKeysVerticalSpacing;	// 0x30e559
- (int)_numberOfActionKeyColumns;	// 0x30e4dd
- (int)_numberOfActionKeyRows;	// 0x30e4c9
- (int)_numberOfMainKeyColumns;	// 0x30e4c5
- (int)_numberOfMainKeyRows;	// 0x30e4c1
- (int)_numberOfMainKeysInLastRow;	// 0x30e4cd
- (id)_optionCharactersForKeyboardInput;	// 0x30e3c9
- (id)_popupKeyboardDataFileName;	// 0x30d2b9
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x30db51
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x30e731
- (float)_preferredGlyphHeight:(id)height;	// 0x30e3c1
- (CGSize)_preferredGlyphSize:(id)size;	// 0x30e5b9
- (float)_preferredGlyphWidth:(id)width;	// 0x30e3b9
- (float)_preferredTextEntryControlWidth;	// 0x30e72d
- (id)_processGlyphDataChunk:(id)chunk;	// 0x30d531
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x30e461
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x30e929
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x30be75
- (id)allPopupkeyboardsCharacterSet;	// 0x30c4f1
- (id)attributesForTextFieldLabel;	// 0x30b5fd
// converted property getter: - (id)baseKeyControl;	// 0x30b685
// converted property getter: - (id)baseKeyboard;	// 0x30b6a5
- (BOOL)canShowLanguageSwitchButton;	// 0x30be71
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x30b631
// converted property getter: - (BOOL)canWrapVertically;	// 0x30b651
- (CGRect)candidatesBackgroundFrame;	// 0x30ea45
- (CGRect)candidatesContainerFrame;	// 0x30ea69
- (id)customizeTextEntryControls:(id)controls;	// 0x30b5d9
- (id)customizedTextEntryFieldControls;	// 0x30b5c9
- (void)customizedTextFieldControlsWereRemoved;	// 0x30b5d5
- (void)dealloc;	// 0x30b4dd
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x30be35
- (id)focusedControlForRow:(id)row;	// 0x30be21
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x30bb29
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x30ca31
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30c991
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x30c931
- (BOOL)handleEvent:(id)event;	// 0x30c249
- (BOOL)isLastCharacterSelected;	// 0x30c245
// converted property getter: - (id)keyDataDictionaries;	// 0x30baa1
- (id)keyboardCharacterSet;	// 0x30c24d
// converted property getter: - (id)keyboardControl;	// 0x30b6b9
- (CGRect)keyboardControlFrame;	// 0x30ea21
- (float)layoutGapBelowKeyboardControl;	// 0x30e92d
- (float)layoutGapBelowTabControl;	// 0x30e931
// converted property getter: - (id)mainKeyControls;	// 0x30ba91
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x30be49
// converted property getter: - (id)name;	// 0x30b6b5
- (long)numberOfColumnsInGrid:(id)grid;	// 0x30c909
- (long)numberOfItemsInGrid:(id)grid;	// 0x30c8d5
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x30b671
- (CGRect)playPauseFrame;	// 0x30e935
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x30bab9
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x30bcf1
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x30bcf5
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x30b5f9
- (BOOL)requiresTextFieldLabel;	// 0x30c231
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x30b675
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x30b695
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x30b641
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x30b661
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x30c235
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x30bdc5
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x30be51
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x30b5b5
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x30be61
- (CGRect)spinnerFrame;	// 0x30ec35
- (void)startSpinning;	// 0x30b5cd
- (void)stopSpinning;	// 0x30b5d1
- (id)switchToThisKeyboardIdentifier;	// 0x30b5c5
- (CGRect)tabControlFrame;	// 0x30ec11
// converted property getter: - (id)textEntryControl;	// 0x30b5a5
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x30bab5
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x30bab1
- (CGRect)textFieldBackgroundFrame;	// 0x30eab1
- (CGRect)textFieldFrame;	// 0x30ead5
- (CGRect)textFieldLabelFrame;	// 0x30ea8d
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x30bd3d
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x30bcf9
@end
