/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface LTFairPlayInfo : XXUnknownSuperclass {
	id _sessionToken;	// 4 = 0x4
	NSString *_keyBagPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyBagPath;	// G=0x19fc9; converted property
@property(readonly, retain) id sessionToken;	// G=0x19fb5; converted property
+ (id)infoWithToken:(id)token keyBagPath:(id)path;	// 0x19e61
- (id)initWithToken:(id)token keyBagPath:(id)path;	// 0x19ecd
- (void).cxx_destruct;	// 0x19fdd
- (id)description;	// 0x19f5d
// converted property getter: - (id)keyBagPath;	// 0x19fc9
// converted property getter: - (id)sessionToken;	// 0x19fb5
@end

