/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRMerchantInfo;

__attribute__((visibility("hidden")))
@interface BRMerchant : XXUnknownSuperclass {
	BRMerchantInfo *_info;	// 4 = 0x4
}
@property(assign) BOOL enabled;	// G=0x389d19; S=0x389d41; 
@property(retain) BRMerchantInfo *info;	// G=0x389ca1; S=0x389cb1; @dynamic
+ (id)flagstaff;	// 0x1dfe1d
+ (id)itms;	// 0x1dfd99
+ (id)merchantForControl:(id)control;	// 0x389825
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x389839
+ (id)merchantForObject:(id)object;	// 0x389531
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x389545
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x389899
+ (id)sedona;	// 0x1dfdd9
- (id)initWithCoder:(id)coder;	// 0x389af9
- (id)initWithIdentifier:(id)identifier;	// 0x389a65
- (id)initWithVendorBag:(id)vendorBag;	// 0x3899d5
- (id)accountType;	// 0x389d15
- (void)assignToControl:(id)control;	// 0x389e85
- (BOOL)assignToObject:(id)object;	// 0x389d6d
- (Class)catalogAgent;	// 0x1dfe5d
- (id)copyWithZone:(NSZone *)zone;	// 0x389af5
- (void)dealloc;	// 0x389b01
- (void)decorateRequestProperties:(id)properties;	// 0x389ebd
- (id)description;	// 0x389b7d
// declared property getter: - (BOOL)enabled;	// 0x389d19
- (void)encodeWithCoder:(id)coder;	// 0x389afd
- (id)evaluatePlist:(id)plist;	// 0x38a11d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x389fa1
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x389fc5
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body timeout:(double)timeout;	// 0x389ff9
- (BOOL)hasAffinityToURL:(id)url;	// 0x38a125
- (id)identifier;	// 0x389ced
// declared property getter: - (id)info;	// 0x389ca1
- (id)localizedStringForKey:(id)key;	// 0x38a111
- (id)merchantErrorForError:(id)error;	// 0x38a119
- (id)playerDelegate;	// 0x38a121
- (oneway void)release;	// 0x389ae9
- (id)retain;	// 0x389ae5
- (unsigned)retainCount;	// 0x389aed
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x389d41
// declared property setter: - (void)setInfo:(id)info;	// 0x389cb1
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x389c1d
@end

