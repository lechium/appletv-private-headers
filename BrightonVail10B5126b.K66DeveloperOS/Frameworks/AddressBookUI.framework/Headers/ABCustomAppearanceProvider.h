/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {
	ABStyleProvider *_styleProvider;	// 4 = 0x4
}
- (id)init;	// 0x30957b91
- (Class)actionCellClass;	// 0x30957c4d
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)editing;	// 0x30957cb5
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)editing;	// 0x30957cb1
- (Class)customCardActionCellClass;	// 0x30957c81
- (Class)customCardCellClass;	// 0x30957c71
- (void)customSetEmphasized:(BOOL)emphasized onCell:(id)cell;	// 0x30957ccd
- (void)dealloc;	// 0x30957bfd
- (float)distanceBetweenSections;	// 0x30957c5d
- (void)forwardInvocation:(id)invocation;	// 0x30957cdd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30957d69
- (id)newActionButton;	// 0x30957c51
- (id)newCardActionButton;	// 0x30957c91
- (id)newCustomCardTableScrollingBackgroundView;	// 0x30957ca1
- (id)newScrollingBackgroundView;	// 0x30957c59
- (Class)propertyCellClass;	// 0x30957c49
- (void)setHighlighted:(BOOL)highlighted onPropertyCell:(id)cell;	// 0x30957c69
- (void)setIndicatesFaceTimeHistory:(BOOL)history onActionButton:(id)button;	// 0x30957c55
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;	// 0x30957cc9
- (BOOL)shouldPropagateStylesToPickers;	// 0x30957cc5
- (BOOL)shouldUseCardContentProviderWhenAvailable;	// 0x30957c6d
- (int)unknownModalPresentationStyle;	// 0x30957c65
@end

