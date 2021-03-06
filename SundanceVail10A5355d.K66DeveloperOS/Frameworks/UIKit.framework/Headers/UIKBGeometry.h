/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	XXStruct_tp$7nC m_x;	// 8 = 0x8
	XXStruct_tp$7nC m_y;	// 16 = 0x10
	XXStruct_tp$7nC m_w;	// 24 = 0x18
	XXStruct_tp$7nC m_h;	// 32 = 0x20
	XXStruct_tp$7nC m_paddingTop;	// 40 = 0x28
	XXStruct_tp$7nC m_paddingLeft;	// 48 = 0x30
	XXStruct_tp$7nC m_paddingBottom;	// 56 = 0x38
	XXStruct_tp$7nC m_paddingRight;	// 64 = 0x40
	BOOL m_explicitlySpecified;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x33ced7d1; S=0x33ced7e1; @synthesize=m_explicitlySpecified
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x33ced759; S=0x33cecb5d; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x33ced701; S=0x33cecaa5; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x33ced7a1; S=0x33cecbd5; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x33ced789; S=0x33cecbad; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x33ced7b9; S=0x33cecbfd; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x33ced771; S=0x33cecb85; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x33ced741; S=0x33cecb35; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x33ced711; S=0x33cecae5; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x33ced729; S=0x33cecb0d; @synthesize=m_y
+ (id)geometry;	// 0x33cebdc9
+ (id)geometryWithRect:(CGRect)rect;	// 0x33cebe11
- (id)init;	// 0x33cebfdd
- (id)initWithCoder:(id)coder;	// 0x33cec06d
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x33cebeb5
- (id)copyWithZone:(NSZone *)zone;	// 0x33cec505
- (void)dealloc;	// 0x33cec021
- (id)description;	// 0x33cecc25
- (void)encodeWithCoder:(id)coder;	// 0x33cec2d1
// declared property getter: - (BOOL)explicitlySpecified;	// 0x33ced7d1
- (CGRect)frame;	// 0x33ced071
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x33ced0a9
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x33ced759
- (BOOL)isEqual:(id)equal;	// 0x33cec73d
// declared property getter: - (id)name;	// 0x33ced701
- (id)overrideGeometry:(id)geometry;	// 0x33ced3e1
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x33ced201
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x33ced26d
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x33ced7a1
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x33ced789
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x33ced7b9
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x33ced771
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x33ced7e1
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x33cecb5d
// declared property setter: - (void)setName:(id)name;	// 0x33cecaa5
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x33cecbd5
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x33cecbad
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x33cecbfd
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x33cecb85
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x33cecb35
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x33cecae5
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x33cecb0d
- (id)shortDescription;	// 0x33cecee1
- (BOOL)usesPercentages;	// 0x33ced5e9
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x33ced741
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x33ced711
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x33ced729
@end

