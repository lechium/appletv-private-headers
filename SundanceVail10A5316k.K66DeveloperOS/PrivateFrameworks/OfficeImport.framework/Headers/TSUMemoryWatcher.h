/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSUMemoryWatcher : NSObject {
@private
	TSUFlushingManager *_flushingManager;	// 4 = 0x4
	BOOL _going;	// 8 = 0x8
	BOOL _stop;	// 9 = 0x9
}
- (id)initWithFlushingManager:(id)flushingManager;	// 0x310ad759
- (void)_periodicallySimulateMemoryWarning:(id)warning;	// 0x312dc779
- (void)_simulateMemoryWarning:(id)warning;	// 0x312dc889
- (void)beginObserving;	// 0x310ad799
- (void)dealloc;	// 0x312dc725
- (void)stopObserving;	// 0x312dc765
@end

