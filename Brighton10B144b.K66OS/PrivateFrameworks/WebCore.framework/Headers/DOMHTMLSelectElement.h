/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x35ffecdd; S=0x35ffede9; 
@property(assign) BOOL disabled;	// G=0x35ffeefd; S=0x35fff009; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x35fff11d; 
@property(readonly, assign) int length;	// G=0x35fffb99; 
@property(assign) BOOL multiple;	// G=0x35fff221; S=0x35fff255; 
@property(copy) NSString *name;	// G=0x35fff35d; S=0x35fff479; 
@property(readonly, assign) DOMHTMLOptionsCollection *options;	// G=0x35fffa8d; 
@property(assign) BOOL required;	// G=0x35fff621; S=0x35fff72d; converted property
@property(assign) int selectedIndex;	// G=0x35fffda5; S=0x35fffea5; 
@property(assign) int size;	// G=0x35fff841; S=0x35fff871; 
@property(readonly, assign) NSString *type;	// G=0x35fff971; 
@property(copy) NSString *value;	// G=0x35ffffa5; S=0x36000161; 
@property(readonly, assign) BOOL willValidate;	// G=0x36000309; 
- (void)_activateItemAtIndex:(int)index;	// 0x35fc64bd
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x35fc64dd
- (void)add:(id)add :(id)arg2;	// 0x36000c31
- (void)add:(id)add before:(id)before;	// 0x36000b01
// declared property getter: - (BOOL)autofocus;	// 0x35ffecdd
- (BOOL)checkValidity;	// 0x36000e61
- (unsigned)completeLength;	// 0x36028ec5
// declared property getter: - (BOOL)disabled;	// 0x35ffeefd
// declared property getter: - (id)form;	// 0x35fff11d
- (id)item:(unsigned)item;	// 0x3600083d
- (id)labels;	// 0x360006d5
// declared property getter: - (int)length;	// 0x35fffb99
- (id)listItemAtIndex:(int)index;	// 0x36028ed5
// declared property getter: - (BOOL)multiple;	// 0x35fff221
// declared property getter: - (id)name;	// 0x35fff35d
- (id)namedItem:(id)item;	// 0x3600094d
// declared property getter: - (id)options;	// 0x35fffa8d
- (void)remove:(int)remove;	// 0x36000d61
// converted property getter: - (BOOL)required;	// 0x35fff621
// declared property getter: - (int)selectedIndex;	// 0x35fffda5
- (id)selectedOptions;	// 0x35fffc99
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x35ffede9
- (void)setCustomValidity:(id)validity;	// 0x36000f65
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35fff009
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x35fff255
// declared property setter: - (void)setName:(id)name;	// 0x35fff479
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x35fff72d
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x35fffea5
// declared property setter: - (void)setSize:(int)size;	// 0x35fff871
// declared property setter: - (void)setValue:(id)value;	// 0x36000161
// declared property getter: - (int)size;	// 0x35fff841
- (int)structuralComplexityContribution;	// 0x36028c6d
// declared property getter: - (id)type;	// 0x35fff971
- (id)validationMessage;	// 0x36000519
- (id)validity;	// 0x3600040d
// declared property getter: - (id)value;	// 0x35ffffa5
// declared property getter: - (BOOL)willValidate;	// 0x36000309
@end
