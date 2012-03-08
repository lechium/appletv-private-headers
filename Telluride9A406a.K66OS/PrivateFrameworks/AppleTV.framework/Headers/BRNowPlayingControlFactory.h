/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRNowPlayingControlFactory : NSObject <BRControlFactory> {
}
+ (void)_nowPlayingSelected;	// 0x33054649
+ (id)factory;	// 0x33054109
- (id)_nowPlayingListItemForData:(id)data currentControl:(id)control;	// 0x33054305
- (id)_nowPlayingPosterItemForData:(id)data currentControl:(id)control;	// 0x330543bd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33054151
@end

