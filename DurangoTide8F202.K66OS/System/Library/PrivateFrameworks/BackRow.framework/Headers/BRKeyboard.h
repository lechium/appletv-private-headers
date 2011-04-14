/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl, NSDictionary, BRScrollControl, NSString;

__attribute__((visibility("hidden")))
@interface BRKeyboard : NSObject {
@private
	BRControl *_baseKeyControl;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _baseKeyboardType;	// 12 = 0xc
	BOOL _shouldShowLanguageSwitchButton;	// 16 = 0x10
	BOOL _canWrapHorizontally;	// 17 = 0x11
	BOOL _canWrapVertically;	// 18 = 0x12
	BOOL _constrainCursorToPopupKeyboard;	// 19 = 0x13
	NSDictionary *_rawKeyboardData;	// 20 = 0x14
	BRScrollControl *_mainKeysContainer;	// 24 = 0x18
	BRControl *_actionKeysRow;	// 28 = 0x1c
}
@property(retain) id actionKeysContainer;	// G=0x3290b289; S=0x3290c635; converted property
@property(retain) BRControl *baseKeyControl;	// G=0x3290b269; S=0x3290b259; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x3290b201; S=0x3290b211; converted property
@property(assign) BOOL canWrapVertically;	// G=0x3290b221; S=0x3290b231; converted property
@property(readonly, retain) BRScrollControl *mainKeysContainer;	// G=0x3290c66d; converted property
@property(readonly, retain) NSString *name;	// G=0x3290b279; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x3290b2c9; S=0x3290b2b9; converted property
- (id)init;	// 0x3290c97d
- (id)initWithBaseKeyControl:(id)baseKeyControl;	// 0x3290c951
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x3290b805
- (float)_actionKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b435
- (CGSize)_actionKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x3290b421
- (float)_candidatesBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b401
- (CGSize)_candidatesBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x3290b3ed
- (CGSize)_candidatesContainerInset:(id)inset resolutionScale:(float)scale;	// 0x3290e8a5
- (id)_controlForData:(id)data;	// 0x3290d831
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x3290d609
- (id)_filterRawKeyboardData:(id)data;	// 0x3290ba49
- (id)_glyphDataForImage:(id)image;	// 0x3290d6a9
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x3290d231
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x3290d449
- (id)_keyRowData;	// 0x3290b981
- (id)_keyRows;	// 0x3290de99
- (id)_keyboardDataFileName;	// 0x3290b2f5
- (id)_mainKeyRowPlane;	// 0x3290b729
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x3290b795
- (float)_mainKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b41d
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x3290b409
- (float)_mainKeysVerticalSpacing;	// 0x3290b36d
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x3290b3bd
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x3290dd01
- (int)_numberOfMainKeyRows;	// 0x3290b369
- (float)_playPauseMessageBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b439
- (CGSize)_playPauseMessageSize:(id)size resolutionScale:(float)scale;	// 0x3290b4b9
- (Class)_popupKeyboardClass;	// 0x3290b709
- (float)_preferredGlyphHeight:(id)height;	// 0x3290b365
- (CGSize)_preferredGlyphSize:(id)size;	// 0x3290eb25
- (float)_preferredGlyphWidth:(id)width;	// 0x3290b361
- (id)_processGlyphDataChunk:(id)chunk;	// 0x3290b81d
- (id)_rawKeyboardData;	// 0x3290d0bd
- (int)_scrollDirectionForMainKeys;	// 0x3290b371
- (float)_tabControlBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b405
- (CGSize)_tabControlSize:(id)size resolutionScale:(float)scale;	// 0x3290b505
- (void)_tagBottomKeyRow:(id)row;	// 0x3290b7d9
- (float)_textFieldBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x3290b3e9
- (CGSize)_textFieldBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x3290b3d5
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x3290b3d1
- (id)actionDictionaryForCustomControl:(id)customControl;	// 0x3290b2dd
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x3290bd89
- (id)actionKeyRows;	// 0x3290b285
// converted property getter: - (id)actionKeysContainer;	// 0x3290b289
- (CGRect)actionKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x3290cd65
- (id)attributesForTextFieldLabel;	// 0x3290c811
- (CGRect)backgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x3290b375
// converted property getter: - (id)baseKeyControl;	// 0x3290b269
- (id)bottomRow;	// 0x3290c751
- (BOOL)canShowLanguageSwitchButton;	// 0x3290b2d9
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x3290b201
// converted property getter: - (BOOL)canWrapVertically;	// 0x3290b221
- (CGRect)candidatesBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e391
- (CGRect)candidatesContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x3290cca1
- (id)customizeTextEntryControls:(id)controls;	// 0x3290c83d
- (id)customizedTextEntryFieldControls;	// 0x3290b1e9
- (void)customizedTextFieldControlsWereRemoved;	// 0x3290b1f5
- (void)dealloc;	// 0x3290c8d1
- (BOOL)focusIsAtRightEdge;	// 0x3290c415
- (id)focusedControlAndRow:(id *)row;	// 0x3290c3c1
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x3290c25d
- (id)focusedControlForRow:(id)row;	// 0x3290c275
- (CGPoint)focusedRowAndOffsetIndex;	// 0x3290e7f9
- (BOOL)handleEvent:(id)event;	// 0x3290bc89
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x3290c53d
- (CGSize)keyboardSize:(id)size;	// 0x3290b571
- (void)layoutCustomControls:(id)controls resolutionScale:(float)scale;	// 0x3290b1fd
- (CGRect)magnifyingGlassFrame:(id)frame resolutionScale:(float)scale;	// 0x3290b38d
- (id)mainKeyRows;	// 0x3290c7ad
// converted property getter: - (id)mainKeysContainer;	// 0x3290c66d
- (CGRect)mainKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e161
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x3290b2b1
// converted property getter: - (id)name;	// 0x3290b279
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x3290b251
- (CGRect)playPauseMessageFrame:(id)frame resolutionScale:(float)scale;	// 0x3290ce4d
- (id)popupKeyboardForKeyControl:(id)keyControl baseKeyboardType:(int)type textEntryControl:(id)control;	// 0x3290c465
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x3290b2a9
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x3290b2ad
- (float)popupKeyboardWidth:(id)width;	// 0x3290cef9
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x3290b1f9
- (BOOL)requiresTextFieldLabel;	// 0x3290b2e1
// converted property setter: - (void)setActionKeysContainer:(id)container;	// 0x3290c635
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x3290b259
- (void)setBaseKeyboardType:(int)type;	// 0x3290b241
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x3290b211
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x3290b231
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x3290b2e5
- (void)setFocusToDefaultGlyph;	// 0x3290c4bd
- (void)setFocusToDefaultSwitchKeyboardGlyph:(id)defaultSwitchKeyboardGlyph;	// 0x3290b2a5
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x3290c28d
- (BOOL)setFocusedRowAndOffsetIndex:(CGPoint)index;	// 0x3290c155
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x3290b2b9
- (BOOL)shouldAcceptFocus;	// 0x3290b2a1
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x3290b2c9
- (CGRect)spinnerFrame:(id)frame resolutionScale:(float)scale;	// 0x3290b3a5
- (void)startSpinning;	// 0x3290b1ed
- (void)stopSpinning;	// 0x3290b1f1
- (BOOL)supportsTextEntryHistory;	// 0x3290b255
- (id)switchToThisKeyboardIdentifier;	// 0x3290b1e5
- (CGRect)tabControlFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e27d
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x3290b29d
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x3290b299
- (CGRect)textFieldBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e4bd
- (CGRect)textFieldFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e8ed
- (CGRect)textFieldLabelFrame:(id)frame resolutionScale:(float)scale;	// 0x3290e9d5
- (id)topRow;	// 0x3290c775
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x3290c305
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x3290c381
@end

