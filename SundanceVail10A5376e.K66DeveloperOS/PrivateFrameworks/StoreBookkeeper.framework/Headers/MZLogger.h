/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSRegularExpression, NSLock;

@interface MZLogger : NSObject {
	NSString *_auxPath;	// 4 = 0x4
	NSFileHandle *_fileHandle;	// 8 = 0x8
	NSString *_filter;	// 12 = 0xc
	NSString *_runtimeOverride;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_procName;	// 24 = 0x18
	NSRegularExpression *_runtimeOverrideRegex;	// 28 = 0x1c
	NSLock *_lock;	// 32 = 0x20
}
@property(retain) NSString *auxPath;	// G=0x300ef661; S=0x300ef551; converted property
@property(copy, nonatomic) NSString *filter;	// G=0x300efcc9; S=0x300efcdd; @synthesize=_filter
@property(copy) NSString *runtimeOverride;	// G=0x300efced; S=0x300efd01; @synthesize=_runtimeOverride
+ (id)sharedLogger;	// 0x300eee6d
- (id)init;	// 0x300eeea5
- (void)_updateSettingsFromPreferences:(id)preferences;	// 0x300ef2c9
- (void)addRuntimeOverride:(id)override;	// 0x300efbd5
// converted property getter: - (id)auxPath;	// 0x300ef661
- (void)dealloc;	// 0x300ef471
// declared property getter: - (id)filter;	// 0x300efcc9
- (void)logFile:(const char *)file lineNumber:(int)number format:(id)format;	// 0x300ef845
- (void)logFunction:(const char *)function format:(id)format;	// 0x300ef941
- (void)logString:(id)string;	// 0x300efa1d
- (void)performLoggingBlock:(id)block;	// 0x300ef801
- (void)removeRuntimeOverride:(id)override;	// 0x300efc79
// declared property getter: - (id)runtimeOverride;	// 0x300efced
// converted property setter: - (void)setAuxPath:(id)path;	// 0x300ef551
// declared property setter: - (void)setFilter:(id)filter;	// 0x300efcdd
// declared property setter: - (void)setRuntimeOverride:(id)override;	// 0x300efd01
- (BOOL)shouldOverrideCondition:(id)condition file:(id)file;	// 0x300ef671
@end
