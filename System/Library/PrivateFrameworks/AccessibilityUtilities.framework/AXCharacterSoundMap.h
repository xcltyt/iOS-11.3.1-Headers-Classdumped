/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject {

	NSMutableDictionary* _phDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * phDictionaries;              //@synthesize phDictionaries=_phDictionaries - In the implementation block
-(id)init;
-(id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4 ;
-(id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(NSMutableDictionary *)phDictionaries;
-(void)setPhDictionaries:(NSMutableDictionary *)arg1 ;
@end
