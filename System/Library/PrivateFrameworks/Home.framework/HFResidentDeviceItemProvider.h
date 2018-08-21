/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _residentDeviceItems;

}

@property (nonatomic,retain) NSMutableSet * residentDeviceItems;              //@synthesize residentDeviceItems=_residentDeviceItems - In the implementation block
@property (nonatomic,copy) id filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)init;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(NSMutableSet *)residentDeviceItems;
-(void)setResidentDeviceItems:(NSMutableSet *)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 ;
@end
