/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MAAsset : NSObject {

	NSDictionary* _attributes;
	NSString* _assetType;
	NSString* _assetId;
	long long _state;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                   //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * assetId;                     //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,readonly) long long state;                        //@synthesize state=_state - In the implementation block
+(void)startCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(id)hashToString:(id)arg1 ;
-(void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)startDownload:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)createExtractor;
-(long long)calculateTimeout;
-(id)assetProperty:(id)arg1 ;
-(void)attachProgressCallBack:(/*^block*/id)arg1 ;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(long long)state;
-(NSDictionary *)attributes;
-(id)initWithAttributes:(id)arg1 ;
-(id)getLocalFileUrl;
-(NSString *)assetId;
-(void)logAsset;
-(void)startDownload:(/*^block*/id)arg1 ;
-(NSString *)assetType;
-(BOOL)refreshState;
-(id)getLocalUrl;
-(void)purge:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
@end
