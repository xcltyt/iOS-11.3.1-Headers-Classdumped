/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject {

	NSMutableSet* _assetListings;

}
+(id)sharedInstance;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)_initLibrary;
-(id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(void)setTimelapseListingHasAssets:(id)arg1 ;
@end
