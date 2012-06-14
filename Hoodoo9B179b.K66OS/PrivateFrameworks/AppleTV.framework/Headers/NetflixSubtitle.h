/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NetflixSubtitle : NSObject {
@private
	float startTime_;	// 4 = 0x4
	float endTime_;	// 8 = 0x8
	NSString *text_;	// 12 = 0xc
}
@property(assign, nonatomic) float endTime;	// G=0x30555af1; S=0x30555b01; @synthesize=endTime_
@property(assign, nonatomic) float startTime;	// G=0x30555ad1; S=0x30555ae1; @synthesize=startTime_
@property(copy, nonatomic) NSString *text;	// G=0x30555b11; S=0x30555b21; @synthesize=text_
- (id)initWithText:(id)text startTime:(float)time endTime:(float)time3;	// 0x30555931
- (void)dealloc;	// 0x305559d5
- (id)description;	// 0x30555a21
// declared property getter: - (float)endTime;	// 0x30555af1
// declared property setter: - (void)setEndTime:(float)time;	// 0x30555b01
// declared property setter: - (void)setStartTime:(float)time;	// 0x30555ae1
// declared property setter: - (void)setText:(id)text;	// 0x30555b21
// declared property getter: - (float)startTime;	// 0x30555ad1
// declared property getter: - (id)text;	// 0x30555b11
@end
