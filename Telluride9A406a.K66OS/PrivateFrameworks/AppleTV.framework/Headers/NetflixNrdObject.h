/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NetflixNrdObjectProtocol.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NetflixNrdObject : NSObject <NetflixNrdObjectProtocol> {
@private
	NSMutableDictionary *pendingSetProp_;	// 4 = 0x4
	NSMutableDictionary *currentSetProp_;	// 8 = 0x8
}
@property(retain) NSMutableDictionary *currentSetProp;	// G=0x3335f1dc; S=0x3335f1a8; @synthesize=currentSetProp_
@property(retain) NSMutableDictionary *pendingSetProp;	// G=0x3335f188; S=0x3335f154; @synthesize=pendingSetProp_
+ (id)sharedInstance;	// 0x3335f00c
- (id)init;	// 0x3335ef3c
// declared property getter: - (id)currentSetProp;	// 0x3335f1dc
- (void)dealloc;	// 0x3335f7bc
- (void)invoke:(id)invoke method:(id)method args:(id)args;	// 0x3335f350
// declared property getter: - (id)pendingSetProp;	// 0x3335f188
- (void)post:(id)post;	// 0x3335f1fc
// declared property setter: - (void)setCurrentSetProp:(id)prop;	// 0x3335f1a8
// declared property setter: - (void)setPendingSetProp:(id)prop;	// 0x3335f154
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x3335f5d4
@end
