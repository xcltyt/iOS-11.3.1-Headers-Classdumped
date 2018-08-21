/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleDataProviderFactory.h>

@protocol FCContentContext, NUFontRegistration, SXHost, NUEmbedDataManager;
@class NSString;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory> {

	id<FCContentContext> _contentContext;
	id<NUFontRegistration> _fontRegistration;
	id<SXHost> _host;
	id<NUEmbedDataManager> _embedDataManager;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<NUFontRegistration> fontRegistration;              //@synthesize fontRegistration=_fontRegistration - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<NUEmbedDataManager> embedDataManager;              //@synthesize embedDataManager=_embedDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(id<FCContentContext>)contentContext;
-(id)createArticleDataProviderWithArticle:(id)arg1 ;
-(id<NUFontRegistration>)fontRegistration;
-(id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4 ;
-(id<NUEmbedDataManager>)embedDataManager;
@end
