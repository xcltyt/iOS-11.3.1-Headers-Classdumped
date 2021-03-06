/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsHeap.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryHeap : MTLToolsHeap {

	MTLTelemetryDevice* _telemetryDevice;

}

@property (nonatomic,readonly) MTLTelemetryDevice * telemetryDevice;              //@synthesize telemetryDevice=_telemetryDevice - In the implementation block
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3 ;
-(MTLTelemetryDevice *)telemetryDevice;
@end

