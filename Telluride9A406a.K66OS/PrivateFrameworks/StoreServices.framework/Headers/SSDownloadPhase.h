/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSCoding, NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0x31546319; 
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0x31546411; 
@property(readonly, assign) int phaseType;	// G=0x31546339; 
@property(readonly, assign) float progressChangeRate;	// G=0x315463a1; 
@property(readonly, assign) int progressUnits;	// G=0x31546371; 
@property(readonly, assign) long long progressValue;	// G=0x315463d1; 
@property(readonly, assign) long long totalProgressValue;	// G=0x315463f1; 
- (id)init;	// 0x315460e9
- (id)initWithOperationProgress:(id)operationProgress;	// 0x315460fd
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x315461f1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x31546269
- (id)copyPropertyListEncoding;	// 0x3154619d
- (id)copyWithZone:(NSZone *)zone;	// 0x315462a5
- (void *)copyXPCEncoding;	// 0x315461bd
- (void)dealloc;	// 0x31546151
// declared property getter: - (double)estimatedSecondsRemaining;	// 0x31546319
// declared property getter: - (id)operationProgress;	// 0x31546411
// declared property getter: - (int)phaseType;	// 0x31546339
// declared property getter: - (float)progressChangeRate;	// 0x315463a1
// declared property getter: - (int)progressUnits;	// 0x31546371
// declared property getter: - (long long)progressValue;	// 0x315463d1
// declared property getter: - (long long)totalProgressValue;	// 0x315463f1
@end

