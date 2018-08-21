/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSObject;


@protocol INIntentResolutionResultExport <NSObject,JSExport>
@property (nonatomic,retain) NSArray * disambiguationItems; 
@property (nonatomic,retain) NSArray * alternatives; 
@property (nonatomic,retain) NSString * conflictingParameterKeyPath; 
@property (nonatomic,retain) NSArray * incompleteParameterKeyPaths; 
@property (nonatomic,retain) NSArray * neededParameterKeyPaths; 
@property (nonatomic,retain) NSObject * resolvedValue; 
@property (nonatomic,retain) NSObject * incompleteValue; 
@property (nonatomic,retain) NSObject * itemToConfirm; 
@property (assign,nonatomic) unsigned long long unsupportedReason; 
@required
+(id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+(id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+(id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+(id)resolutionResultNeedsValue;
+(id)resolutionResultNotRequired;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+(id)unsupportedWithReason:(unsigned long long)arg1;
-(id)init;
-(NSArray *)alternatives;
-(void)setAlternatives:(id)arg1;
-(void)setUnsupportedReason:(unsigned long long)arg1;
-(unsigned long long)unsupportedReason;
-(NSObject *)resolvedValue;
-(NSArray *)disambiguationItems;
-(void)setDisambiguationItems:(id)arg1;
-(void)setResolvedValue:(id)arg1;
-(void)setItemToConfirm:(id)arg1;
-(void)setConflictingParameterKeyPath:(id)arg1;
-(void)setNeededParameterKeyPaths:(id)arg1;
-(id)_dataForIntentSlotDescription:(id)arg1;
-(NSObject *)itemToConfirm;
-(NSArray *)neededParameterKeyPaths;
-(NSString *)conflictingParameterKeyPath;
-(NSArray *)incompleteParameterKeyPaths;
-(void)setIncompleteParameterKeyPaths:(id)arg1;
-(NSObject *)incompleteValue;
-(void)setIncompleteValue:(id)arg1;

@end
