/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoAlbumNames:(id)arg1 ;
@end
