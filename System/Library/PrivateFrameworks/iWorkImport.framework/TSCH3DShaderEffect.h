/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DShaderEffectStateInfo.h>

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
+(id)stateSharingID;
+(Class)stateClass;
+(id)effect;
-(void)addVariables:(id)arg1 ;
-(id)stateSharingID;
-(void)updateState:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(Class)stateClass;
-(BOOL)alwaysUploadData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
