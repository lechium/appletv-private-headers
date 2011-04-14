/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NccpTransactionResult : NSObject {
@private
	NSString *method;	// 4 = 0x4
	int nccpErr;	// 8 = 0x8
	int httpErr;	// 12 = 0xc
	NSString *nwErr;	// 16 = 0x10
	NSString *errorMsg;	// 20 = 0x14
}
@property(readonly, retain) NSString *errorMsg;	// G=0x3385052c; @synthesize
@property(readonly, assign) int httpErr;	// G=0x3384f134; @synthesize
@property(readonly, retain) NSString *method;	// G=0x338504ec; @synthesize
@property(readonly, assign) int nccpErr;	// G=0x3384f148; @synthesize
@property(readonly, retain) NSString *nwErr;	// G=0x3385050c; @synthesize
- (id)init;	// 0x3384f3ec
- (void)dealloc;	// 0x33850438
// declared property getter: - (id)errorMsg;	// 0x3385052c
// declared property getter: - (int)httpErr;	// 0x3384f134
// declared property getter: - (id)method;	// 0x338504ec
// declared property getter: - (int)nccpErr;	// 0x3384f148
// declared property getter: - (id)nwErr;	// 0x3385050c
- (void)reset;	// 0x33850380
- (void)setNccpTransactionResult:(id)result withNccpErr:(int)nccpErr withHttpErr:(int)httpErr withNWErr:(id)nwerr withErrorMsg:(id)errorMsg;	// 0x3385024c
- (void)setNccpTransactionResultWithErrorMsg:(id)errorMsg;	// 0x338501e0
@end

