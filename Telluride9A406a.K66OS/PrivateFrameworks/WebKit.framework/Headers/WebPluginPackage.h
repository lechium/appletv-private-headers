/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebBasePluginPackage.h"
#import "WebKit-Structs.h"

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage {
@private
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x302b93d9
- (id)bundle;	// 0x302be40d
- (void)dealloc;	// 0x30308041
- (BOOL)load;	// 0x302be2a9
- (Class)viewFactory;	// 0x302be359
@end

