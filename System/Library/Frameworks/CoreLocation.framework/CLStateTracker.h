/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@interface CLStateTracker : NSObject {

	unsigned long long _handle;

}

@property (nonatomic,readonly) void* identifier; 
+(unsigned long long)trackerStateSize;
+(const char*)trackerStateTypeName;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
-(void)dealloc;
-(void*)identifier;
-(id)initWithQueue:(id)arg1 ;
@end
