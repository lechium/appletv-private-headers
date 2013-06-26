/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BRGridView, NSMutableArray, NSArray, BRTextEntryControl, BRKeyboardControl, BRControl;

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
@property(retain) BRControl *baseKeyControl;	// G=0x31211d; S=0x31210d; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x31213d; S=0x31212d; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x3120c9; S=0x3120d9; converted property
@property(assign) BOOL canWrapVertically;	// G=0x3120e9; S=0x3120f9; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x312539; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x312151; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x312529; converted property
@property(readonly, retain) NSString *name;	// G=0x31214d; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x3128f9; S=0x3128e9; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x31203d; S=0x31204d; converted property
- (id)init;	// 0x311de9
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x311f09
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x3147c9
- (float)_actionKeysContainerSpacing;	// 0x3153bd
- (float)_actionKeysContainerWidth;	// 0x3153b9
- (id)_controlForData:(id)data;	// 0x314969
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x31471d
- (void)_createMainAndActionKeyControls;	// 0x313559
- (id)_filterRawKeyboardData:(id)data;	// 0x313d59
- (id)_glyphDataForImage:(id)image;	// 0x3147dd
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x314359
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x314149
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x314ff9
- (Class)_keyboardControlClass;	// 0x314edd
- (id)_keyboardDataFileName;	// 0x313d55
- (id)_mainKeyRowPlane;	// 0x314f79
- (float)_mainKeysHorizontalSpacing;	// 0x314ff5
- (float)_mainKeysVerticalSpacing;	// 0x314ff1
- (int)_numberOfActionKeyColumns;	// 0x314f75
- (int)_numberOfActionKeyRows;	// 0x314f61
- (int)_numberOfMainKeyColumns;	// 0x314f5d
- (int)_numberOfMainKeyRows;	// 0x314f59
- (int)_numberOfMainKeysInLastRow;	// 0x314f65
- (id)_optionCharactersForKeyboardInput;	// 0x314e61
- (id)_popupKeyboardDataFileName;	// 0x313d51
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x3145e9
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x3151c9
- (float)_preferredGlyphHeight:(id)height;	// 0x314e59
- (CGSize)_preferredGlyphSize:(id)size;	// 0x315051
- (float)_preferredGlyphWidth:(id)width;	// 0x314e51
- (float)_preferredTextEntryControlWidth;	// 0x3151c5
- (id)_processGlyphDataChunk:(id)chunk;	// 0x313fc9
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x314ef9
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3153c1
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x31290d
- (id)allPopupkeyboardsCharacterSet;	// 0x312f89
- (id)attributesForTextFieldLabel;	// 0x312095
// converted property getter: - (id)baseKeyControl;	// 0x31211d
// converted property getter: - (id)baseKeyboard;	// 0x31213d
- (BOOL)canShowLanguageSwitchButton;	// 0x312909
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x3120c9
// converted property getter: - (BOOL)canWrapVertically;	// 0x3120e9
- (CGRect)candidatesBackgroundFrame;	// 0x3154dd
- (CGRect)candidatesContainerFrame;	// 0x315501
- (id)customizeTextEntryControls:(id)controls;	// 0x312071
- (id)customizedTextEntryFieldControls;	// 0x312061
- (void)customizedTextFieldControlsWereRemoved;	// 0x31206d
- (void)dealloc;	// 0x311f75
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x3128cd
- (id)focusedControlForRow:(id)row;	// 0x3128b9
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x3125c1
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x3134c9
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x313429
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3133c9
- (BOOL)handleEvent:(id)event;	// 0x312ce1
- (BOOL)isLastCharacterSelected;	// 0x312cdd
// converted property getter: - (id)keyDataDictionaries;	// 0x312539
- (id)keyboardCharacterSet;	// 0x312ce5
// converted property getter: - (id)keyboardControl;	// 0x312151
- (CGRect)keyboardControlFrame;	// 0x3154b9
- (float)layoutGapBelowKeyboardControl;	// 0x3153c5
- (float)layoutGapBelowTabControl;	// 0x3153c9
// converted property getter: - (id)mainKeyControls;	// 0x312529
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x3128e1
// converted property getter: - (id)name;	// 0x31214d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3133a1
- (long)numberOfItemsInGrid:(id)grid;	// 0x31336d
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x312109
- (CGRect)playPauseFrame;	// 0x3153cd
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x312551
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x312789
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x31278d
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x312091
- (BOOL)requiresTextFieldLabel;	// 0x312cc9
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x31210d
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x31212d
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x3120d9
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x3120f9
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x312ccd
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x31285d
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x3128e9
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x31204d
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x3128f9
- (CGRect)spinnerFrame;	// 0x3156cd
- (void)startSpinning;	// 0x312065
- (void)stopSpinning;	// 0x312069
- (id)switchToThisKeyboardIdentifier;	// 0x31205d
- (CGRect)tabControlFrame;	// 0x3156a9
// converted property getter: - (id)textEntryControl;	// 0x31203d
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x31254d
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x312549
- (CGRect)textFieldBackgroundFrame;	// 0x315549
- (CGRect)textFieldFrame;	// 0x31556d
- (CGRect)textFieldLabelFrame;	// 0x315525
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x3127d5
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x312791
@end
