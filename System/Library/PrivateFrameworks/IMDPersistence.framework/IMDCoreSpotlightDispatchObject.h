/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDCoreRecentsProtocol;
@class NSObject;

@interface IMDCoreSpotlightDispatchObject : NSObject {

	BOOL _allowsOverrideOfObjects;
	BOOL _shouldAddToSuggestions;
	BOOL _shouldAddToSpotlight;
	BOOL _shouldAddToCoreRecents;
	NSObject*<IMDCoreRecentsProtocol> _recentsInstance;

}

@property (assign,nonatomic) NSObject*<IMDCoreRecentsProtocol> recentsInstance;              //@synthesize recentsInstance=_recentsInstance - In the implementation block
@property (assign,nonatomic) BOOL allowsOverrideOfObjects;                                   //@synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSuggestions;                                    //@synthesize shouldAddToSuggestions=_shouldAddToSuggestions - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSpotlight;                                      //@synthesize shouldAddToSpotlight=_shouldAddToSpotlight - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToCoreRecents;                                    //@synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<IMDCoreRecentsProtocol>)recentsInstance;
-(void)setRecentsInstance:(NSObject*<IMDCoreRecentsProtocol>)arg1 ;
-(BOOL)allowsOverrideOfObjects;
-(void)setAllowsOverrideOfObjects:(BOOL)arg1 ;
-(BOOL)shouldAddToSuggestions;
-(void)setShouldAddToSuggestions:(BOOL)arg1 ;
-(BOOL)shouldAddToSpotlight;
-(void)setShouldAddToSpotlight:(BOOL)arg1 ;
-(BOOL)shouldAddToCoreRecents;
-(void)setShouldAddToCoreRecents:(BOOL)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
@end
