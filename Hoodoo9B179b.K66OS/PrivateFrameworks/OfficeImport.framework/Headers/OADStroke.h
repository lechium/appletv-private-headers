/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"

@class OADDash, OADColor, OADLineJoin, OADLineEnd, OADFill;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <NSCopying> {
@private
	OADColor *mColor;	// 12 = 0xc
	OADFill *mFill;	// 16 = 0x10
	OADDash *mDash;	// 20 = 0x14
	OADLineJoin *mJoin;	// 24 = 0x18
	OADLineEnd *mHead;	// 28 = 0x1c
	OADLineEnd *mTail;	// 32 = 0x20
	float mWidth;	// 36 = 0x24
	unsigned char mCap;	// 40 = 0x28
	unsigned char mCompoundType;	// 41 = 0x29
	unsigned char mPenAlignment;	// 42 = 0x2a
	unsigned mIsColorOverridden : 1;	// 43 = 0x2b
	unsigned mIsCompoundTypeOverridden : 1;	// 43 = 0x2b
	unsigned mIsCapOverridden : 1;	// 43 = 0x2b
	unsigned mIsWidthOverridden : 1;	// 43 = 0x2b
	unsigned mIsJoinOverridden : 1;	// 43 = 0x2b
	unsigned mIsDashOverridden : 1;	// 43 = 0x2b
	unsigned mIsFillOverridden : 1;	// 43 = 0x2b
	unsigned mIsPenAlignmentOverridden : 1;	// 43 = 0x2b
}
@property(assign) int cap;	// G=0x327bd0f5; S=0x327b0fed; converted property
@property(retain) id color;	// G=0x327bcd99; S=0x327b0701; converted property
@property(assign) int compoundType;	// G=0x327bd161; S=0x327b1095; converted property
@property(retain) id dash;	// G=0x327bce05; S=0x327b0a81; converted property
@property(retain) id fill;	// G=0x32737551; S=0x327b08b9; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x327b006d; S=0x329daa8d; @synthesize=mHead
@property(retain) id join;	// G=0x327bcf91; S=0x327b0b81; converted property
@property(assign) int penAlignment;	// G=0x329da835; S=0x327f21d9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x327b007d; S=0x329daab5; @synthesize=mTail
@property(assign) float width;	// G=0x327bd089; S=0x327b0f51; converted property
+ (id)blackStroke;	// 0x329daa1d
+ (id)defaultProperties;	// 0x327afe35
+ (id)nullStroke;	// 0x328984f9
- (id)init;	// 0x327afda1
- (id)initWithDefaults;	// 0x327f1f91
// converted property getter: - (int)cap;	// 0x327bd0f5
// converted property getter: - (id)color;	// 0x327bcd99
// converted property getter: - (int)compoundType;	// 0x327bd161
- (id)copyWithZone:(NSZone *)zone;	// 0x3289e895
// converted property getter: - (id)dash;	// 0x327bce05
- (void)dealloc;	// 0x327bdbed
// converted property getter: - (id)fill;	// 0x32737551
- (unsigned)hash;	// 0x329da865
// declared property getter: - (id)head;	// 0x327b006d
- (BOOL)isCapOverridden;	// 0x327bd0b9
- (BOOL)isColorOverridden;	// 0x327bcd5d
- (BOOL)isCompoundTypeOverridden;	// 0x327bd125
- (BOOL)isDashOverridden;	// 0x327bcdc9
- (BOOL)isEqual:(id)equal;	// 0x327bc8e5
- (BOOL)isFillOverridden;	// 0x32737581
- (BOOL)isJoinOverridden;	// 0x327bcf55
- (BOOL)isPenAlignmentOverridden;	// 0x327bd191
- (BOOL)isWidthOverridden;	// 0x327bd04d
// converted property getter: - (id)join;	// 0x327bcf91
// converted property getter: - (int)penAlignment;	// 0x329da835
// converted property setter: - (void)setCap:(int)cap;	// 0x327b0fed
// converted property setter: - (void)setColor:(id)color;	// 0x327b0701
// converted property setter: - (void)setCompoundType:(int)type;	// 0x327b1095
// converted property setter: - (void)setDash:(id)dash;	// 0x327b0a81
// converted property setter: - (void)setFill:(id)fill;	// 0x327b08b9
// declared property setter: - (void)setHead:(id)head;	// 0x329daa8d
// converted property setter: - (void)setJoin:(id)join;	// 0x327b0b81
- (void)setParent:(id)parent;	// 0x327afe7d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x327f21d9
- (void)setStyleColor:(id)color;	// 0x328edc25
// declared property setter: - (void)setTail:(id)tail;	// 0x329daab5
// converted property setter: - (void)setWidth:(float)width;	// 0x327b0f51
// declared property getter: - (id)tail;	// 0x327b007d
// converted property getter: - (float)width;	// 0x327bd089
@end

