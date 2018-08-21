/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAVURLAssetFactory.h>

@protocol SXAVURLAssetFactory <NSObject>
@required
-(id)createURLAssetWithURL:(id)arg1;

@end


@class NSDictionary, NSString;

@interface SXAVURLAssetFactory : NSObject <SXAVURLAssetFactory> {

	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)createURLAssetWithURL:(id)arg1 ;
@end
