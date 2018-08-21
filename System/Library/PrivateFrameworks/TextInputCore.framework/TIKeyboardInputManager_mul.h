/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(BOOL)updateLanguageModelForKeyboardState;
-(id)keyboardConfiguration;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(float)weightForInputMode:(id)arg1 ;
-(SCD_Struct_TI6)lexiconInfoForInputMode:(id)arg1 ;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(LanguageModelContainer*)languageModelContainer;
-(BOOL)shouldUpdateDictionary;
-(void)loadDictionaries;
-(void)didUpdateInputModes:(id)arg1 ;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(void)updateLanguagePriors;
-(id)resourceInputModes;
@end
