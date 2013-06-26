/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import </libobjc.A.h>
#import "AssistantServices-Structs.h"

@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject {
	NSMutableDictionary *_providers;	// 4 = 0x4
	id _functionHandler;	// 8 = 0x8
	NSLocale *_locale;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL handleTTSCodes;	// G=0x301a1cd9; S=0x301a1d1d; 
@property(assign, nonatomic) BOOL handlesFunctions;	// G=0x301a1e05; S=0x301a1e49; 
+ (BOOL)_shouldAutomaticallyProvideFunctions;	// 0x301a1905
+ (id)parseUserGeneratedMessage:(id)message;	// 0x301a1909
- (id)init;	// 0x301a1af1
- (id)initWithLocale:(id)locale;	// 0x301a1b3d
- (void).cxx_destruct;	// 0x301a2839
- (id)_handleControlCodeAtIndex:(unsigned)index withBuffer:(XXStruct_A95VjB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4 hadEmpties:(BOOL *)empties;	// 0x301a2495
- (id)_handleOptionalAtIndex:(unsigned)index withBuffer:(XXStruct_A95VjB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4;	// 0x301a2305
- (id)_handleProviderAtIndex:(unsigned)index withBuffer:(XXStruct_A95VjB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4;	// 0x301a2031
// declared property getter: - (BOOL)handleTTSCodes;	// 0x301a1cd9
// declared property getter: - (BOOL)handlesFunctions;	// 0x301a1e05
- (id)parseStringRemovingControlCharacters:(id)characters error:(id *)error;	// 0x301a2815
- (id)parseStringWithFormat:(id)format error:(id *)error;	// 0x301a27f1
- (id)parseStringWithFormat:(id)format includeControlCharacters:(BOOL)characters error:(id *)error hadEmpties:(BOOL *)empties;	// 0x301a2639
- (void)registerProvider:(id)provider forNamespace:(id)aNamespace;	// 0x301a1c4d
// declared property setter: - (void)setHandleTTSCodes:(BOOL)codes;	// 0x301a1d1d
// declared property setter: - (void)setHandlesFunctions:(BOOL)functions;	// 0x301a1e49
@end
