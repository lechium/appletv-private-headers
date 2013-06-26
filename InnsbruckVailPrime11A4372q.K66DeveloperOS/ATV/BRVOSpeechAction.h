/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : XXUnknownSuperclass {
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x2e62bd; S=0x2e62cd; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x2e62fd; S=0x2e6311; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x2e62dd; S=0x2e62ed; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x2e627d; S=0x2e628d; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x2e629d; S=0x2e62ad; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x2e6259; S=0x2e626d; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x2e6101
// declared property getter: - (BOOL)cannotInterrupt;	// 0x2e62bd
// declared property getter: - (id)completionCallback;	// 0x2e62fd
- (void)dealloc;	// 0x2e6175
- (id)description;	// 0x2e6201
// declared property getter: - (id)language;	// 0x2e62dd
// declared property getter: - (id)pitch;	// 0x2e627d
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x2e62cd
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x2e6311
// declared property setter: - (void)setLanguage:(id)language;	// 0x2e62ed
// declared property setter: - (void)setPitch:(id)pitch;	// 0x2e628d
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x2e62ad
// declared property setter: - (void)setString:(id)string;	// 0x2e626d
// declared property getter: - (BOOL)shouldQueue;	// 0x2e629d
// declared property getter: - (id)string;	// 0x2e6259
@end
