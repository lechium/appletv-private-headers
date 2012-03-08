/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDPath, GQDWPLayoutFrame;

__attribute__((visibility("hidden")))
@interface GQDShape : GQDGraphic <GQDNameMappable> {
@private
	GQDPath *mPath;	// 40 = 0x28
	GQDWPLayoutFrame *mLayoutFrame;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x33c08651
- (id)initWithGraphic:(id)graphic path:(id)path geometry:(id)geometry;	// 0x33c26521
- (CGPathRef)createBezierPath;	// 0x33c086b1
- (void)dealloc;	// 0x33c08871
- (BOOL)isBlank;	// 0x33c0867d
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)angle;	// 0x33c08751
- (id)layoutFrame;	// 0x33c0865d
- (id)path;	// 0x33c0866d
@end

