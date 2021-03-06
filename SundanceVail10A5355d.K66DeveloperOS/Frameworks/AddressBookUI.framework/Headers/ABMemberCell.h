/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSArray;
@protocol ABStyleProvider;

@interface ABMemberCell : UITableViewCell {
	int _memberID;	// 300 = 0x12c
	NSArray *_namePieces;	// 304 = 0x130
	long _highlightIndex;	// 308 = 0x134
	BOOL _drawsComponentsRTL;	// 312 = 0x138
	BOOL _isGroup;	// 313 = 0x139
	id<ABStyleProvider> _styleProvider;	// 316 = 0x13c
	BOOL _isMe;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL isMe;	// G=0x34fa6051; S=0x34fa6061; @synthesize=_isMe
@property(assign) int memberID;	// G=0x34f8bb09; S=0x34f6a289; converted property
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34f6ba51; S=0x34f6986d; @synthesize=_styleProvider
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x34f6ac2d
- (CGSize)_drawText:(id)text withColor:(id)color shadowColor:(id)color3 shadowOffset:(CGSize)offset atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x34f6bc0d
- (CGSize)_drawText:(id)text withColor:(id)color shadowColor:(id)color3 shadowOffset:(CGSize)offset atPoint:(CGPoint)point withFont:(id)font;	// 0x34f6cd0d
- (id)_scriptingInfo;	// 0x34fa5f95
- (id)boldFont;	// 0x34f6bbb5
- (void)dealloc;	// 0x34f96a71
- (id)description;	// 0x34fa5f2d
- (void)drawRect:(CGRect)rect;	// 0x34f6abe9
- (id)groupName;	// 0x34fa5eb5
// declared property getter: - (BOOL)isMe;	// 0x34fa6051
- (id)italicFont;	// 0x34fa5f0d
- (float)memberCellFieldSpacing;	// 0x34f6ba29
// converted property getter: - (int)memberID;	// 0x34f8bb09
- (id)regularFont;	// 0x34f6bb01
- (void)setGroup:(BOOL)group;	// 0x34f6a385
- (void)setHighlightIndex:(long)index;	// 0x34f6a35d
- (void)setHighlighted:(BOOL)highlighted;	// 0x34f6a4a9
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x34f6a4e9
// declared property setter: - (void)setIsMe:(BOOL)me;	// 0x34fa6061
// converted property setter: - (void)setMemberID:(int)anId;	// 0x34f6a289
- (void)setNamePieces:(id)pieces;	// 0x34f6a2b1
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x34f6a469
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34f6986d
// declared property getter: - (id)styleProvider;	// 0x34f6ba51
@end

