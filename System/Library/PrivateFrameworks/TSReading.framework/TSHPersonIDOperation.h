/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSHXmlOperation.h>

@class NSString;

@interface TSHPersonIDOperation : TSHXmlOperation {

	NSString* mPersonID;
	BOOL mInHref;
	long long mHrefCount;

}
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)personID;
-(void)dealloc;
-(id)request;
-(id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3 ;
-(id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5 ;
-(void)start:(id)arg1 notifyWhenFinished:(id)arg2 ;
@end
