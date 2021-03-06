/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class WebFrame, NSMutableDictionary, DOMHTMLInputElement, NSMutableArray, DOMElement;

__attribute__((visibility("hidden")))
@interface FormAutoFiller : NSObject {
@private
	WebFrame *_frame;	// 4 = 0x4
	DOMElement *_form;	// 8 = 0x8
	int _formType;	// 12 = 0xc
	DOMHTMLInputElement *_usernameElement;	// 16 = 0x10
	DOMHTMLInputElement *_passwordElement;	// 20 = 0x14
	NSMutableArray *_autoFilledControls;	// 24 = 0x18
	NSMutableDictionary *_fieldsFilledFromAB;	// 28 = 0x1c
	NSMutableArray *_continuationFields;	// 32 = 0x20
	BOOL _hasAutoFilled;	// 36 = 0x24
}
@property(readonly, assign) int formType;	// G=0x3032771d; converted property
@property(readonly, assign) BOOL hasAutoFilled;	// G=0x30328a65; converted property
@property(readonly, retain) DOMHTMLInputElement *passwordElement;	// G=0x30327789; converted property
@property(readonly, retain) DOMHTMLInputElement *usernameElement;	// G=0x30327751; converted property
+ (id)abMatchInFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x30327121
+ (id)autoFillerForFrame:(id)frame form:(id)form create:(BOOL)create;	// 0x30326e99
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x301c58ed
+ (void)clearAutoFilledTextField:(id)field inFrame:(id)frame form:(id)form;	// 0x30327259
+ (id)fieldNameForAutoFillOfControl:(id)control rep:(id)rep respectHTMLAutocompleteAttribute:(BOOL)attribute;	// 0x30327e11
+ (int)indexOfItemInRadioButtonGroup:(id)radioButtonGroup forSynonyms:(id)synonyms;	// 0x30327bdd
+ (int)indexOfItemInSelectElement:(id)selectElement forSynonyms:(id)synonyms;	// 0x303277c1
+ (BOOL)isContinuationField:(id)field inFrame:(id)frame form:(id)form;	// 0x30327171
+ (id)matchForControl:(id)control rep:(id)rep fieldLabels:(id)labels useFieldName:(BOOL)name foundByPageScan:(BOOL *)scan;	// 0x30327015
+ (id)radioButtonGroupContaining:(id)containing inFormElements:(id)formElements;	// 0x30327a51
+ (void)recordABMatch:(id)match inFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x303271cd
- (id)init;	// 0x303272a9
- (id)_decomposeStreetAddress:(id)address style:(int)style;	// 0x30327d39
- (void)_insertABValue:(id)value inTextFieldElement:(id)textFieldElement match:(id)match fieldName:(id)name;	// 0x30327edd
- (int)_itemInSelectElement:(id)selectElement forMatch:(id)match;	// 0x30327cb9
- (int)_reflectAutoFillMatch:(id)match inControls:(id)controls currIndex:(int)index fieldName:(id)name;	// 0x3032875d
- (int)_reflectMultiFieldMatch:(id)match inControls:(id)controls currIndex:(unsigned)index fieldName:(id)name isPhoneNumber:(BOOL)number;	// 0x30327f79
- (void)_scanElements;	// 0x303274c9
- (void)autoFill;	// 0x30328a75
- (void)autoFillAddressStartingAtControl:(id)control match:(id)match;	// 0x30328d39
- (int)autoFillPhoneOrZipStartingAtControl:(id)control match:(id)match;	// 0x3032914d
- (void)clearAutoFilledTextField:(id)field;	// 0x303293a1
- (void)dealloc;	// 0x3032731d
// converted property getter: - (int)formType;	// 0x3032771d
// converted property getter: - (BOOL)hasAutoFilled;	// 0x30328a65
// converted property getter: - (id)passwordElement;	// 0x30327789
- (void)recordABContinuationField:(id)field;	// 0x303292f1
- (void)recordABMatch:(id)match fieldName:(id)name;	// 0x30329209
// converted property getter: - (id)usernameElement;	// 0x30327751
- (id)visibleControlsInForm;	// 0x303273e5
@end

