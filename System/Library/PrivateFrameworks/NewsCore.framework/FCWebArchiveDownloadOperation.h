/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSURL, WKWebView, NSString;

@interface FCWebArchiveDownloadOperation : NSOperation <WKNavigationDelegate> {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _saveWebArchiveBlock;
	NSURL* _sourceURL;
	WKWebView* _webView;

}

@property (nonatomic,retain) NSURL * sourceURL;                     //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (copy) id saveWebArchiveBlock;                            //@synthesize saveWebArchiveBlock=_saveWebArchiveBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)cancel;
-(void)start;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithSourceURL:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)_failWithError:(id)arg1 ;
-(void)setSaveWebArchiveBlock:(id)arg1 ;
-(void)_startLoadingWebView;
-(void)_cancelLoadingWebView;
-(id)saveWebArchiveBlock;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end
