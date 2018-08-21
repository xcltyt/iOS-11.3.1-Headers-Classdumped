/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	BOOL shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)skipDescendents;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
-(id)fileAttributes;
-(id)directoryAttributes;
@end
