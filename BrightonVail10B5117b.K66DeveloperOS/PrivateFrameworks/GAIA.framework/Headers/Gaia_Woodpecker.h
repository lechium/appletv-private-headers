/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import <NSObject.h> // Unknown library
#import "GAIA-Structs.h"
#import "iGaia_Woodpecker.h"


@interface Gaia_Woodpecker : NSObject <iGaia_Woodpecker> {
	tGaia_Woodpecker *_wp;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) tGaia_Woodpecker *wpPtr;	// G=0x3410546d; @synthesize=_wp
- (id)init;	// 0x34105269
- (id)initWithLogManager:(iGaia_LogManager *)logManager;	// 0x341052b1
- (int)AppendUsbDevice:(iGaia_UsbDevice *)device;	// 0x34105389
- (int)FwDownload:(const char *)download blockSize:(int)size target:(int)target wpFlashKey:(unsigned long)key;	// 0x341053b1
- (const tGaia_WoodpeckerInfo *)GetDeviceInfo;	// 0x34105355
- (iGaia_LogManager *)GetLogManager;	// 0x34105371
- (int)SetEventSink:(id)sink;	// 0x3410539d
- (int)SetName:(unsigned long)name;	// 0x34105339
- (void)dealloc;	// 0x341052f9
- (int)wpGetFixtureStat:(char *)stat;	// 0x34105441
- (int)wpGetReport:(unsigned char)report data:(void *)data length:(unsigned long)length;	// 0x341053dd
// declared property getter: - (tGaia_Woodpecker *)wpPtr;	// 0x3410546d
- (int)wpReadADC:(int)adc channel:(unsigned char)channel samples:(unsigned char)samples avgValue:(double *)value;	// 0x34105415
- (int)wpSetFixtureStat:(unsigned char)stat timeoutSec:(unsigned char)sec;	// 0x34105455
- (int)wpSetReport:(unsigned char)report data:(void *)data length:(unsigned long)length;	// 0x341053f9
@end
