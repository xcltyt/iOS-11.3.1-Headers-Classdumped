/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject {

	NSDictionary* _brailleCommands;

}
-(id)localizedNameForCategory:(id)arg1 ;
-(void)_loadBrailleCommandsIfNecessary;
-(id)brailleVoiceOverCategories;
-(id)brailleCommandsForCategory:(id)arg1 ;
-(id)localizedNameForCommand:(id)arg1 ;
@end
