/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NflxhlsAuthenticationPrimer, NSCondition;

@interface HTTPServer : XXUnknownSuperclass {
	NflxhlsAuthenticationPrimer *primer;	// 4 = 0x4
	BOOL serverRunning;	// 8 = 0x8
	BOOL serverStopping;	// 9 = 0x9
	NSCondition *stopCondition;	// 12 = 0xc
	BOOL serverRunning_;	// 16 = 0x10
}
@property(assign) BOOL serverRunning;	// G=0x454181; S=0x454199; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x453d45
+ (id)instance;	// 0x453cfd
- (id)init;	// 0x453951
- (void)dealloc;	// 0x4539b5
- (void)debugHTTP:(BOOL)http;	// 0x453d81
- (void)httpServerMain:(id)main;	// 0x453da1
// declared property getter: - (BOOL)serverRunning;	// 0x454181
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x454199
- (void)start;	// 0x453a01
- (void)stop;	// 0x453bb9
@end

