/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_applianceInfo;	// 4 = 0x4
}
- (id)init;	// 0x2cab51
- (void)_loadAppliances;	// 0x2cadfd
- (id)applianceInfoAtIndex:(long)index;	// 0x2cac81
- (long)applianceInfoIndexForKey:(id)key;	// 0x2cacc9
- (id)controlFactory;	// 0x2cad59
- (id)dataAtIndex:(long)index;	// 0x2cad95
- (long)dataCount;	// 0x2cad75
- (void)dealloc;	// 0x2cac05
- (id)hashForDataAtIndex:(long)index;	// 0x2cadb5
- (void)reloadAppliances;	// 0x2caded
@end

