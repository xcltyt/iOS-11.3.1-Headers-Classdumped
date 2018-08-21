/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentScriptsManager.h>

@protocol SXWebContentScriptsManager <NSObject>
@required
-(void)addScript:(id)arg1;
-(void)removeAllScripts;
-(void)removeScript:(id)arg1;
-(void)executeScript:(id)arg1;

@end


@protocol SXWebContentLogger;
@class WKWebView, NSMutableArray, NSString;

@interface SXWebContentScriptsManager : NSObject <SXWebContentScriptsManager> {

	BOOL _readyToExecuteScripts;
	WKWebView* _webView;
	id<SXWebContentLogger> _logger;
	NSMutableArray* _queuedExecutableScripts;

}

@property (nonatomic,readonly) WKWebView * webView;                                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) id<SXWebContentLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedExecutableScripts;              //@synthesize queuedExecutableScripts=_queuedExecutableScripts - In the implementation block
@property (assign,nonatomic) BOOL readyToExecuteScripts;                              //@synthesize readyToExecuteScripts=_readyToExecuteScripts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)addScript:(id)arg1 ;
-(void)removeAllScripts;
-(void)removeScript:(id)arg1 ;
-(void)executeScript:(id)arg1 ;
-(id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3 ;
-(void)setReadyToExecuteScripts:(BOOL)arg1 ;
-(void)executeQueuedScripts;
-(BOOL)readyToExecuteScripts;
-(void)queueExecutableScript:(id)arg1 ;
-(NSMutableArray *)queuedExecutableScripts;
-(id<SXWebContentLogger>)logger;
@end
