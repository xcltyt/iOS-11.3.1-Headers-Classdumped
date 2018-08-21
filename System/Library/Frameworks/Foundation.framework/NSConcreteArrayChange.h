/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSArrayChange.h>

@interface NSConcreteArrayChange : NSArrayChange {

	unsigned long long _changeType;
	unsigned long long _sourceIndex;
	unsigned long long _destinationIndex;
	id _value;

}
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)destinationIndex;
-(unsigned long long)sourceIndex;
-(void)dealloc;
-(id)value;
-(unsigned long long)changeType;
@end
