/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {

	NSDictionary* _bundleDictionary;
	NSLock* _lock;

}

@property (copy,readonly) NSDictionary * bundleDictionary; 
+(id)_urlForBundleIdentifier:(id)arg1 ;
+(id)_fallbackItemIdentifier:(id)arg1 ;
+(id)urlForBundleIdentifier:(id)arg1 ;
+(BOOL)isRestrictedAppBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_invalidateLookupCache:(id)arg1 ;
-(void)_populateBundleDictionary;
-(id)_identifierForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)bundleDictionary;
-(id)itemIdentifierForBundleIdentifer:(id)arg1 ;
@end
