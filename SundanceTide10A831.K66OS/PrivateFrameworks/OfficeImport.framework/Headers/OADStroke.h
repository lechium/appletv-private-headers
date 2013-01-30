/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import "OADProperties.h"

@class OADColor, OADLineEnd, OADLineJoin, OADDash, OADFill;

@interface OADStroke : OADProperties <NSCopying> {
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
@property(assign) int cap;	// G=0x36a39955; S=0x369e24a1; converted property
@property(retain) id color;	// G=0x36a35455; S=0x369e20f1; converted property
@property(assign) int compoundType;	// G=0x36a399bd; S=0x369e24c5; converted property
@property(retain) id dash;	// G=0x36a39679; S=0x369e2245; converted property
@property(retain) id fill;	// G=0x36a39611; S=0x369e2141; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x369e26dd; S=0x36c1ac8d; @synthesize=mHead
@property(retain) id join;	// G=0x36a397fd; S=0x369e2309; converted property
@property(assign) int penAlignment;	// G=0x36c1aaa1; S=0x369e24e9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x369e26ed; S=0x36c1ac9d; @synthesize=mTail
@property(assign) float width;	// G=0x36a398ed; S=0x369e247d; converted property
+ (id)blackStroke;	// 0x36c1aa35
+ (id)defaultProperties;	// 0x369e1f59
+ (id)nullStroke;	// 0x36b349c5
- (id)init;	// 0x369e1ec9
- (id)initWithDefaults;	// 0x369e1fa1
// converted property getter: - (int)cap;	// 0x36a39955
// converted property getter: - (id)color;	// 0x36a35455
// converted property getter: - (int)compoundType;	// 0x36a399bd
- (id)copyWithZone:(NSZone *)zone;	// 0x36b063ed
// converted property getter: - (id)dash;	// 0x36a39679
- (void)dealloc;	// 0x36a3f775
// converted property getter: - (id)fill;	// 0x36a39611
- (unsigned)hash;	// 0x36c1aad1
// declared property getter: - (id)head;	// 0x369e26dd
- (BOOL)isCapOverridden;	// 0x36a3991d
- (BOOL)isColorOverridden;	// 0x36a3541d
- (BOOL)isCompoundTypeOverridden;	// 0x36a39985
- (BOOL)isDashOverridden;	// 0x36a39641
- (BOOL)isEqual:(id)equal;	// 0x36a34fad
- (BOOL)isFillOverridden;	// 0x36a395d9
- (BOOL)isJoinOverridden;	// 0x36a397c5
- (BOOL)isPenAlignmentOverridden;	// 0x36a399ed
- (BOOL)isWidthOverridden;	// 0x36a398b5
// converted property getter: - (id)join;	// 0x36a397fd
// converted property getter: - (int)penAlignment;	// 0x36c1aaa1
// converted property setter: - (void)setCap:(int)cap;	// 0x369e24a1
// converted property setter: - (void)setColor:(id)color;	// 0x369e20f1
// converted property setter: - (void)setCompoundType:(int)type;	// 0x369e24c5
// converted property setter: - (void)setDash:(id)dash;	// 0x369e2245
// converted property setter: - (void)setFill:(id)fill;	// 0x369e2141
// declared property setter: - (void)setHead:(id)head;	// 0x36c1ac8d
// converted property setter: - (void)setJoin:(id)join;	// 0x369e2309
- (void)setParent:(id)parent;	// 0x369e250d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x369e24e9
- (void)setStyleColor:(id)color;	// 0x36b06841
// declared property setter: - (void)setTail:(id)tail;	// 0x36c1ac9d
// converted property setter: - (void)setWidth:(float)width;	// 0x369e247d
// declared property getter: - (id)tail;	// 0x369e26ed
// converted property getter: - (float)width;	// 0x36a398ed
@end
