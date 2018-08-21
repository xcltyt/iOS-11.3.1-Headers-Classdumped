/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(BOOL)canInitWithTask:(id)arg1 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)registerClass:(Class)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(void)unregisterClass:(Class)arg1 ;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(NSURLRequest *)request;
-(void)stopLoading;
-(NSCachedURLResponse *)cachedResponse;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(id<NSURLProtocolClient>)client;
@end
