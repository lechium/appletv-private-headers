/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library


@interface ICSTimeZoneChange : NSObject {
	double _interval;	// 4 = 0x4
	int _tzOffsetTo;	// 12 = 0xc
}
@property(readonly, assign) double interval;	// G=0x31383419; converted property
@property(readonly, assign) int tzOffsetTo;	// G=0x31383431; converted property
- (id)initWithTimeInterval:(double)timeInterval tzOffsetTo:(int)to;	// 0x313833c5
- (int)compare:(id)compare;	// 0x313835dd
- (id)description;	// 0x313834b1
// converted property getter: - (double)interval;	// 0x31383419
- (BOOL)isEqual:(id)equal;	// 0x31383441
// converted property getter: - (int)tzOffsetTo;	// 0x31383431
@end

