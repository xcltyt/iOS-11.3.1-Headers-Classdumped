/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NKIssue, NSString, NSData, NSURLRequest, NSURLConnection, NSDictionary;

@interface NKAssetDownload : NSObject <NSSecureCoding> {

	NKIssue* _issue;
	NSString* _identifier;
	NSData* _userInfoData;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	BOOL _attemptedConnection;
	BOOL _isDecodingValid;

}

@property (copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSURLRequest * URLRequest;                   //@synthesize request=_request - In the implementation block
@property (retain) NSData * userInfoData;                     //@synthesize userInfoData=_userInfoData - In the implementation block
@property (retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL attemptedConnection;                  //@synthesize attemptedConnection=_attemptedConnection - In the implementation block
@property (__weak,readonly) NKIssue * issue;                  //@synthesize issue=_issue - In the implementation block
@property (copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)userInfo;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)_cancel;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(id)_connection;
-(BOOL)_attemptedConnection;
-(BOOL)_isDecodingValid;
-(void)_issueWasRemovedFromLibrary;
-(void)_setIssue:(id)arg1 ;
-(id)_initWithURLRequest:(id)arg1 issue:(id)arg2 ;
-(void)setIssue:(NKIssue *)arg1 ;
-(NKIssue *)issue;
-(BOOL)attemptedConnection;
-(void)_connectionBackgroundDownloadPreCompleted:(id)arg1 ;
-(void)_connectionBackgroundDownloadPostCompleted:(id)arg1 ;
-(void)setAttemptedConnection:(BOOL)arg1 ;
-(id)downloadWithDelegate:(id)arg1 ;
-(NSURLRequest *)URLRequest;
@end
