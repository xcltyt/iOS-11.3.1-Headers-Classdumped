/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary;

@interface _NSThreadData : NSObject {

	id dict;
	id name;
	id target;
	SEL selector;
	id argument;
	int seqNum;
	unsigned char qstate;
	char qos;
	unsigned char cancel;
	unsigned char status;
	id performQ;
	NSMutableDictionary* performD;
	opaque_pthread_attr_t attr;
	opaque_pthread_t* tid;
	double pri;
	double defpri;

}
@end
