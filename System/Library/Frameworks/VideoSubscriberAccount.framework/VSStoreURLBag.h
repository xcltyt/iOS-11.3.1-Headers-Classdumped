/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBag;

@interface VSStoreURLBag : NSObject {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(void)invalidateCache;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
