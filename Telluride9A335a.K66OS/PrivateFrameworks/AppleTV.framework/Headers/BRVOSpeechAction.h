/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x34198cc9; S=0x34198cd9; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x34198d1d; S=0x34198d2d; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x34198ce9; S=0x34198cf9; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x34198c75; S=0x34198c85; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x34198ca9; S=0x34198cb9; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x34198c41; S=0x34198c51; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x34198aed
// declared property getter: - (BOOL)cannotInterrupt;	// 0x34198cc9
// declared property getter: - (id)completionCallback;	// 0x34198d1d
- (void)dealloc;	// 0x34198b61
- (id)description;	// 0x34198be9
// declared property getter: - (id)language;	// 0x34198ce9
// declared property getter: - (id)pitch;	// 0x34198c75
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x34198cd9
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x34198d2d
// declared property setter: - (void)setLanguage:(id)language;	// 0x34198cf9
// declared property setter: - (void)setPitch:(id)pitch;	// 0x34198c85
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x34198cb9
// declared property setter: - (void)setString:(id)string;	// 0x34198c51
// declared property getter: - (BOOL)shouldQueue;	// 0x34198ca9
// declared property getter: - (id)string;	// 0x34198c41
@end
