/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class DEDBugSession, NSString, NSURL, NSArray;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving> {

	DEDBugSession* _fromBugSession;
	NSString* _deviceID;
	NSURL* _rootURL;
	NSString* _displayName;
	NSString* _extensionID;
	NSArray* _attachmentItems;

}

@property (retain) DEDBugSession * fromBugSession;                  //@synthesize fromBugSession=_fromBugSession - In the implementation block
@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSURL * rootURL;                                 //@synthesize rootURL=_rootURL - In the implementation block
@property (retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * extensionID;                          //@synthesize extensionID=_extensionID - In the implementation block
@property (retain) NSArray * attachmentItems;                       //@synthesize attachmentItems=_attachmentItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)groupWithDictionary:(id)arg1 ;
+(id)groupWithDEGroup:(id)arg1 identifier:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(NSString *)description;
-(BOOL)isLocal;
-(NSString *)displayName;
-(id)archiveName;
-(NSURL *)rootURL;
-(void)setRootURL:(NSURL *)arg1 ;
-(void)setAttachmentItems:(NSArray *)arg1 ;
-(NSArray *)attachmentItems;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)totalFilesize;
-(DEDBugSession *)fromBugSession;
-(void)setFromBugSession:(DEDBugSession *)arg1 ;
-(id)serialize;
@end
