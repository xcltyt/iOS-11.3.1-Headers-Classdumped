/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSWPPhonetics : NSObject {

	NSDictionary* _transcribers;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDictionary;
+(id)_singletonAlloc;
-(id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3 ;
-(id)transcriberWithIdentifier:(id)arg1 ;
-(id)transcriberForBaseText:(id)arg1 range:(NSRange)arg2 gettingLocale:(id*)arg3 inputLanguage:(id*)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
