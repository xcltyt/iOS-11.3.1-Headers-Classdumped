/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSTabDialogCancellationExemption : NSObject {

	/*^block*/id _cancellationExemptionHandler;

}
+(id)sameOriginNavigationExemption:(id)arg1 ;
+(id)provisionalNavigationExemption;
+(id)committedNavigationExemption;
-(id)init;
-(id)initWithCancellationHandler:(/*^block*/id)arg1 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
@end

