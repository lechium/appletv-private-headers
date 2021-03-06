/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x3071d979; S=0x3071dbe1; 
@property(assign) BOOL disabled;	// G=0x3071d8b1; S=0x3071db09; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x3071d495; 
@property(readonly, assign) int length;	// G=0x3071d3d9; 
@property(assign) BOOL multiple;	// G=0x3071ce29; S=0x3071dd91; 
@property(copy) NSString *name;	// G=0x3071d081; S=0x3071de5d; 
@property(readonly, retain) DOMHTMLOptionsCollection *options;	// G=0x3071d769; 
@property(assign) BOOL required;	// G=0x3071da41; S=0x3071dcb9; converted property
@property(assign) int selectedIndex;	// G=0x3071cbe9; S=0x3071cca9; 
@property(assign) int size;	// G=0x3071cee9; S=0x3071df95; 
@property(readonly, copy) NSString *type;	// G=0x3071cfa9; 
@property(copy) NSString *value;	// G=0x3071d155; S=0x3071d2a1; 
@property(readonly, assign) BOOL willValidate;	// G=0x3071cd69; 
- (void)_activateItemAtIndex:(int)index;	// 0x306f3505
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x306f3529
- (void)add:(id)add :(id)arg2;	// 0x3071e479
- (void)add:(id)add before:(id)before;	// 0x3071e391
// declared property getter: - (BOOL)autofocus;	// 0x3071d979
- (BOOL)checkValidity;	// 0x3071e199
- (unsigned)completeLength;	// 0x3073bf99
// declared property getter: - (BOOL)disabled;	// 0x3071d8b1
// declared property getter: - (id)form;	// 0x3071d495
- (id)item:(unsigned)item;	// 0x3071e61d
- (id)labels;	// 0x3071e051
// declared property getter: - (int)length;	// 0x3071d3d9
- (id)listItemAtIndex:(int)index;	// 0x3073bfad
// declared property getter: - (BOOL)multiple;	// 0x3071ce29
// declared property getter: - (id)name;	// 0x3071d081
- (id)namedItem:(id)item;	// 0x3071e6e5
// declared property getter: - (id)options;	// 0x3071d769
- (void)remove:(int)remove;	// 0x3071e561
// converted property getter: - (BOOL)required;	// 0x3071da41
// declared property getter: - (int)selectedIndex;	// 0x3071cbe9
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x3071dbe1
- (void)setCustomValidity:(id)validity;	// 0x3071e259
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3071db09
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x3071dd91
// declared property setter: - (void)setName:(id)name;	// 0x3071de5d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x3071dcb9
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3071cca9
// declared property setter: - (void)setSize:(int)size;	// 0x3071df95
// declared property setter: - (void)setValue:(id)value;	// 0x3071d2a1
// declared property getter: - (int)size;	// 0x3071cee9
- (int)structuralComplexityContribution;	// 0x3073a5b5
// declared property getter: - (id)type;	// 0x3071cfa9
- (id)validationMessage;	// 0x3071d61d
- (id)validity;	// 0x3071d551
// declared property getter: - (id)value;	// 0x3071d155
// declared property getter: - (BOOL)willValidate;	// 0x3071cd69
@end

