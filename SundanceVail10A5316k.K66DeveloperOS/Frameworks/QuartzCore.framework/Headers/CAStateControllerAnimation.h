/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerAnimation : NSObject {
@private
	CALayer *_layer;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *key;	// G=0x32a7a8a9; @synthesize=_key
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x32a7a899; @synthesize=_layer
- (id)initWithLayer:(id)layer key:(id)key;	// 0x32a7a7bd
- (void)dealloc;	// 0x32a7a835
// declared property getter: - (id)key;	// 0x32a7a8a9
// declared property getter: - (id)layer;	// 0x32a7a899
@end

