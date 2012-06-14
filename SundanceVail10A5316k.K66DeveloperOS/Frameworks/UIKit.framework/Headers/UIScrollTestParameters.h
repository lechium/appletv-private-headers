/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, CADisplayLink;

__attribute__((visibility("hidden")))
@interface UIScrollTestParameters : NSObject {
@private
	int _iterations;	// 4 = 0x4
	int _yDelta;	// 8 = 0x8
	int _scrollLength;	// 12 = 0xc
	NSString *_currentTest;	// 16 = 0x10
	CADisplayLink *_displayLink;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *currentTest;	// G=0x303692e9; S=0x303692f9; @synthesize=_currentTest
@property(retain, nonatomic) CADisplayLink *displayLink;	// G=0x30369349; S=0x30369359; @synthesize=_displayLink
@property(assign, nonatomic) int iterations;	// G=0x303692c9; S=0x303692d9; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x30369329; S=0x30369339; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x30369309; S=0x30369319; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x303691c5
// declared property getter: - (id)currentTest;	// 0x303692e9
- (void)dealloc;	// 0x30369259
// declared property getter: - (id)displayLink;	// 0x30369349
// declared property getter: - (int)iterations;	// 0x303692c9
// declared property getter: - (int)scrollLength;	// 0x30369329
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x303692f9
// declared property setter: - (void)setDisplayLink:(id)link;	// 0x30369359
// declared property setter: - (void)setIterations:(int)iterations;	// 0x303692d9
// declared property setter: - (void)setScrollLength:(int)length;	// 0x30369339
// declared property setter: - (void)setYDelta:(int)delta;	// 0x30369319
// declared property getter: - (int)yDelta;	// 0x30369309
@end

