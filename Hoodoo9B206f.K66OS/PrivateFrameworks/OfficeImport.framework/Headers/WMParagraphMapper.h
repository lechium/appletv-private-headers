/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class OIXMLElement, WDParagraph;

__attribute__((visibility("hidden")))
@interface WMParagraphMapper : CMMapper {
@private
	WDParagraph *wdParagraph;	// 8 = 0x8
	WMParagraphMapper *mCurrentMapper;	// 12 = 0xc
	OIXMLElement *mActiveNode;	// 16 = 0x10
	BOOL mIsDeleted;	// 20 = 0x14
}
+ (void)mapPlaceholderAt:(id)at rect:(CGRect)rect withState:(id)state;	// 0x34664a81
- (id)initWithBlock:(id)block parent:(id)parent;	// 0x344069c1
- (id)activeNode;	// 0x34408ab1
- (BOOL)containsOfficeArt;	// 0x34408181
- (void)dealloc;	// 0x344059ad
- (BOOL)isCollapsable:(id)collapsable;	// 0x344059fd
- (BOOL)isTextFrame;	// 0x34406d4d
- (void)mapAt:(id)at withState:(id)state;	// 0x34406a11
- (void)mapFieldMarkerAt:(id)at marker:(id)marker withState:(id)state;	// 0x344c5475
- (void)mapParagraphBodyWithState:(id)state;	// 0x344087bd
- (void)mapRunAt:(id)at run:(id)run withState:(id)state;	// 0x34408b99
- (id)runAtIndex:(int)index;	// 0x345370f9
@end
