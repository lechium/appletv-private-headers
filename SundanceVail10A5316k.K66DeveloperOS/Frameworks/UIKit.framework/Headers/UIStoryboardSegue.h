/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIStoryboardSegue : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	id _sourceViewController;	// 8 = 0x8
	id _destinationViewController;	// 12 = 0xc
	id _performHandler;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) id destinationViewController;	// G=0x303f77a1; @synthesize=_destinationViewController
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x303f7781; @synthesize=_identifier
@property(copy, nonatomic) id performHandler;	// G=0x303f77b1; S=0x303f77c5; @synthesize=_performHandler
@property(readonly, assign, nonatomic) id sourceViewController;	// G=0x303f7791; @synthesize=_sourceViewController
+ (id)segueWithIdentifier:(id)identifier source:(id)source destination:(id)destination performHandler:(id)handler;	// 0x303f7635
- (id)initWithIdentifier:(id)identifier source:(id)source destination:(id)destination;	// 0x303f74a1
- (void)dealloc;	// 0x303f7415
// declared property getter: - (id)destinationViewController;	// 0x303f77a1
// declared property getter: - (id)identifier;	// 0x303f7781
- (void)perform;	// 0x303f7721
// declared property getter: - (id)performHandler;	// 0x303f77b1
// declared property setter: - (void)setPerformHandler:(id)handler;	// 0x303f77c5
// declared property getter: - (id)sourceViewController;	// 0x303f7791
@end

