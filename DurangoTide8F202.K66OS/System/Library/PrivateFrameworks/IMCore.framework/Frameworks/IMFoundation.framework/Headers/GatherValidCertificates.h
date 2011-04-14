/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMThreadedWorkUnit.h"

@class NSString, NSArray;

@interface GatherValidCertificates : IMThreadedWorkUnit {
	NSString *_screenName;	// 28 = 0x1c
	unsigned _usage;	// 32 = 0x20
	BOOL _forMe;	// 36 = 0x24
	NSArray *_certs;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSArray *certificates;	// G=0x3120d0f1; @synthesize=_certs
@property(readonly, assign, nonatomic) NSString *screenName;	// G=0x3120d101; @synthesize=_screenName
+ (id)gatherCertsForScreenName:(id)screenName usage:(unsigned)usage forMyUse:(BOOL)myUse;	// 0x3120d361
- (id)initWithScreenName:(id)screenName usage:(unsigned)usage forMyUse:(BOOL)myUse;	// 0x3120d3b1
- (void)_workerThread;	// 0x3120d60d
- (void)_workerThreadFinished;	// 0x3120d27d
// declared property getter: - (id)certificates;	// 0x3120d0f1
- (void)dealloc;	// 0x3120d305
// declared property getter: - (id)screenName;	// 0x3120d101
@end

