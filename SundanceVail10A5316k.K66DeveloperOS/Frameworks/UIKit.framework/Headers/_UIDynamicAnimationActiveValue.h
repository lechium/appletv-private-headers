/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimationActiveValue : NSObject {
@private
	double _value;	// 4 = 0x4
	double _minimumActiveValue;	// 12 = 0xc
	double _maximumActiveValue;	// 20 = 0x14
	int _type;	// 28 = 0x1c
	double _boundaryPull;	// 32 = 0x20
	id _applier;	// 40 = 0x28
	unsigned _lowerBoundary : 1;	// 44 = 0x2c
	unsigned _upperBoundary : 1;	// 44 = 0x2c
}
@property(assign, nonatomic) double maximumActiveValue;	// G=0x304350c1; S=0x30434b7d; @synthesize=_maximumActiveValue
@property(assign, nonatomic) double minimumActiveValue;	// G=0x304350a9; S=0x30434af9; @synthesize=_minimumActiveValue
@property(assign, nonatomic) int type;	// G=0x304350d9; S=0x30434c01; @synthesize=_type
@property(assign, nonatomic) double value;	// G=0x30435091; S=0x30434a85; @synthesize=_value
+ (id)activeValue:(double)value ofType:(int)type;	// 0x304348a1
+ (id)lowerBoundary:(double)boundary ofType:(int)type;	// 0x304347e9
+ (id)upperBoundary:(double)boundary ofType:(int)type;	// 0x30434845
- (id)init;	// 0x30434905
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x30434cd9
- (id)_applier;	// 0x304349e9
- (double)_boundaryPull;	// 0x30434c85
- (BOOL)_isLowerBoundary;	// 0x30434cb1
- (BOOL)_isUpperBoundary;	// 0x30434cc5
- (void)_setBoundaryPull:(double)pull;	// 0x30434c9d
- (void)dealloc;	// 0x3043499d
- (id)description;	// 0x30435051
// declared property getter: - (double)maximumActiveValue;	// 0x304350c1
// declared property getter: - (double)minimumActiveValue;	// 0x304350a9
// declared property setter: - (void)setMaximumActiveValue:(double)value;	// 0x30434b7d
// declared property setter: - (void)setMinimumActiveValue:(double)value;	// 0x30434af9
// declared property setter: - (void)setType:(int)type;	// 0x30434c01
// declared property setter: - (void)setValue:(double)value;	// 0x30434a85
// declared property getter: - (int)type;	// 0x304350d9
// declared property getter: - (double)value;	// 0x30435091
@end

