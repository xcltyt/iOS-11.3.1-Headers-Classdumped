/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)implNotification:(id)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(BOOL)takePhoto;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)deactivate;
-(void)stop;
-(BOOL)start;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)isRecording;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(double)recordedDuration;
-(BOOL)activate:(id*)arg1 ;
@end
