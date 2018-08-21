/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFActionSetSuggestionItemProvider : HFItemProvider {

	BOOL _hasProvidedStaticSuggestionItems;
	HMHome* _home;
	NSSet* _staticSuggestionItems;

}

@property (nonatomic,retain) NSSet * staticSuggestionItems;                      //@synthesize staticSuggestionItems=_staticSuggestionItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedStaticSuggestionItems;              //@synthesize hasProvidedStaticSuggestionItems=_hasProvidedStaticSuggestionItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                    //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(void)setStaticSuggestionItems:(NSSet *)arg1 ;
-(BOOL)hasProvidedStaticSuggestionItems;
-(NSSet *)staticSuggestionItems;
-(void)setHasProvidedStaticSuggestionItems:(BOOL)arg1 ;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 ;
@end
