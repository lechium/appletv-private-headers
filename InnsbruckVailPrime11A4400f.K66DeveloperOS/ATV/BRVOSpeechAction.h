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
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x2d462d; S=0x2d463d; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x2d466d; S=0x2d4681; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x2d464d; S=0x2d465d; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x2d45ed; S=0x2d45fd; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x2d460d; S=0x2d461d; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x2d45c9; S=0x2d45dd; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x2d4471
// declared property getter: - (BOOL)cannotInterrupt;	// 0x2d462d
// declared property getter: - (id)completionCallback;	// 0x2d466d
- (void)dealloc;	// 0x2d44e5
- (id)description;	// 0x2d4571
// declared property getter: - (id)language;	// 0x2d464d
// declared property getter: - (id)pitch;	// 0x2d45ed
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x2d463d
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x2d4681
// declared property setter: - (void)setLanguage:(id)language;	// 0x2d465d
// declared property setter: - (void)setPitch:(id)pitch;	// 0x2d45fd
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x2d461d
// declared property setter: - (void)setString:(id)string;	// 0x2d45dd
// declared property getter: - (BOOL)shouldQueue;	// 0x2d460d
// declared property getter: - (id)string;	// 0x2d45c9
@end

