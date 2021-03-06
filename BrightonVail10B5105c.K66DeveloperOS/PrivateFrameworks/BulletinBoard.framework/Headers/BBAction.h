/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSURL;

@interface BBAction : NSObject {
	id _internalBlock;	// 4 = 0x4
	BOOL _hasCallblock;	// 8 = 0x8
	BOOL _canBypassPinLock;	// 9 = 0x9
	NSURL *_launchURL;	// 12 = 0xc
	NSString *_launchBundleID;	// 16 = 0x10
	int _replyType;	// 20 = 0x14
	NSString *_activatePluginName;	// 24 = 0x18
	NSDictionary *_activatePluginContext;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *activatePluginContext;	// G=0x370d8c8d; S=0x370d8ca1; @synthesize=_activatePluginContext
@property(copy, nonatomic) NSString *activatePluginName;	// G=0x370d8c69; S=0x370d8c7d; @synthesize=_activatePluginName
@property(assign, nonatomic) BOOL canBypassPinLock;	// G=0x370d8c49; S=0x370d8c59; @synthesize=_canBypassPinLock
@property(assign, nonatomic) BOOL hasCallblock;	// G=0x370d8bc5; S=0x370d8bd5; @synthesize=_hasCallblock
@property(copy, nonatomic) id internalBlock;	// G=0x370d8ba1; S=0x370d8bb5; @synthesize=_internalBlock
@property(copy, nonatomic) NSString *launchBundleID;	// G=0x370d8c05; S=0x370d8c19; @synthesize=_launchBundleID
@property(retain, nonatomic) NSURL *launchURL;	// G=0x370d8be5; S=0x370d8bf5; @synthesize=_launchURL
@property(assign, nonatomic) int replyType;	// G=0x370d8c29; S=0x370d8c39; @synthesize=_replyType
+ (id)actionWithActivatePluginName:(id)activatePluginName activationContext:(id)context;	// 0x370d7f4d
+ (id)actionWithCallblock:(id)callblock;	// 0x370d7e6d
+ (id)actionWithLaunchBundleID:(id)launchBundleID callblock:(id)callblock;	// 0x370d7edd
+ (id)actionWithLaunchURL:(id)launchURL callblock:(id)callblock;	// 0x370d7ea9
+ (id)actionWithTextReplyCallblock:(id)textReplyCallblock;	// 0x370d7f11
- (id)initWithActivatePluginName:(id)activatePluginName activationContext:(id)context;	// 0x370d8095
- (id)initWithCallblock:(id)callblock;	// 0x370d7f8d
- (id)initWithCoder:(id)coder;	// 0x370d8839
- (id)initWithTextReplyCallblock:(id)textReplyCallblock;	// 0x370d8001
- (id)_initWithInternalCallblock:(id)internalCallblock replyType:(int)type;	// 0x370d80f5
// declared property getter: - (id)activatePluginContext;	// 0x370d8c8d
// declared property getter: - (id)activatePluginName;	// 0x370d8c69
- (id)bundleID;	// 0x370d8299
// declared property getter: - (BOOL)canBypassPinLock;	// 0x370d8c49
- (id)copyWithZone:(NSZone *)zone;	// 0x370d8829
- (void)dealloc;	// 0x370d816d
- (void)deliverResponse:(id)response;	// 0x370d82a9
- (id)description;	// 0x370d8b31
- (void)encodeWithCoder:(id)coder;	// 0x370d89ed
// declared property getter: - (BOOL)hasCallblock;	// 0x370d8bc5
- (BOOL)hasLaunchInfo;	// 0x370d820d
- (unsigned)hash;	// 0x370d879d
// declared property getter: - (id)internalBlock;	// 0x370d8ba1
- (BOOL)isAppLaunchAction;	// 0x370d8271
- (BOOL)isEqual:(id)equal;	// 0x370d8551
- (BOOL)isURLLaunchAction;	// 0x370d8259
// declared property getter: - (id)launchBundleID;	// 0x370d8c05
// declared property getter: - (id)launchURL;	// 0x370d8be5
- (id)partialDescription;	// 0x370d82f5
// declared property getter: - (int)replyType;	// 0x370d8c29
// declared property setter: - (void)setActivatePluginContext:(id)context;	// 0x370d8ca1
// declared property setter: - (void)setActivatePluginName:(id)name;	// 0x370d8c7d
// declared property setter: - (void)setCanBypassPinLock:(BOOL)lock;	// 0x370d8c59
// declared property setter: - (void)setHasCallblock:(BOOL)callblock;	// 0x370d8bd5
// declared property setter: - (void)setInternalBlock:(id)block;	// 0x370d8bb5
// declared property setter: - (void)setLaunchBundleID:(id)anId;	// 0x370d8c19
// declared property setter: - (void)setLaunchURL:(id)url;	// 0x370d8bf5
// declared property setter: - (void)setReplyType:(int)type;	// 0x370d8c39
- (id)url;	// 0x370d8289
- (BOOL)wantsTextReply;	// 0x370d823d
@end

