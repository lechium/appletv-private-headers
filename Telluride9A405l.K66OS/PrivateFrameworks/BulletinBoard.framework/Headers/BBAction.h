/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSURL, NSString;

@interface BBAction : NSObject <NSCopying, NSCoding> {
@private
	id _internalBlock;	// 4 = 0x4
	BOOL _hasCallblock;	// 8 = 0x8
	BOOL _canBypassPinLock;	// 9 = 0x9
	NSURL *_launchURL;	// 12 = 0xc
	NSString *_launchBundleID;	// 16 = 0x10
	int replyType;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL canBypassPinLock;	// G=0x3149443d; S=0x3149444d; @synthesize=_canBypassPinLock
@property(assign, nonatomic) BOOL hasCallblock;	// G=0x31494395; S=0x314943a5; @synthesize=_hasCallblock
@property(copy, nonatomic) id internalBlock;	// G=0x31494361; S=0x31494371; @synthesize=_internalBlock
@property(copy, nonatomic) NSString *launchBundleID;	// G=0x314943e9; S=0x314943f9; @synthesize=_launchBundleID
@property(retain, nonatomic) NSURL *launchURL;	// G=0x314943b5; S=0x314943c5; @synthesize=_launchURL
@property(assign, nonatomic) int replyType;	// G=0x3149441d; S=0x3149442d; @synthesize
+ (id)actionWithCallblock:(id)callblock;	// 0x31493a7d
+ (id)actionWithLaunchBundleID:(id)launchBundleID callblock:(id)callblock;	// 0x31493aed
+ (id)actionWithLaunchURL:(id)launchURL callblock:(id)callblock;	// 0x31493ab9
+ (id)actionWithTextReplyCallblock:(id)textReplyCallblock;	// 0x31493b21
- (id)initWithCallblock:(id)callblock;	// 0x31493b5d
- (id)initWithCoder:(id)coder;	// 0x314940c1
- (id)initWithTextReplyCallblock:(id)textReplyCallblock;	// 0x31493bd1
- (id)_initWithInternalCallblock:(id)internalCallblock replyType:(int)type;	// 0x31493c65
- (id)bundleID;	// 0x31493ddd
// declared property getter: - (BOOL)canBypassPinLock;	// 0x3149443d
- (id)copyWithZone:(NSZone *)zone;	// 0x31493f99
- (void)dealloc;	// 0x31493cdd
- (void)deliverResponse:(id)response;	// 0x31493ded
- (id)description;	// 0x314942f1
- (void)encodeWithCoder:(id)coder;	// 0x314941fd
// declared property getter: - (BOOL)hasCallblock;	// 0x31494395
- (BOOL)hasLaunchInfo;	// 0x31493d51
// declared property getter: - (id)internalBlock;	// 0x31494361
- (BOOL)isAppLaunchAction;	// 0x31493db5
- (BOOL)isURLLaunchAction;	// 0x31493d9d
// declared property getter: - (id)launchBundleID;	// 0x314943e9
// declared property getter: - (id)launchURL;	// 0x314943b5
- (id)partialDescription;	// 0x31493e35
// declared property getter: - (int)replyType;	// 0x3149441d
// declared property setter: - (void)setCanBypassPinLock:(BOOL)lock;	// 0x3149444d
// declared property setter: - (void)setHasCallblock:(BOOL)callblock;	// 0x314943a5
// declared property setter: - (void)setInternalBlock:(id)block;	// 0x31494371
// declared property setter: - (void)setLaunchBundleID:(id)anId;	// 0x314943f9
// declared property setter: - (void)setLaunchURL:(id)url;	// 0x314943c5
// declared property setter: - (void)setReplyType:(int)type;	// 0x3149442d
- (id)url;	// 0x31493dcd
- (BOOL)wantsTextReply;	// 0x31493d7d
@end

