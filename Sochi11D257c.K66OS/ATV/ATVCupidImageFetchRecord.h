/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ATVCupidAccessObject;

__attribute__((visibility("hidden")))
@interface ATVCupidImageFetchRecord : XXUnknownSuperclass {
	BOOL _isActive;	// 4 = 0x4
	ATVCupidAccessObject *_accessObject;	// 8 = 0x8
	id _imageToken;	// 12 = 0xc
	NSString *_assetID;	// 16 = 0x10
	int _priority;	// 20 = 0x14
	id _completionHandler;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) ATVCupidAccessObject *accessObject;	// G=0x4f712d; @synthesize=_accessObject
@property(readonly, assign, nonatomic) NSString *assetID;	// G=0x4f715d; @synthesize=_assetID
@property(copy, nonatomic) id completionHandler;	// G=0x4f718d; S=0x4f71a1; @synthesize=_completionHandler
@property(readonly, assign, nonatomic) id imageToken;	// G=0x4f714d; @synthesize=_imageToken
@property(assign, nonatomic) BOOL isActive;	// G=0x4f71b1; S=0x4f71c1; @synthesize=_isActive
@property(assign, nonatomic) int priority;	// G=0x4f716d; S=0x4f717d; @synthesize=_priority
- (id)initWithAccessObject:(id)accessObject imageToken:(id)token assetID:(id)anId;	// 0x4f7081
- (void).cxx_destruct;	// 0x4f71d1
// declared property getter: - (id)accessObject;	// 0x4f712d
// declared property getter: - (id)assetID;	// 0x4f715d
// declared property getter: - (id)completionHandler;	// 0x4f718d
// declared property getter: - (id)imageToken;	// 0x4f714d
// declared property getter: - (BOOL)isActive;	// 0x4f71b1
// declared property getter: - (int)priority;	// 0x4f716d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x4f71a1
// declared property setter: - (void)setIsActive:(BOOL)active;	// 0x4f71c1
// declared property setter: - (void)setPriority:(int)priority;	// 0x4f717d
@end

