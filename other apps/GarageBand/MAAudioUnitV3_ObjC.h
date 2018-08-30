//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AUAudioUnit;

@interface MAAudioUnitV3_ObjC : NSObject
{
    AUAudioUnit *_au;
    CDUnknownFunctionPointerType _listener;
    void *_userValue;
    double _processDelay;
    double _tailTime;
}

+ (id)createAudioUnitForPlug:(void *)arg1 outOfProcess:(_Bool)arg2;
- (void)setIOBufferSize:(int)arg1;
- (_Bool)needsPermanentRendering;
- (_Bool)needsUADLiveMode;
- (void)notifyParameterChange:(void *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removePropertyToObserve:(struct __CFString *)arg1;
- (void)addPropertyToObserve:(struct __CFString *)arg1;
- (void)setListenerFunction:(void *)arg1 userValue:(void *)arg2;
- (void)setContextName:(id)arg1;
- (void)setPreset:(id)arg1;
- (id)factoryPresets;
- (void)reset;
- (_Bool)setSettings:(struct __CFData *)arg1 fromDocument:(_Bool)arg2;
- (struct __CFData *)getSettings:(_Bool)arg1;
- (void)freeRenderResources;
- (_Bool)allocateRenderResources;
- (void)setShouldBypassMIDIEffects:(_Bool)arg1;
- (void)setMIDIOutputBlock:(CDUnknownBlockType)arg1;
- (void)setMusicalContextBlock:(CDUnknownBlockType)arg1 andTransportStateBlock:(CDUnknownBlockType)arg2;
- (void *)sendMIDIBlock;
- (long long)numberOfMIDIPorts;
- (void *)renderBlock;
- (_Bool)supportsMPE;
- (_Bool)isInstrument;
- (double)tailTime;
- (double)processDelay;
- (_Bool)setOfflineMode:(_Bool)arg1;
- (struct __CFString *)getShortName;
- (_Bool)canDoInplace;
- (unsigned long long)setBufferSize:(unsigned long long)arg1;
- (int)getBusFormat:(int)arg1 forScope:(unsigned int)arg2;
- (int (*)[8])initBus:(int)arg1 withFormat:(int)arg2 withSamplerate:(double)arg3 forScope:(unsigned int)arg4;
- (int)setBusCount:(int)arg1 forScope:(unsigned int)arg2;
- (id)audioUnit;
- (void)dealloc;

@end
