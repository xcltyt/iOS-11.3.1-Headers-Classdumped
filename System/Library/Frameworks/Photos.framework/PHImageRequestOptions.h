/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHImageRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _synchronous;
	BOOL _memoryCachingAllowed;
	BOOL _deliveryFirstResultAsynchronously;
	BOOL _allowPlaceholder;
	BOOL _allowSecondaryOpportunisticImage;
	int _requestID;
	long long _version;
	long long _deliveryMode;
	long long _resizeMode;
	/*^block*/id _progressHandler;
	long long _loadingMode;
	long long _rank;
	double _demoteFactor;
	double _aspectRatioHint;
	double _downloadUpdateInterval;
	/*^block*/id _cachingCompletedHandler;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) int requestID;                                                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) long long loadingMode;                                                //@synthesize loadingMode=_loadingMode - In the implementation block
@property (assign,getter=isMemoryCachingAllowed,nonatomic) BOOL memoryCachingAllowed;              //@synthesize memoryCachingAllowed=_memoryCachingAllowed - In the implementation block
@property (assign,nonatomic) BOOL deliveryFirstResultAsynchronously;                               //@synthesize deliveryFirstResultAsynchronously=_deliveryFirstResultAsynchronously - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL allowSecondaryOpportunisticImage;                                //@synthesize allowSecondaryOpportunisticImage=_allowSecondaryOpportunisticImage - In the implementation block
@property (assign,nonatomic) long long rank;                                                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) double demoteFactor;                                                  //@synthesize demoteFactor=_demoteFactor - In the implementation block
@property (assign,nonatomic) double aspectRatioHint;                                               //@synthesize aspectRatioHint=_aspectRatioHint - In the implementation block
@property (assign,nonatomic) double downloadUpdateInterval;                                        //@synthesize downloadUpdateInterval=_downloadUpdateInterval - In the implementation block
@property (nonatomic,copy) id cachingCompletedHandler;                                             //@synthesize cachingCompletedHandler=_cachingCompletedHandler - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;                                            //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)defaultOptionsAllowingPlaceholder;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setProgressHandler:(id)arg1 ;
-(int)requestIDOrNextIfInvalid;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(CGRect)normalizedCropRect;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(BOOL)isMemoryCachingAllowed;
-(BOOL)deliveryFirstResultAsynchronously;
-(void)setDeliveryFirstResultAsynchronously:(BOOL)arg1 ;
-(BOOL)allowPlaceholder;
-(double)demoteFactor;
-(void)setDemoteFactor:(double)arg1 ;
-(double)aspectRatioHint;
-(double)downloadUpdateInterval;
-(id)cachingCompletedHandler;
-(void)setCachingCompletedHandler:(id)arg1 ;
-(BOOL)allowSecondaryOpportunisticImage;
-(void)setRequestID:(int)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setAspectRatioHint:(double)arg1 ;
-(void)setDownloadUpdateInterval:(double)arg1 ;
-(id)progressHandler;
-(void)setLoadingMode:(long long)arg1 ;
-(int)requestID;
-(long long)resizeMode;
-(long long)deliveryMode;
-(BOOL)isSynchronous;
-(long long)loadingMode;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setAllowSecondaryOpportunisticImage:(BOOL)arg1 ;
-(void)setMemoryCachingAllowed:(BOOL)arg1 ;
@end
